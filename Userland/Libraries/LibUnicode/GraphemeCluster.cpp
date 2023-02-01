/*
 * Copyright (c) 2023, Fausto Tommasi.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <AK/Types.h>
#include <LibUnicode/GraphemeCluster.h>

namespace Unicode::GraphemeCluster {
GrapheneValue get_grapheme_value_for_code_point(u32 code_point)
{
#if ENABLE_UNICODE_DATA
    auto retval = Unicode::GraphemeCluster::GC_ANY;
    if (code_point <= 0x1f)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0x110bd && code_point <= 0x110bd)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0x180e && code_point <= 0x180e)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0x1bca0 && code_point <= 0x1bca3)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0x1d173 && code_point <= 0x1d17a)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0x200b && code_point <= 0x200b)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0x200e && code_point <= 0x200f)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0x2028 && code_point <= 0x202e)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0x2060 && code_point <= 0x206f)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0x600 && code_point <= 0x605)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0x61c && code_point <= 0x61c)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0x6dd && code_point <= 0x6dd)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0x70f && code_point <= 0x70f)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0x7f && code_point <= 0x9f)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0xad && code_point <= 0xad)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0xe0000 && code_point <= 0xe00ff)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0xe01f0 && code_point <= 0xe0fff)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0xfeff && code_point <= 0xfeff)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0xfff0 && code_point <= 0xfffb)
        retval = Unicode::GraphemeCluster::GC_CONTROL;
    else if (code_point >= 0x101fd && code_point <= 0x101fd)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x102d && code_point <= 0x1030)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x102e0 && code_point <= 0x102e0)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1032 && code_point <= 0x1037)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x10376 && code_point <= 0x1037a)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1039 && code_point <= 0x103a)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x103d && code_point <= 0x103e)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1058 && code_point <= 0x1059)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x105e && code_point <= 0x1060)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1071 && code_point <= 0x1074)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1082 && code_point <= 0x1082)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1085 && code_point <= 0x1086)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x108d && code_point <= 0x108d)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x109d && code_point <= 0x109d)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x10a01 && code_point <= 0x10a03)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x10a05 && code_point <= 0x10a06)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x10a0c && code_point <= 0x10a0f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x10a38 && code_point <= 0x10a3a)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x10a3f && code_point <= 0x10a3f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x10ae5 && code_point <= 0x10ae6)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11001 && code_point <= 0x11001)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11038 && code_point <= 0x11046)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1107f && code_point <= 0x11081)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x110b3 && code_point <= 0x110b6)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x110b9 && code_point <= 0x110ba)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11100 && code_point <= 0x11102)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11127 && code_point <= 0x1112b)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1112d && code_point <= 0x11134)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11173 && code_point <= 0x11173)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11180 && code_point <= 0x11181)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x111b6 && code_point <= 0x111be)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x111ca && code_point <= 0x111cc)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1122f && code_point <= 0x11231)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11234 && code_point <= 0x11234)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11236 && code_point <= 0x11237)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x112df && code_point <= 0x112df)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x112e3 && code_point <= 0x112ea)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11300 && code_point <= 0x11301)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1133c && code_point <= 0x1133c)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1133e && code_point <= 0x1133e)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11340 && code_point <= 0x11340)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11357 && code_point <= 0x11357)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11366 && code_point <= 0x1136c)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11370 && code_point <= 0x11374)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x114b0 && code_point <= 0x114b0)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x114b3 && code_point <= 0x114b8)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x114ba && code_point <= 0x114ba)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x114bd && code_point <= 0x114bd)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x114bf && code_point <= 0x114c0)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x114c2 && code_point <= 0x114c3)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x115af && code_point <= 0x115af)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x115b2 && code_point <= 0x115b5)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x115bc && code_point <= 0x115bd)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x115bf && code_point <= 0x115c0)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x115dc && code_point <= 0x115dd)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11633 && code_point <= 0x1163a)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1163d && code_point <= 0x1163d)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1163f && code_point <= 0x11640)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x116ab && code_point <= 0x116ab)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x116ad && code_point <= 0x116ad)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x116b0 && code_point <= 0x116b5)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x116b7 && code_point <= 0x116b7)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1171d && code_point <= 0x1171f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11722 && code_point <= 0x11725)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x11727 && code_point <= 0x1172b)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x135d && code_point <= 0x135f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x16af0 && code_point <= 0x16af4)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x16b30 && code_point <= 0x16b36)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x16f8f && code_point <= 0x16f92)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1712 && code_point <= 0x1714)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1732 && code_point <= 0x1734)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1752 && code_point <= 0x1753)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1772 && code_point <= 0x1773)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x17b4 && code_point <= 0x17b5)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x17b7 && code_point <= 0x17bd)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x17c6 && code_point <= 0x17c6)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x17c9 && code_point <= 0x17d3)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x17dd && code_point <= 0x17dd)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x180b && code_point <= 0x180d)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x18a9 && code_point <= 0x18a9)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1920 && code_point <= 0x1922)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1927 && code_point <= 0x1928)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1932 && code_point <= 0x1932)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1939 && code_point <= 0x193b)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1a17 && code_point <= 0x1a18)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1a1b && code_point <= 0x1a1b)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1a56 && code_point <= 0x1a56)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1a58 && code_point <= 0x1a5e)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1a60 && code_point <= 0x1a60)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1a62 && code_point <= 0x1a62)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1a65 && code_point <= 0x1a6c)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1a73 && code_point <= 0x1a7c)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1a7f && code_point <= 0x1a7f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1ab0 && code_point <= 0x1abe)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1b00 && code_point <= 0x1b03)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1b34 && code_point <= 0x1b34)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1b36 && code_point <= 0x1b3a)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1b3c && code_point <= 0x1b3c)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1b42 && code_point <= 0x1b42)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1b6b && code_point <= 0x1b73)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1b80 && code_point <= 0x1b81)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1ba2 && code_point <= 0x1ba5)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1ba8 && code_point <= 0x1ba9)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1bab && code_point <= 0x1bad)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1bc9d && code_point <= 0x1bc9e)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1be6 && code_point <= 0x1be6)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1be8 && code_point <= 0x1be9)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1bed && code_point <= 0x1bed)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1bef && code_point <= 0x1bf1)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1c2c && code_point <= 0x1c33)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1c36 && code_point <= 0x1c37)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1cd0 && code_point <= 0x1cd2)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1cd4 && code_point <= 0x1ce0)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1ce2 && code_point <= 0x1ce8)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1ced && code_point <= 0x1ced)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1cf4 && code_point <= 0x1cf4)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1cf8 && code_point <= 0x1cf9)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1d165 && code_point <= 0x1d165)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1d167 && code_point <= 0x1d169)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1d16e && code_point <= 0x1d172)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1d17b && code_point <= 0x1d182)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1d185 && code_point <= 0x1d18b)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1d1aa && code_point <= 0x1d1ad)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1d242 && code_point <= 0x1d244)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1da00 && code_point <= 0x1da36)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1da3b && code_point <= 0x1da6c)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1da75 && code_point <= 0x1da75)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1da84 && code_point <= 0x1da84)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1da9b && code_point <= 0x1da9f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1daa1 && code_point <= 0x1daaf)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1dc0 && code_point <= 0x1df5)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1dfc && code_point <= 0x1dff)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1e8d0 && code_point <= 0x1e8d6)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x200c && code_point <= 0x200d)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x20d0 && code_point <= 0x20f0)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x2cef && code_point <= 0x2cf1)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x2d7f && code_point <= 0x2d7f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x2de0 && code_point <= 0x2dff)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x300 && code_point <= 0x36f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x302a && code_point <= 0x302f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x3099 && code_point <= 0x309a)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x483 && code_point <= 0x489)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x591 && code_point <= 0x5bd)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x5bf && code_point <= 0x5bf)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x5c1 && code_point <= 0x5c2)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x5c4 && code_point <= 0x5c5)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x5c7 && code_point <= 0x5c7)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x610 && code_point <= 0x61a)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x64b && code_point <= 0x65f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x670 && code_point <= 0x670)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x6d6 && code_point <= 0x6dc)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x6df && code_point <= 0x6e4)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x6e7 && code_point <= 0x6e8)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x6ea && code_point <= 0x6ed)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x711 && code_point <= 0x711)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x730 && code_point <= 0x74a)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x7a6 && code_point <= 0x7b0)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x7eb && code_point <= 0x7f3)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x816 && code_point <= 0x819)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x81b && code_point <= 0x823)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x825 && code_point <= 0x827)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x829 && code_point <= 0x82d)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x859 && code_point <= 0x85b)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x8e3 && code_point <= 0x902)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x93a && code_point <= 0x93a)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x93c && code_point <= 0x93c)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x941 && code_point <= 0x948)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x94d && code_point <= 0x94d)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x951 && code_point <= 0x957)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x962 && code_point <= 0x963)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x981 && code_point <= 0x981)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x9bc && code_point <= 0x9bc)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x9be && code_point <= 0x9be)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x9c1 && code_point <= 0x9c4)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x9cd && code_point <= 0x9cd)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x9d7 && code_point <= 0x9d7)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x9e2 && code_point <= 0x9e3)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa01 && code_point <= 0xa02)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa3c && code_point <= 0xa3c)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa41 && code_point <= 0xa42)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa47 && code_point <= 0xa48)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa4b && code_point <= 0xa4d)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa51 && code_point <= 0xa51)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa66f && code_point <= 0xa672)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa674 && code_point <= 0xa67d)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa69e && code_point <= 0xa69f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa6f0 && code_point <= 0xa6f1)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa70 && code_point <= 0xa71)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa75 && code_point <= 0xa75)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa802 && code_point <= 0xa802)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa806 && code_point <= 0xa806)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa80b && code_point <= 0xa80b)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa81 && code_point <= 0xa82)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa825 && code_point <= 0xa826)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa8c4 && code_point <= 0xa8c4)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa8e0 && code_point <= 0xa8f1)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa926 && code_point <= 0xa92d)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa947 && code_point <= 0xa951)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa980 && code_point <= 0xa982)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa9b3 && code_point <= 0xa9b3)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa9b6 && code_point <= 0xa9b9)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa9bc && code_point <= 0xa9bc)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xa9e5 && code_point <= 0xa9e5)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xaa29 && code_point <= 0xaa2e)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xaa31 && code_point <= 0xaa32)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xaa35 && code_point <= 0xaa36)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xaa43 && code_point <= 0xaa43)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xaa4c && code_point <= 0xaa4c)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xaa7c && code_point <= 0xaa7c)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xaab0 && code_point <= 0xaab0)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xaab2 && code_point <= 0xaab4)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xaab7 && code_point <= 0xaab8)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xaabe && code_point <= 0xaabf)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xaac1 && code_point <= 0xaac1)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xaaec && code_point <= 0xaaed)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xaaf6 && code_point <= 0xaaf6)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xabc && code_point <= 0xabc)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xabe5 && code_point <= 0xabe5)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xabe8 && code_point <= 0xabe8)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xabed && code_point <= 0xabed)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xac1 && code_point <= 0xac5)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xac7 && code_point <= 0xac8)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xacd && code_point <= 0xacd)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xae2 && code_point <= 0xae3)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xb01 && code_point <= 0xb01)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xb3c && code_point <= 0xb3c)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xb3e && code_point <= 0xb3f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xb41 && code_point <= 0xb44)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xb4d && code_point <= 0xb4d)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xb56 && code_point <= 0xb57)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xb62 && code_point <= 0xb63)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xb82 && code_point <= 0xb82)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xbbe && code_point <= 0xbbe)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xbc0 && code_point <= 0xbc0)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xbcd && code_point <= 0xbcd)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xbd7 && code_point <= 0xbd7)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xc00 && code_point <= 0xc00)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xc3e && code_point <= 0xc40)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xc46 && code_point <= 0xc48)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xc4a && code_point <= 0xc4d)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xc55 && code_point <= 0xc56)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xc62 && code_point <= 0xc63)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xc81 && code_point <= 0xc81)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xcbc && code_point <= 0xcbc)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xcbf && code_point <= 0xcbf)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xcc2 && code_point <= 0xcc2)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xcc6 && code_point <= 0xcc6)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xccc && code_point <= 0xccd)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xcd5 && code_point <= 0xcd6)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xce2 && code_point <= 0xce3)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xd01 && code_point <= 0xd01)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xd3e && code_point <= 0xd3e)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xd41 && code_point <= 0xd44)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xd4d && code_point <= 0xd4d)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xd57 && code_point <= 0xd57)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xd62 && code_point <= 0xd63)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xdca && code_point <= 0xdca)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xdcf && code_point <= 0xdcf)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xdd2 && code_point <= 0xdd4)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xdd6 && code_point <= 0xdd6)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xddf && code_point <= 0xddf)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xe0100 && code_point <= 0xe01ef)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xe31 && code_point <= 0xe31)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xe34 && code_point <= 0xe3a)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xe47 && code_point <= 0xe4e)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xeb1 && code_point <= 0xeb1)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xeb4 && code_point <= 0xeb9)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xebb && code_point <= 0xebc)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xec8 && code_point <= 0xecd)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xf18 && code_point <= 0xf19)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xf35 && code_point <= 0xf35)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xf37 && code_point <= 0xf37)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xf39 && code_point <= 0xf39)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xf71 && code_point <= 0xf7e)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xf80 && code_point <= 0xf84)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xf86 && code_point <= 0xf87)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xf8d && code_point <= 0xf97)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xf99 && code_point <= 0xfbc)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xfb1e && code_point <= 0xfb1e)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xfc6 && code_point <= 0xfc6)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xfe00 && code_point <= 0xfe0f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xfe20 && code_point <= 0xfe2f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0xff9e && code_point <= 0xff9f)
        retval = Unicode::GraphemeCluster::GC_EXTEND;
    else if (code_point >= 0x1100 && code_point <= 0x115f)
        retval = Unicode::GraphemeCluster::GC_L;
    else if (code_point >= 0xa960 && code_point <= 0xa97c)
        retval = Unicode::GraphemeCluster::GC_L;
    else if (code_point >= 0xac00 && code_point <= 0xac00)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xac1c && code_point <= 0xac1c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xac38 && code_point <= 0xac38)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xac54 && code_point <= 0xac54)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xac70 && code_point <= 0xac70)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xac8c && code_point <= 0xac8c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xaca8 && code_point <= 0xaca8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xacc4 && code_point <= 0xacc4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xace0 && code_point <= 0xace0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xacfc && code_point <= 0xacfc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xad18 && code_point <= 0xad18)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xad34 && code_point <= 0xad34)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xad50 && code_point <= 0xad50)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xad6c && code_point <= 0xad6c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xad88 && code_point <= 0xad88)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xada4 && code_point <= 0xada4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xadc0 && code_point <= 0xadc0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xaddc && code_point <= 0xaddc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xadf8 && code_point <= 0xadf8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xae14 && code_point <= 0xae14)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xae30 && code_point <= 0xae30)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xae4c && code_point <= 0xae4c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xae68 && code_point <= 0xae68)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xae84 && code_point <= 0xae84)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xaea0 && code_point <= 0xaea0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xaebc && code_point <= 0xaebc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xaed8 && code_point <= 0xaed8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xaef4 && code_point <= 0xaef4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xaf10 && code_point <= 0xaf10)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xaf2c && code_point <= 0xaf2c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xaf48 && code_point <= 0xaf48)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xaf64 && code_point <= 0xaf64)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xaf80 && code_point <= 0xaf80)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xaf9c && code_point <= 0xaf9c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xafb8 && code_point <= 0xafb8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xafd4 && code_point <= 0xafd4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xaff0 && code_point <= 0xaff0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb00c && code_point <= 0xb00c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb028 && code_point <= 0xb028)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb044 && code_point <= 0xb044)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb060 && code_point <= 0xb060)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb07c && code_point <= 0xb07c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb098 && code_point <= 0xb098)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb0b4 && code_point <= 0xb0b4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb0d0 && code_point <= 0xb0d0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb0ec && code_point <= 0xb0ec)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb108 && code_point <= 0xb108)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb124 && code_point <= 0xb124)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb140 && code_point <= 0xb140)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb15c && code_point <= 0xb15c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb178 && code_point <= 0xb178)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb194 && code_point <= 0xb194)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb1b0 && code_point <= 0xb1b0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb1cc && code_point <= 0xb1cc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb1e8 && code_point <= 0xb1e8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb204 && code_point <= 0xb204)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb220 && code_point <= 0xb220)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb23c && code_point <= 0xb23c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb258 && code_point <= 0xb258)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb274 && code_point <= 0xb274)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb290 && code_point <= 0xb290)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb2ac && code_point <= 0xb2ac)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb2c8 && code_point <= 0xb2c8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb2e4 && code_point <= 0xb2e4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb300 && code_point <= 0xb300)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb31c && code_point <= 0xb31c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb338 && code_point <= 0xb338)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb354 && code_point <= 0xb354)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb370 && code_point <= 0xb370)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb38c && code_point <= 0xb38c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb3a8 && code_point <= 0xb3a8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb3c4 && code_point <= 0xb3c4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb3e0 && code_point <= 0xb3e0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb3fc && code_point <= 0xb3fc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb418 && code_point <= 0xb418)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb434 && code_point <= 0xb434)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb450 && code_point <= 0xb450)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb46c && code_point <= 0xb46c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb488 && code_point <= 0xb488)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb4a4 && code_point <= 0xb4a4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb4c0 && code_point <= 0xb4c0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb4dc && code_point <= 0xb4dc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb4f8 && code_point <= 0xb4f8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb514 && code_point <= 0xb514)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb530 && code_point <= 0xb530)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb54c && code_point <= 0xb54c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb568 && code_point <= 0xb568)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb584 && code_point <= 0xb584)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb5a0 && code_point <= 0xb5a0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb5bc && code_point <= 0xb5bc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb5d8 && code_point <= 0xb5d8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb5f4 && code_point <= 0xb5f4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb610 && code_point <= 0xb610)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb62c && code_point <= 0xb62c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb648 && code_point <= 0xb648)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb664 && code_point <= 0xb664)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb680 && code_point <= 0xb680)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb69c && code_point <= 0xb69c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb6b8 && code_point <= 0xb6b8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb6d4 && code_point <= 0xb6d4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb6f0 && code_point <= 0xb6f0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb70c && code_point <= 0xb70c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb728 && code_point <= 0xb728)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb744 && code_point <= 0xb744)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb760 && code_point <= 0xb760)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb77c && code_point <= 0xb77c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb798 && code_point <= 0xb798)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb7b4 && code_point <= 0xb7b4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb7d0 && code_point <= 0xb7d0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb7ec && code_point <= 0xb7ec)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb808 && code_point <= 0xb808)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb824 && code_point <= 0xb824)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb840 && code_point <= 0xb840)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb85c && code_point <= 0xb85c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb878 && code_point <= 0xb878)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb894 && code_point <= 0xb894)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb8b0 && code_point <= 0xb8b0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb8cc && code_point <= 0xb8cc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb8e8 && code_point <= 0xb8e8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb904 && code_point <= 0xb904)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb920 && code_point <= 0xb920)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb93c && code_point <= 0xb93c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb958 && code_point <= 0xb958)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb974 && code_point <= 0xb974)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb990 && code_point <= 0xb990)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb9ac && code_point <= 0xb9ac)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb9c8 && code_point <= 0xb9c8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xb9e4 && code_point <= 0xb9e4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xba00 && code_point <= 0xba00)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xba1c && code_point <= 0xba1c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xba38 && code_point <= 0xba38)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xba54 && code_point <= 0xba54)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xba70 && code_point <= 0xba70)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xba8c && code_point <= 0xba8c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbaa8 && code_point <= 0xbaa8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbac4 && code_point <= 0xbac4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbae0 && code_point <= 0xbae0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbafc && code_point <= 0xbafc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbb18 && code_point <= 0xbb18)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbb34 && code_point <= 0xbb34)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbb50 && code_point <= 0xbb50)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbb6c && code_point <= 0xbb6c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbb88 && code_point <= 0xbb88)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbba4 && code_point <= 0xbba4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbbc0 && code_point <= 0xbbc0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbbdc && code_point <= 0xbbdc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbbf8 && code_point <= 0xbbf8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbc14 && code_point <= 0xbc14)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbc30 && code_point <= 0xbc30)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbc4c && code_point <= 0xbc4c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbc68 && code_point <= 0xbc68)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbc84 && code_point <= 0xbc84)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbca0 && code_point <= 0xbca0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbcbc && code_point <= 0xbcbc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbcd8 && code_point <= 0xbcd8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbcf4 && code_point <= 0xbcf4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbd10 && code_point <= 0xbd10)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbd2c && code_point <= 0xbd2c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbd48 && code_point <= 0xbd48)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbd64 && code_point <= 0xbd64)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbd80 && code_point <= 0xbd80)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbd9c && code_point <= 0xbd9c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbdb8 && code_point <= 0xbdb8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbdd4 && code_point <= 0xbdd4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbdf0 && code_point <= 0xbdf0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbe0c && code_point <= 0xbe0c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbe28 && code_point <= 0xbe28)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbe44 && code_point <= 0xbe44)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbe60 && code_point <= 0xbe60)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbe7c && code_point <= 0xbe7c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbe98 && code_point <= 0xbe98)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbeb4 && code_point <= 0xbeb4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbed0 && code_point <= 0xbed0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbeec && code_point <= 0xbeec)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbf08 && code_point <= 0xbf08)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbf24 && code_point <= 0xbf24)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbf40 && code_point <= 0xbf40)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbf5c && code_point <= 0xbf5c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbf78 && code_point <= 0xbf78)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbf94 && code_point <= 0xbf94)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbfb0 && code_point <= 0xbfb0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbfcc && code_point <= 0xbfcc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xbfe8 && code_point <= 0xbfe8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc004 && code_point <= 0xc004)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc020 && code_point <= 0xc020)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc03c && code_point <= 0xc03c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc058 && code_point <= 0xc058)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc074 && code_point <= 0xc074)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc090 && code_point <= 0xc090)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc0ac && code_point <= 0xc0ac)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc0c8 && code_point <= 0xc0c8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc0e4 && code_point <= 0xc0e4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc100 && code_point <= 0xc100)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc11c && code_point <= 0xc11c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc138 && code_point <= 0xc138)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc154 && code_point <= 0xc154)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc170 && code_point <= 0xc170)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc18c && code_point <= 0xc18c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc1a8 && code_point <= 0xc1a8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc1c4 && code_point <= 0xc1c4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc1e0 && code_point <= 0xc1e0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc1fc && code_point <= 0xc1fc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc218 && code_point <= 0xc218)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc234 && code_point <= 0xc234)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc250 && code_point <= 0xc250)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc26c && code_point <= 0xc26c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc288 && code_point <= 0xc288)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc2a4 && code_point <= 0xc2a4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc2c0 && code_point <= 0xc2c0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc2dc && code_point <= 0xc2dc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc2f8 && code_point <= 0xc2f8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc314 && code_point <= 0xc314)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc330 && code_point <= 0xc330)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc34c && code_point <= 0xc34c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc368 && code_point <= 0xc368)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc384 && code_point <= 0xc384)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc3a0 && code_point <= 0xc3a0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc3bc && code_point <= 0xc3bc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc3d8 && code_point <= 0xc3d8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc3f4 && code_point <= 0xc3f4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc410 && code_point <= 0xc410)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc42c && code_point <= 0xc42c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc448 && code_point <= 0xc448)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc464 && code_point <= 0xc464)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc480 && code_point <= 0xc480)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc49c && code_point <= 0xc49c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc4b8 && code_point <= 0xc4b8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc4d4 && code_point <= 0xc4d4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc4f0 && code_point <= 0xc4f0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc50c && code_point <= 0xc50c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc528 && code_point <= 0xc528)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc544 && code_point <= 0xc544)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc560 && code_point <= 0xc560)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc57c && code_point <= 0xc57c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc598 && code_point <= 0xc598)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc5b4 && code_point <= 0xc5b4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc5d0 && code_point <= 0xc5d0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc5ec && code_point <= 0xc5ec)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc608 && code_point <= 0xc608)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc624 && code_point <= 0xc624)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc640 && code_point <= 0xc640)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc65c && code_point <= 0xc65c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc678 && code_point <= 0xc678)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc694 && code_point <= 0xc694)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc6b0 && code_point <= 0xc6b0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc6cc && code_point <= 0xc6cc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc6e8 && code_point <= 0xc6e8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc704 && code_point <= 0xc704)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc720 && code_point <= 0xc720)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc73c && code_point <= 0xc73c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc758 && code_point <= 0xc758)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc774 && code_point <= 0xc774)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc790 && code_point <= 0xc790)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc7ac && code_point <= 0xc7ac)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc7c8 && code_point <= 0xc7c8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc7e4 && code_point <= 0xc7e4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc800 && code_point <= 0xc800)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc81c && code_point <= 0xc81c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc838 && code_point <= 0xc838)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc854 && code_point <= 0xc854)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc870 && code_point <= 0xc870)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc88c && code_point <= 0xc88c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc8a8 && code_point <= 0xc8a8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc8c4 && code_point <= 0xc8c4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc8e0 && code_point <= 0xc8e0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc8fc && code_point <= 0xc8fc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc918 && code_point <= 0xc918)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc934 && code_point <= 0xc934)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc950 && code_point <= 0xc950)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc96c && code_point <= 0xc96c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc988 && code_point <= 0xc988)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc9a4 && code_point <= 0xc9a4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc9c0 && code_point <= 0xc9c0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc9dc && code_point <= 0xc9dc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xc9f8 && code_point <= 0xc9f8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xca14 && code_point <= 0xca14)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xca30 && code_point <= 0xca30)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xca4c && code_point <= 0xca4c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xca68 && code_point <= 0xca68)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xca84 && code_point <= 0xca84)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcaa0 && code_point <= 0xcaa0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcabc && code_point <= 0xcabc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcad8 && code_point <= 0xcad8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcaf4 && code_point <= 0xcaf4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcb10 && code_point <= 0xcb10)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcb2c && code_point <= 0xcb2c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcb48 && code_point <= 0xcb48)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcb64 && code_point <= 0xcb64)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcb80 && code_point <= 0xcb80)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcb9c && code_point <= 0xcb9c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcbb8 && code_point <= 0xcbb8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcbd4 && code_point <= 0xcbd4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcbf0 && code_point <= 0xcbf0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcc0c && code_point <= 0xcc0c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcc28 && code_point <= 0xcc28)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcc44 && code_point <= 0xcc44)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcc60 && code_point <= 0xcc60)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcc7c && code_point <= 0xcc7c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcc98 && code_point <= 0xcc98)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xccb4 && code_point <= 0xccb4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xccd0 && code_point <= 0xccd0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xccec && code_point <= 0xccec)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcd08 && code_point <= 0xcd08)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcd24 && code_point <= 0xcd24)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcd40 && code_point <= 0xcd40)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcd5c && code_point <= 0xcd5c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcd78 && code_point <= 0xcd78)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcd94 && code_point <= 0xcd94)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcdb0 && code_point <= 0xcdb0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcdcc && code_point <= 0xcdcc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcde8 && code_point <= 0xcde8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xce04 && code_point <= 0xce04)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xce20 && code_point <= 0xce20)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xce3c && code_point <= 0xce3c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xce58 && code_point <= 0xce58)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xce74 && code_point <= 0xce74)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xce90 && code_point <= 0xce90)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xceac && code_point <= 0xceac)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcec8 && code_point <= 0xcec8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcee4 && code_point <= 0xcee4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcf00 && code_point <= 0xcf00)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcf1c && code_point <= 0xcf1c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcf38 && code_point <= 0xcf38)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcf54 && code_point <= 0xcf54)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcf70 && code_point <= 0xcf70)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcf8c && code_point <= 0xcf8c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcfa8 && code_point <= 0xcfa8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcfc4 && code_point <= 0xcfc4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcfe0 && code_point <= 0xcfe0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xcffc && code_point <= 0xcffc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd018 && code_point <= 0xd018)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd034 && code_point <= 0xd034)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd050 && code_point <= 0xd050)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd06c && code_point <= 0xd06c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd088 && code_point <= 0xd088)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd0a4 && code_point <= 0xd0a4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd0c0 && code_point <= 0xd0c0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd0dc && code_point <= 0xd0dc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd0f8 && code_point <= 0xd0f8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd114 && code_point <= 0xd114)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd130 && code_point <= 0xd130)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd14c && code_point <= 0xd14c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd168 && code_point <= 0xd168)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd184 && code_point <= 0xd184)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd1a0 && code_point <= 0xd1a0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd1bc && code_point <= 0xd1bc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd1d8 && code_point <= 0xd1d8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd1f4 && code_point <= 0xd1f4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd210 && code_point <= 0xd210)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd22c && code_point <= 0xd22c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd248 && code_point <= 0xd248)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd264 && code_point <= 0xd264)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd280 && code_point <= 0xd280)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd29c && code_point <= 0xd29c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd2b8 && code_point <= 0xd2b8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd2d4 && code_point <= 0xd2d4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd2f0 && code_point <= 0xd2f0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd30c && code_point <= 0xd30c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd328 && code_point <= 0xd328)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd344 && code_point <= 0xd344)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd360 && code_point <= 0xd360)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd37c && code_point <= 0xd37c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd398 && code_point <= 0xd398)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd3b4 && code_point <= 0xd3b4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd3d0 && code_point <= 0xd3d0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd3ec && code_point <= 0xd3ec)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd408 && code_point <= 0xd408)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd424 && code_point <= 0xd424)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd440 && code_point <= 0xd440)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd45c && code_point <= 0xd45c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd478 && code_point <= 0xd478)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd494 && code_point <= 0xd494)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd4b0 && code_point <= 0xd4b0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd4cc && code_point <= 0xd4cc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd4e8 && code_point <= 0xd4e8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd504 && code_point <= 0xd504)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd520 && code_point <= 0xd520)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd53c && code_point <= 0xd53c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd558 && code_point <= 0xd558)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd574 && code_point <= 0xd574)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd590 && code_point <= 0xd590)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd5ac && code_point <= 0xd5ac)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd5c8 && code_point <= 0xd5c8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd5e4 && code_point <= 0xd5e4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd600 && code_point <= 0xd600)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd61c && code_point <= 0xd61c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd638 && code_point <= 0xd638)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd654 && code_point <= 0xd654)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd670 && code_point <= 0xd670)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd68c && code_point <= 0xd68c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd6a8 && code_point <= 0xd6a8)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd6c4 && code_point <= 0xd6c4)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd6e0 && code_point <= 0xd6e0)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd6fc && code_point <= 0xd6fc)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd718 && code_point <= 0xd718)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd734 && code_point <= 0xd734)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd750 && code_point <= 0xd750)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd76c && code_point <= 0xd76c)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xd788 && code_point <= 0xd788)
        retval = Unicode::GraphemeCluster::GC_LV;
    else if (code_point >= 0xac01 && code_point <= 0xac1b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xac1d && code_point <= 0xac37)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xac39 && code_point <= 0xac53)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xac55 && code_point <= 0xac6f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xac71 && code_point <= 0xac8b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xac8d && code_point <= 0xaca7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xaca9 && code_point <= 0xacc3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xacc5 && code_point <= 0xacdf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xace1 && code_point <= 0xacfb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xacfd && code_point <= 0xad17)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xad19 && code_point <= 0xad33)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xad35 && code_point <= 0xad4f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xad51 && code_point <= 0xad6b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xad6d && code_point <= 0xad87)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xad89 && code_point <= 0xada3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xada5 && code_point <= 0xadbf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xadc1 && code_point <= 0xaddb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xaddd && code_point <= 0xadf7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xadf9 && code_point <= 0xae13)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xae15 && code_point <= 0xae2f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xae31 && code_point <= 0xae4b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xae4d && code_point <= 0xae67)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xae69 && code_point <= 0xae83)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xae85 && code_point <= 0xae9f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xaea1 && code_point <= 0xaebb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xaebd && code_point <= 0xaed7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xaed9 && code_point <= 0xaef3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xaef5 && code_point <= 0xaf0f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xaf11 && code_point <= 0xaf2b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xaf2d && code_point <= 0xaf47)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xaf49 && code_point <= 0xaf63)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xaf65 && code_point <= 0xaf7f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xaf81 && code_point <= 0xaf9b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xaf9d && code_point <= 0xafb7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xafb9 && code_point <= 0xafd3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xafd5 && code_point <= 0xafef)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xaff1 && code_point <= 0xb00b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb00d && code_point <= 0xb027)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb029 && code_point <= 0xb043)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb045 && code_point <= 0xb05f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb061 && code_point <= 0xb07b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb07d && code_point <= 0xb097)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb099 && code_point <= 0xb0b3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb0b5 && code_point <= 0xb0cf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb0d1 && code_point <= 0xb0eb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb0ed && code_point <= 0xb107)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb109 && code_point <= 0xb123)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb125 && code_point <= 0xb13f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb141 && code_point <= 0xb15b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb15d && code_point <= 0xb177)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb179 && code_point <= 0xb193)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb195 && code_point <= 0xb1af)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb1b1 && code_point <= 0xb1cb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb1cd && code_point <= 0xb1e7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb1e9 && code_point <= 0xb203)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb205 && code_point <= 0xb21f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb221 && code_point <= 0xb23b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb23d && code_point <= 0xb257)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb259 && code_point <= 0xb273)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb275 && code_point <= 0xb28f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb291 && code_point <= 0xb2ab)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb2ad && code_point <= 0xb2c7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb2c9 && code_point <= 0xb2e3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb2e5 && code_point <= 0xb2ff)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb301 && code_point <= 0xb31b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb31d && code_point <= 0xb337)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb339 && code_point <= 0xb353)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb355 && code_point <= 0xb36f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb371 && code_point <= 0xb38b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb38d && code_point <= 0xb3a7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb3a9 && code_point <= 0xb3c3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb3c5 && code_point <= 0xb3df)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb3e1 && code_point <= 0xb3fb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb3fd && code_point <= 0xb417)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb419 && code_point <= 0xb433)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb435 && code_point <= 0xb44f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb451 && code_point <= 0xb46b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb46d && code_point <= 0xb487)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb489 && code_point <= 0xb4a3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb4a5 && code_point <= 0xb4bf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb4c1 && code_point <= 0xb4db)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb4dd && code_point <= 0xb4f7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb4f9 && code_point <= 0xb513)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb515 && code_point <= 0xb52f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb531 && code_point <= 0xb54b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb54d && code_point <= 0xb567)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb569 && code_point <= 0xb583)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb585 && code_point <= 0xb59f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb5a1 && code_point <= 0xb5bb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb5bd && code_point <= 0xb5d7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb5d9 && code_point <= 0xb5f3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb5f5 && code_point <= 0xb60f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb611 && code_point <= 0xb62b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb62d && code_point <= 0xb647)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb649 && code_point <= 0xb663)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb665 && code_point <= 0xb67f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb681 && code_point <= 0xb69b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb69d && code_point <= 0xb6b7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb6b9 && code_point <= 0xb6d3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb6d5 && code_point <= 0xb6ef)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb6f1 && code_point <= 0xb70b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb70d && code_point <= 0xb727)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb729 && code_point <= 0xb743)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb745 && code_point <= 0xb75f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb761 && code_point <= 0xb77b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb77d && code_point <= 0xb797)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb799 && code_point <= 0xb7b3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb7b5 && code_point <= 0xb7cf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb7d1 && code_point <= 0xb7eb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb7ed && code_point <= 0xb807)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb809 && code_point <= 0xb823)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb825 && code_point <= 0xb83f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb841 && code_point <= 0xb85b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb85d && code_point <= 0xb877)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb879 && code_point <= 0xb893)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb895 && code_point <= 0xb8af)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb8b1 && code_point <= 0xb8cb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb8cd && code_point <= 0xb8e7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb8e9 && code_point <= 0xb903)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb905 && code_point <= 0xb91f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb921 && code_point <= 0xb93b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb93d && code_point <= 0xb957)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb959 && code_point <= 0xb973)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb975 && code_point <= 0xb98f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb991 && code_point <= 0xb9ab)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb9ad && code_point <= 0xb9c7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb9c9 && code_point <= 0xb9e3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xb9e5 && code_point <= 0xb9ff)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xba01 && code_point <= 0xba1b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xba1d && code_point <= 0xba37)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xba39 && code_point <= 0xba53)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xba55 && code_point <= 0xba6f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xba71 && code_point <= 0xba8b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xba8d && code_point <= 0xbaa7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbaa9 && code_point <= 0xbac3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbac5 && code_point <= 0xbadf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbae1 && code_point <= 0xbafb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbafd && code_point <= 0xbb17)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbb19 && code_point <= 0xbb33)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbb35 && code_point <= 0xbb4f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbb51 && code_point <= 0xbb6b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbb6d && code_point <= 0xbb87)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbb89 && code_point <= 0xbba3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbba5 && code_point <= 0xbbbf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbbc1 && code_point <= 0xbbdb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbbdd && code_point <= 0xbbf7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbbf9 && code_point <= 0xbc13)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbc15 && code_point <= 0xbc2f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbc31 && code_point <= 0xbc4b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbc4d && code_point <= 0xbc67)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbc69 && code_point <= 0xbc83)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbc85 && code_point <= 0xbc9f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbca1 && code_point <= 0xbcbb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbcbd && code_point <= 0xbcd7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbcd9 && code_point <= 0xbcf3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbcf5 && code_point <= 0xbd0f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbd11 && code_point <= 0xbd2b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbd2d && code_point <= 0xbd47)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbd49 && code_point <= 0xbd63)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbd65 && code_point <= 0xbd7f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbd81 && code_point <= 0xbd9b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbd9d && code_point <= 0xbdb7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbdb9 && code_point <= 0xbdd3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbdd5 && code_point <= 0xbdef)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbdf1 && code_point <= 0xbe0b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbe0d && code_point <= 0xbe27)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbe29 && code_point <= 0xbe43)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbe45 && code_point <= 0xbe5f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbe61 && code_point <= 0xbe7b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbe7d && code_point <= 0xbe97)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbe99 && code_point <= 0xbeb3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbeb5 && code_point <= 0xbecf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbed1 && code_point <= 0xbeeb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbeed && code_point <= 0xbf07)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbf09 && code_point <= 0xbf23)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbf25 && code_point <= 0xbf3f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbf41 && code_point <= 0xbf5b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbf5d && code_point <= 0xbf77)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbf79 && code_point <= 0xbf93)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbf95 && code_point <= 0xbfaf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbfb1 && code_point <= 0xbfcb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbfcd && code_point <= 0xbfe7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xbfe9 && code_point <= 0xc003)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc005 && code_point <= 0xc01f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc021 && code_point <= 0xc03b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc03d && code_point <= 0xc057)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc059 && code_point <= 0xc073)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc075 && code_point <= 0xc08f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc091 && code_point <= 0xc0ab)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc0ad && code_point <= 0xc0c7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc0c9 && code_point <= 0xc0e3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc0e5 && code_point <= 0xc0ff)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc101 && code_point <= 0xc11b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc11d && code_point <= 0xc137)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc139 && code_point <= 0xc153)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc155 && code_point <= 0xc16f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc171 && code_point <= 0xc18b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc18d && code_point <= 0xc1a7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc1a9 && code_point <= 0xc1c3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc1c5 && code_point <= 0xc1df)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc1e1 && code_point <= 0xc1fb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc1fd && code_point <= 0xc217)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc219 && code_point <= 0xc233)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc235 && code_point <= 0xc24f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc251 && code_point <= 0xc26b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc26d && code_point <= 0xc287)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc289 && code_point <= 0xc2a3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc2a5 && code_point <= 0xc2bf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc2c1 && code_point <= 0xc2db)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc2dd && code_point <= 0xc2f7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc2f9 && code_point <= 0xc313)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc315 && code_point <= 0xc32f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc331 && code_point <= 0xc34b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc34d && code_point <= 0xc367)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc369 && code_point <= 0xc383)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc385 && code_point <= 0xc39f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc3a1 && code_point <= 0xc3bb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc3bd && code_point <= 0xc3d7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc3d9 && code_point <= 0xc3f3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc3f5 && code_point <= 0xc40f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc411 && code_point <= 0xc42b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc42d && code_point <= 0xc447)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc449 && code_point <= 0xc463)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc465 && code_point <= 0xc47f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc481 && code_point <= 0xc49b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc49d && code_point <= 0xc4b7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc4b9 && code_point <= 0xc4d3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc4d5 && code_point <= 0xc4ef)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc4f1 && code_point <= 0xc50b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc50d && code_point <= 0xc527)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc529 && code_point <= 0xc543)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc545 && code_point <= 0xc55f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc561 && code_point <= 0xc57b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc57d && code_point <= 0xc597)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc599 && code_point <= 0xc5b3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc5b5 && code_point <= 0xc5cf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc5d1 && code_point <= 0xc5eb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc5ed && code_point <= 0xc607)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc609 && code_point <= 0xc623)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc625 && code_point <= 0xc63f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc641 && code_point <= 0xc65b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc65d && code_point <= 0xc677)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc679 && code_point <= 0xc693)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc695 && code_point <= 0xc6af)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc6b1 && code_point <= 0xc6cb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc6cd && code_point <= 0xc6e7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc6e9 && code_point <= 0xc703)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc705 && code_point <= 0xc71f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc721 && code_point <= 0xc73b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc73d && code_point <= 0xc757)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc759 && code_point <= 0xc773)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc775 && code_point <= 0xc78f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc791 && code_point <= 0xc7ab)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc7ad && code_point <= 0xc7c7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc7c9 && code_point <= 0xc7e3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc7e5 && code_point <= 0xc7ff)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc801 && code_point <= 0xc81b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc81d && code_point <= 0xc837)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc839 && code_point <= 0xc853)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc855 && code_point <= 0xc86f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc871 && code_point <= 0xc88b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc88d && code_point <= 0xc8a7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc8a9 && code_point <= 0xc8c3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc8c5 && code_point <= 0xc8df)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc8e1 && code_point <= 0xc8fb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc8fd && code_point <= 0xc917)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc919 && code_point <= 0xc933)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc935 && code_point <= 0xc94f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc951 && code_point <= 0xc96b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc96d && code_point <= 0xc987)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc989 && code_point <= 0xc9a3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc9a5 && code_point <= 0xc9bf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc9c1 && code_point <= 0xc9db)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc9dd && code_point <= 0xc9f7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xc9f9 && code_point <= 0xca13)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xca15 && code_point <= 0xca2f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xca31 && code_point <= 0xca4b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xca4d && code_point <= 0xca67)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xca69 && code_point <= 0xca83)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xca85 && code_point <= 0xca9f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcaa1 && code_point <= 0xcabb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcabd && code_point <= 0xcad7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcad9 && code_point <= 0xcaf3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcaf5 && code_point <= 0xcb0f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcb11 && code_point <= 0xcb2b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcb2d && code_point <= 0xcb47)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcb49 && code_point <= 0xcb63)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcb65 && code_point <= 0xcb7f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcb81 && code_point <= 0xcb9b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcb9d && code_point <= 0xcbb7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcbb9 && code_point <= 0xcbd3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcbd5 && code_point <= 0xcbef)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcbf1 && code_point <= 0xcc0b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcc0d && code_point <= 0xcc27)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcc29 && code_point <= 0xcc43)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcc45 && code_point <= 0xcc5f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcc61 && code_point <= 0xcc7b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcc7d && code_point <= 0xcc97)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcc99 && code_point <= 0xccb3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xccb5 && code_point <= 0xcccf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xccd1 && code_point <= 0xcceb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcced && code_point <= 0xcd07)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcd09 && code_point <= 0xcd23)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcd25 && code_point <= 0xcd3f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcd41 && code_point <= 0xcd5b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcd5d && code_point <= 0xcd77)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcd79 && code_point <= 0xcd93)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcd95 && code_point <= 0xcdaf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcdb1 && code_point <= 0xcdcb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcdcd && code_point <= 0xcde7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcde9 && code_point <= 0xce03)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xce05 && code_point <= 0xce1f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xce21 && code_point <= 0xce3b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xce3d && code_point <= 0xce57)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xce59 && code_point <= 0xce73)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xce75 && code_point <= 0xce8f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xce91 && code_point <= 0xceab)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcead && code_point <= 0xcec7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcec9 && code_point <= 0xcee3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcee5 && code_point <= 0xceff)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcf01 && code_point <= 0xcf1b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcf1d && code_point <= 0xcf37)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcf39 && code_point <= 0xcf53)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcf55 && code_point <= 0xcf6f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcf71 && code_point <= 0xcf8b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcf8d && code_point <= 0xcfa7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcfa9 && code_point <= 0xcfc3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcfc5 && code_point <= 0xcfdf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcfe1 && code_point <= 0xcffb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xcffd && code_point <= 0xd017)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd019 && code_point <= 0xd033)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd035 && code_point <= 0xd04f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd051 && code_point <= 0xd06b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd06d && code_point <= 0xd087)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd089 && code_point <= 0xd0a3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd0a5 && code_point <= 0xd0bf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd0c1 && code_point <= 0xd0db)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd0dd && code_point <= 0xd0f7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd0f9 && code_point <= 0xd113)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd115 && code_point <= 0xd12f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd131 && code_point <= 0xd14b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd14d && code_point <= 0xd167)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd169 && code_point <= 0xd183)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd185 && code_point <= 0xd19f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd1a1 && code_point <= 0xd1bb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd1bd && code_point <= 0xd1d7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd1d9 && code_point <= 0xd1f3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd1f5 && code_point <= 0xd20f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd211 && code_point <= 0xd22b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd22d && code_point <= 0xd247)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd249 && code_point <= 0xd263)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd265 && code_point <= 0xd27f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd281 && code_point <= 0xd29b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd29d && code_point <= 0xd2b7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd2b9 && code_point <= 0xd2d3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd2d5 && code_point <= 0xd2ef)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd2f1 && code_point <= 0xd30b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd30d && code_point <= 0xd327)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd329 && code_point <= 0xd343)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd345 && code_point <= 0xd35f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd361 && code_point <= 0xd37b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd37d && code_point <= 0xd397)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd399 && code_point <= 0xd3b3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd3b5 && code_point <= 0xd3cf)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd3d1 && code_point <= 0xd3eb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd3ed && code_point <= 0xd407)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd409 && code_point <= 0xd423)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd425 && code_point <= 0xd43f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd441 && code_point <= 0xd45b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd45d && code_point <= 0xd477)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd479 && code_point <= 0xd493)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd495 && code_point <= 0xd4af)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd4b1 && code_point <= 0xd4cb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd4cd && code_point <= 0xd4e7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd4e9 && code_point <= 0xd503)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd505 && code_point <= 0xd51f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd521 && code_point <= 0xd53b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd53d && code_point <= 0xd557)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd559 && code_point <= 0xd573)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd575 && code_point <= 0xd58f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd591 && code_point <= 0xd5ab)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd5ad && code_point <= 0xd5c7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd5c9 && code_point <= 0xd5e3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd5e5 && code_point <= 0xd5ff)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd601 && code_point <= 0xd61b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd61d && code_point <= 0xd637)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd639 && code_point <= 0xd653)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd655 && code_point <= 0xd66f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd671 && code_point <= 0xd68b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd68d && code_point <= 0xd6a7)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd6a9 && code_point <= 0xd6c3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd6c5 && code_point <= 0xd6df)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd6e1 && code_point <= 0xd6fb)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd6fd && code_point <= 0xd717)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd719 && code_point <= 0xd733)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd735 && code_point <= 0xd74f)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd751 && code_point <= 0xd76b)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd76d && code_point <= 0xd787)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0xd789 && code_point <= 0xd7a3)
        retval = Unicode::GraphemeCluster::GC_LVT;
    else if (code_point >= 0x1f1e6 && code_point <= 0x1f1ff)
        retval = Unicode::GraphemeCluster::GC_RI;
    else if (code_point >= 0x1031 && code_point <= 0x1031)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x103b && code_point <= 0x103c)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1056 && code_point <= 0x1057)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1084 && code_point <= 0x1084)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x11000 && code_point <= 0x11000)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x11002 && code_point <= 0x11002)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x11082 && code_point <= 0x11082)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x110b0 && code_point <= 0x110b2)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x110b7 && code_point <= 0x110b8)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1112c && code_point <= 0x1112c)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x11182 && code_point <= 0x11182)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x111b3 && code_point <= 0x111b5)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x111bf && code_point <= 0x111c0)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1122c && code_point <= 0x1122e)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x11232 && code_point <= 0x11233)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x11235 && code_point <= 0x11235)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x112e0 && code_point <= 0x112e2)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x11302 && code_point <= 0x11303)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1133f && code_point <= 0x1133f)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x11341 && code_point <= 0x11344)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x11347 && code_point <= 0x11348)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1134b && code_point <= 0x1134d)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x11362 && code_point <= 0x11363)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x114b1 && code_point <= 0x114b2)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x114b9 && code_point <= 0x114b9)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x114bb && code_point <= 0x114bc)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x114be && code_point <= 0x114be)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x114c1 && code_point <= 0x114c1)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x115b0 && code_point <= 0x115b1)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x115b8 && code_point <= 0x115bb)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x115be && code_point <= 0x115be)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x11630 && code_point <= 0x11632)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1163b && code_point <= 0x1163c)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1163e && code_point <= 0x1163e)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x116ac && code_point <= 0x116ac)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x116ae && code_point <= 0x116af)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x116b6 && code_point <= 0x116b6)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x11720 && code_point <= 0x11721)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x11726 && code_point <= 0x11726)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x16f51 && code_point <= 0x16f7e)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x17b6 && code_point <= 0x17b6)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x17be && code_point <= 0x17c5)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x17c7 && code_point <= 0x17c8)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1923 && code_point <= 0x1926)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1929 && code_point <= 0x192b)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1930 && code_point <= 0x1931)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1933 && code_point <= 0x1938)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1a19 && code_point <= 0x1a1a)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1a55 && code_point <= 0x1a55)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1a57 && code_point <= 0x1a57)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1a6d && code_point <= 0x1a72)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1b04 && code_point <= 0x1b04)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1b35 && code_point <= 0x1b35)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1b3b && code_point <= 0x1b3b)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1b3d && code_point <= 0x1b41)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1b43 && code_point <= 0x1b44)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1b82 && code_point <= 0x1b82)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1ba1 && code_point <= 0x1ba1)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1ba6 && code_point <= 0x1ba7)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1baa && code_point <= 0x1baa)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1be7 && code_point <= 0x1be7)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1bea && code_point <= 0x1bec)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1bee && code_point <= 0x1bee)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1bf2 && code_point <= 0x1bf3)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1c24 && code_point <= 0x1c2b)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1c34 && code_point <= 0x1c35)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1ce1 && code_point <= 0x1ce1)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1cf2 && code_point <= 0x1cf3)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1d166 && code_point <= 0x1d166)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x1d16d && code_point <= 0x1d16d)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x903 && code_point <= 0x903)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x93b && code_point <= 0x93b)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x93e && code_point <= 0x940)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x949 && code_point <= 0x94c)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x94e && code_point <= 0x94f)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x982 && code_point <= 0x983)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x9bf && code_point <= 0x9c0)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x9c7 && code_point <= 0x9c8)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x9cb && code_point <= 0x9cc)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xa03 && code_point <= 0xa03)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xa3e && code_point <= 0xa40)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xa823 && code_point <= 0xa824)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xa827 && code_point <= 0xa827)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xa83 && code_point <= 0xa83)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xa880 && code_point <= 0xa881)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xa8b4 && code_point <= 0xa8c3)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xa952 && code_point <= 0xa953)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xa983 && code_point <= 0xa983)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xa9b4 && code_point <= 0xa9b5)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xa9ba && code_point <= 0xa9bb)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xa9bd && code_point <= 0xa9c0)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xaa2f && code_point <= 0xaa30)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xaa33 && code_point <= 0xaa34)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xaa4d && code_point <= 0xaa4d)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xaaeb && code_point <= 0xaaeb)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xaaee && code_point <= 0xaaef)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xaaf5 && code_point <= 0xaaf5)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xabe && code_point <= 0xac0)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xabe3 && code_point <= 0xabe4)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xabe6 && code_point <= 0xabe7)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xabe9 && code_point <= 0xabea)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xabec && code_point <= 0xabec)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xac9 && code_point <= 0xac9)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xacb && code_point <= 0xacc)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xb02 && code_point <= 0xb03)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xb40 && code_point <= 0xb40)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xb47 && code_point <= 0xb48)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xb4b && code_point <= 0xb4c)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xbbf && code_point <= 0xbbf)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xbc1 && code_point <= 0xbc2)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xbc6 && code_point <= 0xbc8)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xbca && code_point <= 0xbcc)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xc01 && code_point <= 0xc03)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xc41 && code_point <= 0xc44)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xc82 && code_point <= 0xc83)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xcbe && code_point <= 0xcbe)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xcc0 && code_point <= 0xcc1)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xcc3 && code_point <= 0xcc4)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xcc7 && code_point <= 0xcc8)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xcca && code_point <= 0xccb)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xd02 && code_point <= 0xd03)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xd3f && code_point <= 0xd40)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xd46 && code_point <= 0xd48)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xd4a && code_point <= 0xd4c)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xd82 && code_point <= 0xd83)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xdd0 && code_point <= 0xdd1)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xdd8 && code_point <= 0xdde)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xdf2 && code_point <= 0xdf3)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xe33 && code_point <= 0xe33)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xeb3 && code_point <= 0xeb3)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xf3e && code_point <= 0xf3f)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0xf7f && code_point <= 0xf7f)
        retval = Unicode::GraphemeCluster::GC_SPACING_MARK;
    else if (code_point >= 0x11a8 && code_point <= 0x11ff)
        retval = Unicode::GraphemeCluster::GC_T;
    else if (code_point >= 0xd7cb && code_point <= 0xd7fb)
        retval = Unicode::GraphemeCluster::GC_T;
    else if (code_point >= 0x1160 && code_point <= 0x11a7)
        retval = Unicode::GraphemeCluster::GC_V;
    else if (code_point >= 0xd7b0 && code_point <= 0xd7c6)
        retval = Unicode::GraphemeCluster::GC_V;
    else if (code_point >= 0x1f3f3) // Serenity Unique
        retval = Unicode::GraphemeCluster::GC_RI;

    return retval;
#else
    return Unicode::GraphemeCluster::GC_ANY;
#endif
}

GrapheneResult get_grapheme_cluster_break_property_value(u32 code_point_before, u32 code_point_after)
{
#if ENABLE_UNICODE_DATA
    //  Values taken from from following references :
    // Implement Graphene cluser rules according to following spec: https://Unicode::GraphemeCluster.org/reports/tr29/#Grapheme_Cluster_Boundary_Rules
    // https://Unicode::GraphemeCluster.org/reports/tr29/#Grapheme_Cluster_Boundary_Rules
    auto before = get_grapheme_value_for_code_point(code_point_before);
    auto after = get_grapheme_value_for_code_point(code_point_after);
    auto retval = Unicode::GraphemeCluster::NotBreak;

    // GB3 - Do not Unicode::GraphemeCluster::Break between a CR and LF.
    if (before == Unicode::GraphemeCluster::GC_CR && after == Unicode::GraphemeCluster::GC_LF)
        retval = Unicode::GraphemeCluster::NotBreak;
    // GB4 - Otherwise, Unicode::GraphemeCluster::Break before and after controls.
    else if (before == Unicode::GraphemeCluster::GC_CONTROL)
        retval = Unicode::GraphemeCluster::Break;
    // GB4 - Otherwise, Unicode::GraphemeCluster::Break before and after controls.
    else if (before == Unicode::GraphemeCluster::GC_CR)
        retval = Unicode::GraphemeCluster::Break;
    // GB4 - Otherwise, Unicode::GraphemeCluster::Break before and after controls.
    else if (before == Unicode::GraphemeCluster::GC_LF)
        retval = Unicode::GraphemeCluster::Break;
    // GB 5 - Otherwise, Unicode::GraphemeCluster::Break before and after controls.
    else if (after == Unicode::GraphemeCluster::GC_CONTROL)
        retval = Unicode::GraphemeCluster::Break;
    // GB 5 - Otherwise, Unicode::GraphemeCluster::Break before and after controls.
    else if (after == Unicode::GraphemeCluster::GC_CR)
        retval = Unicode::GraphemeCluster::Break;
    // GB 5 - Otherwise, Unicode::GraphemeCluster::Break before and after controls.
    else if (after == Unicode::GraphemeCluster::GC_LF)
        retval = Unicode::GraphemeCluster::Break;
    // GB 6 - Do not Unicode::GraphemeCluster::Break Hangul syllable sequences.
    else if (before == Unicode::GraphemeCluster::GC_L && after == Unicode::GraphemeCluster::GC_L)
        retval = Unicode::GraphemeCluster::NotBreak;
    // GB 6 - Do not Unicode::GraphemeCluster::Break Hangul syllable sequences.
    else if (before == Unicode::GraphemeCluster::GC_L && after == Unicode::GraphemeCluster::GC_V)
        retval = Unicode::GraphemeCluster::NotBreak;
    // GB 6 - Do not Unicode::GraphemeCluster::Break Hangul syllable sequences.
    else if (before == Unicode::GraphemeCluster::GC_L && after == Unicode::GraphemeCluster::GC_LV)
        retval = Unicode::GraphemeCluster::NotBreak;
    // GB 6 - Do not Unicode::GraphemeCluster::Break Hangul syllable sequences.
    else if (before == Unicode::GraphemeCluster::GC_L && after == Unicode::GraphemeCluster::GC_LVT)
        retval = Unicode::GraphemeCluster::NotBreak;
    // GB 7 - Do not Unicode::GraphemeCluster::Break Hangul syllable sequences.
    else if (before == Unicode::GraphemeCluster::GC_LV && after == Unicode::GraphemeCluster::GC_V)
        retval = Unicode::GraphemeCluster::NotBreak;
    // GB 7 - Do not Unicode::GraphemeCluster::Break Hangul syllable sequences.
    else if (before == Unicode::GraphemeCluster::GC_LV && after == Unicode::GraphemeCluster::GC_T)
        retval = Unicode::GraphemeCluster::NotBreak;
    // GB 7 - Do not Unicode::GraphemeCluster::Break Hangul syllable sequences.
    else if (before == Unicode::GraphemeCluster::GC_V && after == Unicode::GraphemeCluster::GC_V)
        retval = Unicode::GraphemeCluster::NotBreak;
    // GB 7 - Do not Unicode::GraphemeCluster::Break Hangul syllable sequences.
    else if (before == Unicode::GraphemeCluster::GC_V && after == Unicode::GraphemeCluster::GC_T)
        retval = Unicode::GraphemeCluster::NotBreak;
    // GB 8 - Do not Unicode::GraphemeCluster::Break Hangul syllable sequences.
    else if (before == Unicode::GraphemeCluster::GC_LVT && after == Unicode::GraphemeCluster::GC_T)
        retval = Unicode::GraphemeCluster::NotBreak;
    // GB 8 - Do not Unicode::GraphemeCluster::Break Hangul syllable sequences.
    else if (before == Unicode::GraphemeCluster::GC_T && after == Unicode::GraphemeCluster::GC_T)
        retval = Unicode::GraphemeCluster::NotBreak;
    // GB 9 -  Do not Unicode::GraphemeCluster::Break before extending characters or ZWJ.
    else if (after == Unicode::GraphemeCluster::GC_EXTEND)
        retval = Unicode::GraphemeCluster::NotBreak;
    // GB 9 -  Do not Unicode::GraphemeCluster::Break before extending characters or ZWJ.
    else if (after == Unicode::GraphemeCluster::GC_ZWJ)
        retval = Unicode::GraphemeCluster::NotBreak;
    // GB 9a -  Do not Unicode::GraphemeCluster::Break before extending characters or ZWJ.
    else if (after == Unicode::GraphemeCluster::GC_SPACING_MARK)
        retval = Unicode::GraphemeCluster::Extended;
    // GB 9b -  Do not Unicode::GraphemeCluster::Break before extending characters or ZWJ.
    else if (before == Unicode::GraphemeCluster::GC_PREPEND)
        retval = Unicode::GraphemeCluster::Extended;
    // GB 11 -  Do not Unicode::GraphemeCluster::Break before extending characters or ZWJ.
    else if (before == Unicode::GraphemeCluster::GC_ZWJ && after == Unicode::GraphemeCluster::GC_EXTEND_PICTOGRAPHIC)
        retval = Unicode::GraphemeCluster::Emoji;
    // GB 12 , GB 13 Do not Unicode::GraphemeCluster::Break within Unicode::GraphemeCluster::Emoji flag sequences. That is, do not Unicode::GraphemeCluster::Break between Unicode::GraphemeCluster::Regional indicator (RI) symbols if there is an odd number of RI characters before the Unicode::GraphemeCluster::Break point.
    else if (before == Unicode::GraphemeCluster::GC_RI && after == Unicode::GraphemeCluster::GC_RI)
        retval = Unicode::GraphemeCluster::Regional;
    // GB 999 Otherwise, Unicode::GraphemeCluster::Break everywhere.
    else
        retval = Unicode::GraphemeCluster::Break;
    return retval;
#else
    return Unicode::GraphemeCluster::Break;
#endif
}
}
