#pragma once

#include "types.h"
#include "reg.h"
#include "m6502_tins_common.h"

namespace eg::m6502
{
	auto test_LDX_reg_check(const reg& t, byte val, word pc_add) -> bool;

	auto test_LDX_IM(byte val) -> bool;
	auto test_LDX_ZP(byte val) -> bool;
	auto test_LDX_ZPY(byte val) -> bool;
	auto test_LDX_ABS(byte val) -> bool;
	auto test_LDX_ABSY(byte val, byte Y) -> bool;

	auto test_LDX_IM_nzero_nneg() -> bool;
	auto test_LDX_IM_zero_nneg() -> bool;
	auto test_LDX_IM_nzero_neg() -> bool;
	auto test_LDX_ZP_nzero_nneg() -> bool;
	auto test_LDX_ZP_zero_nneg() -> bool;
	auto test_LDX_ZP_nzero_neg() -> bool;
	auto test_LDX_ZPY_nzero_nneg() -> bool;
	auto test_LDX_ZPY_zero_nneg() -> bool;
	auto test_LDX_ZPY_nzero_neg() -> bool;
	auto test_LDX_ABS_nzero_nneg() -> bool;
	auto test_LDX_ABS_zero_nneg() -> bool;
	auto test_LDX_ABS_nzero_neg() -> bool;
	auto test_LDX_ABSY_nzero_nneg_ncarry() -> bool;
	auto test_LDX_ABSY_zero_nneg_ncarry() -> bool;
	auto test_LDX_ABSY_nzero_neg_ncarry() -> bool;
	auto test_LDX_ABSY_nzero_nneg_carry() -> bool;
	auto test_LDX_ABSY_zero_nneg_carry() -> bool;
	auto test_LDX_ABSY_nzero_neg_carry() -> bool;
}
