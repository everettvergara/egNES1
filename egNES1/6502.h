#pragma once

#include <cstdint>
#include <array>
#include <chrono>
#include <thread>

namespace eg
{
	using byte = uint8_t;
	using word = uint16_t;

	struct status_reg
	{
		byte C : 1;		// Carry flag
		byte Z : 1;		// Zero flag
		byte I : 1;		// Interrupt disable
		byte D : 1;		// Decimal mode
		byte B : 1;		// Break command
		byte _ : 1;		// Unused
		byte V : 1;		// Overflow flag
		byte N : 1;		// Negative flag

		status_reg() : C(0), Z(0), I(0), D(0), B(0), _(0), V(0), N(0) {}

		auto reset() -> void
		{
			C = Z = I = D = B = _ = V = N = 0;
		}
	};

	struct reg
	{
		word PC;		// Program counter(16 bit)
		byte AC;		// Accumulator	(8 bit)
		byte X;			// X register	(8 bit)
		byte Y;			// Y register	(8 bit)
		status_reg SR;	// Status register(8 bit)
		byte SP;		// Stack pointer(8 bit)

		reg() : PC(0), AC(0), X(0), Y(0), SP(0) { SR.reset(); 
		
		constexpr auto x = sizeof(SR);
		}
	};


	struct mem
	{
	private:
		static constexpr size_t MAX_MEM = 1024 * 64;

	public:
		std::array<byte, MAX_MEM> data = {};

		auto operator[](word address) const -> byte
		{
			return data[address];
		}

		auto reset() -> void
		{
			data.fill(0);
		}
	};

	struct instruction
	{
		const char* code;
		const char* addressing;
		byte bytes;
		byte cycles;
	};

	std::array<instruction, 256> INSTRUCTIONS;

	constexpr byte INS_LDA_IM = 0xA9;

	class cycle
	{
		static constexpr auto FREQ = 1024 * 1024;

		std::chrono::time_point<std::chrono::steady_clock> start_{};
		byte cycles_{};

		bool bug_ = false;

	public:

		cycle() = default;

		auto has_bug() const -> bool
		{
			return bug_;
		}

		auto start_and_simulate(byte cycles) -> void
		{
			cycles_ = cycles;
			start_ = std::chrono::steady_clock::now();

			simulate();
		}

		auto simulate() -> void
		{
			if (cycles_ == 0)
				bug_ = true;

			--cycles_;

			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - start_).count();
			std::this_thread::sleep_for(std::chrono::microseconds(1.0 / FREQ - elapsed));

			start_ = std::chrono::steady_clock::now();
		}
	};

	class computer
	{
	public:

		computer(word RESET_VECTOR_ADDRESS, word RESET_ROUTINE_ADDRESS) :
			RESET_VECTOR_ADDRESS_(RESET_VECTOR_ADDRESS), RESET_ROUTINE_ADDRESS_(RESET_ROUTINE_ADDRESS) {
		}

		computer(const computer&) = delete;
		computer& operator=(const computer&) = delete;
		computer(computer&&) = delete;
		computer& operator=(computer&&) = delete;
		virtual ~computer() {}
		virtual auto reset() -> void = 0;

		// Loads from ROM/fILE to Memory
		auto load() -> bool
		{
		}

		// Executes an instruction at mem_[PC]
		auto execute() -> void
		{
			auto [instruction, cycle_count] = peek_instruction();
			cycles_.start_and_simulate(cycle_count);

			switch (instruction)
			{
			case INS_LDA_IM:
				ins_LDA_IM();
				break;
			}
		}

		auto peek_instruction() -> std::array<byte, 2>
		{
			byte instruction = mem_[reg_.PC];
			auto cycles = INSTRUCTIONS[instruction].cycles;

			++reg_.PC;

			return { instruction, cycles };
		}

		auto read_byte() -> byte
		{
			return mem_[reg_.PC++];
		}

	protected:
		const word RESET_VECTOR_ADDRESS_;
		const word RESET_ROUTINE_ADDRESS_;

		cycle cycles_;
		reg reg_;
		mem mem_;

		auto ins_LDA_IM() -> void
		{
			byte value = read_byte();
			reg_.AC = value;
			reg_.SR.Z = (value == 0);
			reg_.SR.N = (value & 0b10000000) > 0;

			cycles_.simulate();
		}
	};

	class generic_6502 : public computer
	{
	public:

		generic_6502() :
			computer(0xFFFC, 0x0000)
		{
		}

		~generic_6502()
		{
		}

		auto reset() -> void override
		{
		}
	};
}
