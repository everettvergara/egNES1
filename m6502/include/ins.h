#pragma once

#include <array>
#include "types.h"

namespace eg::m6502
{
	struct ins_attrib
	{
		const char* code;
		const char* addressing;
		byte bytes;
		byte cycles;
	};

	// LDA - Load Accumulator
	constexpr byte LDA_IM = 0xA9;
	constexpr byte LDA_ZP = 0xA5;
	constexpr byte LDA_ZPX = 0xB5;
	constexpr byte LDA_ABS = 0xAD;
	constexpr byte LDA_ABSX = 0xBD;
	constexpr byte LDA_ABSY = 0xB9;
	constexpr byte LDA_INDX = 0xA1;
	constexpr byte LDA_INDY = 0xB1;

	// LDX - Load X Register

	constexpr ins_attrib ins[256] =
	{
		{ "-", "-", 0, 0 },		// 0x00 - 0
		{ "-", "-", 0, 0 },		// 0x01 - 1
		{ "-", "-", 0, 0 },		// 0x02 - 2
		{ "-", "-", 0, 0 },		// 0x03 - 3
		{ "-", "-", 0, 0 },		// 0x04 - 4
		{ "-", "-", 0, 0 },		// 0x05 - 5
		{ "-", "-", 0, 0 },		// 0x06 - 6
		{ "-", "-", 0, 0 },		// 0x07 - 7
		{ "-", "-", 0, 0 },		// 0x08 - 8
		{ "-", "-", 0, 0 },		// 0x09 - 9
		{ "-", "-", 0, 0 },		// 0x0A - 10
		{ "-", "-", 0, 0 },		// 0x0B - 11
		{ "-", "-", 0, 0 },		// 0x0C - 12
		{ "-", "-", 0, 0 },		// 0x0D - 13
		{ "-", "-", 0, 0 },		// 0x0E - 14
		{ "-", "-", 0, 0 },		// 0x0F - 15
		{ "-", "-", 0, 0 },		// 0x10 - 16
		{ "-", "-", 0, 0 },		// 0x11 - 17
		{ "-", "-", 0, 0 },		// 0x12 - 18
		{ "-", "-", 0, 0 },		// 0x13 - 19
		{ "-", "-", 0, 0 },		// 0x14 - 20
		{ "-", "-", 0, 0 },		// 0x15 - 21
		{ "-", "-", 0, 0 },		// 0x16 - 22
		{ "-", "-", 0, 0 },		// 0x17 - 23
		{ "-", "-", 0, 0 },		// 0x18 - 24
		{ "-", "-", 0, 0 },		// 0x19 - 25
		{ "-", "-", 0, 0 },		// 0x1A - 26
		{ "-", "-", 0, 0 },		// 0x1B - 27
		{ "-", "-", 0, 0 },		// 0x1C - 28
		{ "-", "-", 0, 0 },		// 0x1D - 29
		{ "-", "-", 0, 0 },		// 0x1E - 30
		{ "-", "-", 0, 0 },		// 0x1F - 31
		{ "-", "-", 0, 0 },		// 0x20 - 32
		{ "-", "-", 0, 0 },		// 0x21 - 33
		{ "-", "-", 0, 0 },		// 0x22 - 34
		{ "-", "-", 0, 0 },		// 0x23 - 35
		{ "-", "-", 0, 0 },		// 0x24 - 36
		{ "-", "-", 0, 0 },		// 0x25 - 37
		{ "-", "-", 0, 0 },		// 0x26 - 38
		{ "-", "-", 0, 0 },		// 0x27 - 39
		{ "-", "-", 0, 0 },		// 0x28 - 40
		{ "-", "-", 0, 0 },		// 0x29 - 41
		{ "-", "-", 0, 0 },		// 0x2A - 42
		{ "-", "-", 0, 0 },		// 0x2B - 43
		{ "-", "-", 0, 0 },		// 0x2C - 44
		{ "-", "-", 0, 0 },		// 0x2D - 45
		{ "-", "-", 0, 0 },		// 0x2E - 46
		{ "-", "-", 0, 0 },		// 0x2F - 47
		{ "-", "-", 0, 0 },		// 0x30 - 48
		{ "-", "-", 0, 0 },		// 0x31 - 49
		{ "-", "-", 0, 0 },		// 0x32 - 50
		{ "-", "-", 0, 0 },		// 0x33 - 51
		{ "-", "-", 0, 0 },		// 0x34 - 52
		{ "-", "-", 0, 0 },		// 0x35 - 53
		{ "-", "-", 0, 0 },		// 0x36 - 54
		{ "-", "-", 0, 0 },		// 0x37 - 55
		{ "-", "-", 0, 0 },		// 0x38 - 56
		{ "-", "-", 0, 0 },		// 0x39 - 57
		{ "-", "-", 0, 0 },		// 0x3A - 58
		{ "-", "-", 0, 0 },		// 0x3B - 59
		{ "-", "-", 0, 0 },		// 0x3C - 60
		{ "-", "-", 0, 0 },		// 0x3D - 61
		{ "-", "-", 0, 0 },		// 0x3E - 62
		{ "-", "-", 0, 0 },		// 0x3F - 63
		{ "-", "-", 0, 0 },		// 0x40 - 64
		{ "-", "-", 0, 0 },		// 0x41 - 65
		{ "-", "-", 0, 0 },		// 0x42 - 66
		{ "-", "-", 0, 0 },		// 0x43 - 67
		{ "-", "-", 0, 0 },		// 0x44 - 68
		{ "-", "-", 0, 0 },		// 0x45 - 69
		{ "-", "-", 0, 0 },		// 0x46 - 70
		{ "-", "-", 0, 0 },		// 0x47 - 71
		{ "-", "-", 0, 0 },		// 0x48 - 72
		{ "-", "-", 0, 0 },		// 0x49 - 73
		{ "-", "-", 0, 0 },		// 0x4A - 74
		{ "-", "-", 0, 0 },		// 0x4B - 75
		{ "-", "-", 0, 0 },		// 0x4C - 76
		{ "-", "-", 0, 0 },		// 0x4D - 77
		{ "-", "-", 0, 0 },		// 0x4E - 78
		{ "-", "-", 0, 0 },		// 0x4F - 79
		{ "-", "-", 0, 0 },		// 0x50 - 80
		{ "-", "-", 0, 0 },		// 0x51 - 81
		{ "-", "-", 0, 0 },		// 0x52 - 82
		{ "-", "-", 0, 0 },		// 0x53 - 83
		{ "-", "-", 0, 0 },		// 0x54 - 84
		{ "-", "-", 0, 0 },		// 0x55 - 85
		{ "-", "-", 0, 0 },		// 0x56 - 86
		{ "-", "-", 0, 0 },		// 0x57 - 87
		{ "-", "-", 0, 0 },		// 0x58 - 88
		{ "-", "-", 0, 0 },		// 0x59 - 89
		{ "-", "-", 0, 0 },		// 0x5A - 90
		{ "-", "-", 0, 0 },		// 0x5B - 91
		{ "-", "-", 0, 0 },		// 0x5C - 92
		{ "-", "-", 0, 0 },		// 0x5D - 93
		{ "-", "-", 0, 0 },		// 0x5E - 94
		{ "-", "-", 0, 0 },		// 0x5F - 95
		{ "-", "-", 0, 0 },		// 0x60 - 96
		{ "-", "-", 0, 0 },		// 0x61 - 97
		{ "-", "-", 0, 0 },		// 0x62 - 98
		{ "-", "-", 0, 0 },		// 0x63 - 99
		{ "-", "-", 0, 0 },		// 0x64 - 100
		{ "-", "-", 0, 0 },		// 0x65 - 101
		{ "-", "-", 0, 0 },		// 0x66 - 102
		{ "-", "-", 0, 0 },		// 0x67 - 103
		{ "-", "-", 0, 0 },		// 0x68 - 104
		{ "-", "-", 0, 0 },		// 0x69 - 105
		{ "-", "-", 0, 0 },		// 0x6A - 106
		{ "-", "-", 0, 0 },		// 0x6B - 107
		{ "-", "-", 0, 0 },		// 0x6C - 108
		{ "-", "-", 0, 0 },		// 0x6D - 109
		{ "-", "-", 0, 0 },		// 0x6E - 110
		{ "-", "-", 0, 0 },		// 0x6F - 111
		{ "-", "-", 0, 0 },		// 0x70 - 112
		{ "-", "-", 0, 0 },		// 0x71 - 113
		{ "-", "-", 0, 0 },		// 0x72 - 114
		{ "-", "-", 0, 0 },		// 0x73 - 115
		{ "-", "-", 0, 0 },		// 0x74 - 116
		{ "-", "-", 0, 0 },		// 0x75 - 117
		{ "-", "-", 0, 0 },		// 0x76 - 118
		{ "-", "-", 0, 0 },		// 0x77 - 119
		{ "-", "-", 0, 0 },		// 0x78 - 120
		{ "-", "-", 0, 0 },		// 0x79 - 121
		{ "-", "-", 0, 0 },		// 0x7A - 122
		{ "-", "-", 0, 0 },		// 0x7B - 123
		{ "-", "-", 0, 0 },		// 0x7C - 124
		{ "-", "-", 0, 0 },		// 0x7D - 125
		{ "-", "-", 0, 0 },		// 0x7E - 126
		{ "-", "-", 0, 0 },		// 0x7F - 127
		{ "-", "-", 0, 0 },		// 0x80 - 128
		{ "-", "-", 0, 0 },		// 0x81 - 129
		{ "-", "-", 0, 0 },		// 0x82 - 130
		{ "-", "-", 0, 0 },		// 0x83 - 131
		{ "-", "-", 0, 0 },		// 0x84 - 132
		{ "-", "-", 0, 0 },		// 0x85 - 133
		{ "-", "-", 0, 0 },		// 0x86 - 134
		{ "-", "-", 0, 0 },		// 0x87 - 135
		{ "-", "-", 0, 0 },		// 0x88 - 136
		{ "-", "-", 0, 0 },		// 0x89 - 137
		{ "-", "-", 0, 0 },		// 0x8A - 138
		{ "-", "-", 0, 0 },		// 0x8B - 139
		{ "-", "-", 0, 0 },		// 0x8C - 140
		{ "-", "-", 0, 0 },		// 0x8D - 141
		{ "-", "-", 0, 0 },		// 0x8E - 142
		{ "-", "-", 0, 0 },		// 0x8F - 143
		{ "-", "-", 0, 0 },		// 0x90 - 144
		{ "-", "-", 0, 0 },		// 0x91 - 145
		{ "-", "-", 0, 0 },		// 0x92 - 146
		{ "-", "-", 0, 0 },		// 0x93 - 147
		{ "-", "-", 0, 0 },		// 0x94 - 148
		{ "-", "-", 0, 0 },		// 0x95 - 149
		{ "-", "-", 0, 0 },		// 0x96 - 150
		{ "-", "-", 0, 0 },		// 0x97 - 151
		{ "-", "-", 0, 0 },		// 0x98 - 152
		{ "-", "-", 0, 0 },		// 0x99 - 153
		{ "-", "-", 0, 0 },		// 0x9A - 154
		{ "-", "-", 0, 0 },		// 0x9B - 155
		{ "-", "-", 0, 0 },		// 0x9C - 156
		{ "-", "-", 0, 0 },		// 0x9D - 157
		{ "-", "-", 0, 0 },		// 0x9E - 158
		{ "-", "-", 0, 0 },		// 0x9F - 159
		{ "-", "-", 0, 0 },		// 0xA0 - 160
		{ "LDA", "INDX", 2, 6 },	// 0xA1 - 161
		{ "-", "-", 0, 0 },		// 0xA2 - 162
		{ "-", "-", 0, 0 },		// 0xA3 - 163
		{ "-", "-", 0, 0 },		// 0xA4 - 164
		{ "LDA", "ZP", 2, 3 },		// 0xA5 - 165
		{ "-", "-", 0, 0 },		// 0xA6 - 166
		{ "-", "-", 0, 0 },		// 0xA7 - 167
		{ "-", "-", 0, 0 },		// 0xA8 - 168
		{ "LDA", "IM", 2, 2 },		// 0xA9 - 169
		{ "-", "-", 0, 0 },		// 0xAA - 170
		{ "-", "-", 0, 0 },		// 0xAB - 171
		{ "-", "-", 0, 0 },		// 0xAC - 172
		{ "LDA", "ABS", 3, 4 },		// 0xAD - 173
		{ "-", "-", 0, 0 },		// 0xAE - 174
		{ "-", "-", 0, 0 },		// 0xAF - 175
		{ "-", "-", 0, 0 },		// 0xB0 - 176
		{ "LDA", "INDY", 2, 5 },		// 0xB1 - 177
		{ "-", "-", 0, 0 },		// 0xB2 - 178
		{ "-", "-", 0, 0 },		// 0xB3 - 179
		{ "-", "-", 0, 0 },		// 0xB4 - 180
		{ "LDA", "ZPX", 2, 4 },		// 0xB5 - 181
		{ "-", "-", 0, 0 },		// 0xB6 - 182
		{ "-", "-", 0, 0 },		// 0xB7 - 183
		{ "-", "-", 0, 0 },		// 0xB8 - 184
		{ "LDA", "ABSY", 3, 4 },	// 0xB9 - 185
		{ "-", "-", 0, 0 },		// 0xBA - 186
		{ "-", "-", 0, 0 },		// 0xBB - 187
		{ "-", "-", 0, 0 },		// 0xBC - 188
		{ "LDA", "ABSX", 3, 4 },// 0xBD - 189
		{ "-", "-", 0, 0 },		// 0xBE - 190
		{ "-", "-", 0, 0 },		// 0xBF - 191
		{ "-", "-", 0, 0 },		// 0xC0 - 192
		{ "-", "-", 0, 0 },		// 0xC1 - 193
		{ "-", "-", 0, 0 },		// 0xC2 - 194
		{ "-", "-", 0, 0 },		// 0xC3 - 195
		{ "-", "-", 0, 0 },		// 0xC4 - 196
		{ "-", "-", 0, 0 },		// 0xC5 - 197
		{ "-", "-", 0, 0 },		// 0xC6 - 198
		{ "-", "-", 0, 0 },		// 0xC7 - 199
		{ "-", "-", 0, 0 },		// 0xC8 - 200
		{ "-", "-", 0, 0 },		// 0xC9 - 201
		{ "-", "-", 0, 0 },		// 0xCA - 202
		{ "-", "-", 0, 0 },		// 0xCB - 203
		{ "-", "-", 0, 0 },		// 0xCC - 204
		{ "-", "-", 0, 0 },		// 0xCD - 205
		{ "-", "-", 0, 0 },		// 0xCE - 206
		{ "-", "-", 0, 0 },		// 0xCF - 207
		{ "-", "-", 0, 0 },		// 0xD0 - 208
		{ "-", "-", 0, 0 },		// 0xD1 - 209
		{ "-", "-", 0, 0 },		// 0xD2 - 210
		{ "-", "-", 0, 0 },		// 0xD3 - 211
		{ "-", "-", 0, 0 },		// 0xD4 - 212
		{ "-", "-", 0, 0 },		// 0xD5 - 213
		{ "-", "-", 0, 0 },		// 0xD6 - 214
		{ "-", "-", 0, 0 },		// 0xD7 - 215
		{ "-", "-", 0, 0 },		// 0xD8 - 216
		{ "-", "-", 0, 0 },		// 0xD9 - 217
		{ "-", "-", 0, 0 },		// 0xDA - 218
		{ "-", "-", 0, 0 },		// 0xDB - 219
		{ "-", "-", 0, 0 },		// 0xDC - 220
		{ "-", "-", 0, 0 },		// 0xDD - 221
		{ "-", "-", 0, 0 },		// 0xDE - 222
		{ "-", "-", 0, 0 },		// 0xDF - 223
		{ "-", "-", 0, 0 },		// 0xE0 - 224
		{ "-", "-", 0, 0 },		// 0xE1 - 225
		{ "-", "-", 0, 0 },		// 0xE2 - 226
		{ "-", "-", 0, 0 },		// 0xE3 - 227
		{ "-", "-", 0, 0 },		// 0xE4 - 228
		{ "-", "-", 0, 0 },		// 0xE5 - 229
		{ "-", "-", 0, 0 },		// 0xE6 - 230
		{ "-", "-", 0, 0 },		// 0xE7 - 231
		{ "-", "-", 0, 0 },		// 0xE8 - 232
		{ "-", "-", 0, 0 },		// 0xE9 - 233
		{ "-", "-", 0, 0 },		// 0xEA - 234
		{ "-", "-", 0, 0 },		// 0xEB - 235
		{ "-", "-", 0, 0 },		// 0xEC - 236
		{ "-", "-", 0, 0 },		// 0xED - 237
		{ "-", "-", 0, 0 },		// 0xEE - 238
		{ "-", "-", 0, 0 },		// 0xEF - 239
		{ "-", "-", 0, 0 },		// 0xF0 - 240
		{ "-", "-", 0, 0 },		// 0xF1 - 241
		{ "-", "-", 0, 0 },		// 0xF2 - 242
		{ "-", "-", 0, 0 },		// 0xF3 - 243
		{ "-", "-", 0, 0 },		// 0xF4 - 244
		{ "-", "-", 0, 0 },		// 0xF5 - 245
		{ "-", "-", 0, 0 },		// 0xF6 - 246
		{ "-", "-", 0, 0 },		// 0xF7 - 247
		{ "-", "-", 0, 0 },		// 0xF8 - 248
		{ "-", "-", 0, 0 },		// 0xF9 - 249
		{ "-", "-", 0, 0 },		// 0xFA - 250
		{ "-", "-", 0, 0 },		// 0xFB - 251
		{ "-", "-", 0, 0 },		// 0xFC - 252
		{ "-", "-", 0, 0 },		// 0xFD - 253
		{ "-", "-", 0, 0 },		// 0xFE - 254
		{ "-", "-", 0, 0 }		// 0xFF - 255
	};
}

/*
		{ "LDA", "IM", 2, 2 },		// 0xA9 - 169

*/
