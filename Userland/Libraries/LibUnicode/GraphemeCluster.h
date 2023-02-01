/*
 * Copyright (c) 2023, Fausto Tommasi.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Types.h>
#include <LibUnicode/Forward.h>

namespace Unicode::GraphemeCluster {
typedef enum {
    GC_ANY = 0,
    GC_CONTROL,
    GC_CR,
    GC_LF,
    GC_L,
    GC_V,
    GC_T,
    GC_LV,
    GC_VT,
    GC_LVT,
    GC_EXTEND,
    GC_ZWJ,
    GC_PREPEND,
    GC_SPACING_MARK,
    GC_EXTEND_PICTOGRAPHIC,
    GC_RI,
} GrapheneValue;

typedef enum {
    NotBreak = 0,
    Break,
    Extended,
    Emoji,
    Regional,
} GrapheneResult;

GrapheneValue get_grapheme_value_for_code_point(u32 code_point);

GrapheneResult get_grapheme_cluster_break_property_value(u32 code_point_before, u32 code_point_after);
}
