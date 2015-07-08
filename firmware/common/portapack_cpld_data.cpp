/*
 * Copyright (C) 2014 Jared Boone, ShareBrained Technology, Inc.
 *
 * This file is part of PortaPack.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#include "portapack_cpld_data.hpp"

#include <cstdint>
#include <array>

namespace portapack {
namespace cpld {

/* 2015 Apr 23 19:34 PT */

const std::array<uint16_t, 3328> block_0 { {
	0x7fff, 0xffff, 0xbffc, 0xf9e7, 0x79ff, 0xfffe, 0xaf9e, 0x7cff,
	0x7fff, 0xfbe7, 0xb3f7, 0xffff, 0x7f3f, 0x7dfb, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbff7, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x67ff, 0xffff, 0xbfff, 0xfefd, 0x7fff, 0xff7f, 0xbfff, 0xe7f9,
	0x623f, 0xfff9, 0xb77f, 0xcccf, 0x7fff, 0xb99f, 0xbccc, 0xcffe,
	0x6fff, 0xffff, 0xbfff, 0xffeb, 0x77f3, 0xffff, 0xbfe6, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fbf, 0xffff, 0xbfff, 0xfbfe,
	0x7fff, 0xffff, 0xbfff, 0xfffe, 0x6fff, 0xffff, 0xbfef, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x6fff, 0xffff, 0xbfff, 0xffdb, 0x7fff, 0xffff, 0xbff7, 0xffff,
	0x7eff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7ff5, 0xffff, 0xbffd, 0xffff,
	0x6fff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x6fff, 0xffff, 0xbfff, 0xfdbb, 0x77ef, 0xbfff, 0xbfff, 0xffff,
	0x7eef, 0xefff, 0xbfff, 0xffff, 0x7dff, 0xffff, 0xbfff, 0xfffe,
	0x7bff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbffd, 0xdfff,
	0x7dff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffe,
	0x7fff, 0xffff, 0xbfff, 0xff7f, 0x77ff, 0xffff, 0xbfff, 0xefff,
	0x7dff, 0xefff, 0xbfff, 0xffff, 0x7dff, 0xffff, 0xbfff, 0xfffe,
	0x7fff, 0xffff, 0xbfff, 0xfef7, 0x7ff7, 0xbfff, 0xbffd, 0xffff,
	0x7ef7, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffe,
	0x6fff, 0xffff, 0xbffe, 0xffdf, 0x7fff, 0xffbf, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7eff, 0xffff, 0xbfff, 0xffef,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xfebf, 0xbfff, 0xfeff,
	0x7fff, 0xffff, 0xb5fd, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbdff, 0xffbf, 0x7ffe, 0xffff, 0xbfef, 0xff5f,
	0x7fff, 0xffff, 0xbfff, 0xffef, 0x7fff, 0xffdf, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7dff, 0xfd7f, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfdf, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7ff7, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xf6ef, 0xbfcb, 0xffff,
	0x77ff, 0xffff, 0xbfdf, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7ff7, 0xfdff, 0xbbff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xfbff, 0xbfd5, 0xffff,
	0x77ff, 0xffff, 0xa55f, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fdf, 0xdeef, 0xbfff, 0xfdff,
	0x7fff, 0xffff, 0xafff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7ffd, 0xffff, 0xbffb, 0xffeb,
	0x6bff, 0xffff, 0xb55f, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbdff, 0xdff5,
	0x77ff, 0xffff, 0xbabf, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7ffb, 0xf9bf, 0xbafe, 0xefff,
	0x6fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7ffe, 0xffde, 0xbfdf, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7ff7, 0xdfff, 0xbffd, 0x35ff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fd2, 0xffff, 0xbfbc, 0xc7ff,
	0x7fff, 0xffff, 0xb70f, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xddee, 0xb9ff, 0xbdff,
	0x7bff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7ffd, 0xea9f, 0xbefb, 0x7bff,
	0x7fff, 0xffff, 0xbeff, 0xffff, 0x7fdf, 0xffff, 0xbfff, 0xffef,
	0x7fff, 0xffff, 0xbfff, 0x7fff, 0x7ffd, 0x0ddf, 0xb598, 0x5e74,
	0x7fff, 0xffff, 0xb6ff, 0xffff, 0x7fbf, 0xffff, 0xbfff, 0xffdf,
	0x7fff, 0xffff, 0xbffe, 0xffff, 0x7ffc, 0x0ddd, 0xbd99, 0x1e6a,
	0x7fff, 0xffff, 0xbfaf, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7f08, 0x388f, 0xb89e, 0x887f,
	0x7bff, 0xffff, 0xb7f7, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7f0c, 0x388f, 0xb89f, 0x983b,
	0x67ff, 0xffff, 0xbfff, 0x3333, 0x63e6, 0x6667, 0xb333, 0x31f3,
	0x6666, 0x7ccc, 0xb98f, 0x9999, 0x73e8, 0xc445, 0xb938, 0x88ff,
	0x7fff, 0xffff, 0xb7ff, 0x7777, 0x6957, 0x7777, 0xb777, 0x74ab,
	0x7777, 0x7ddd, 0xbba5, 0x5ddd, 0x7bcd, 0xdcca, 0xb19d, 0xddfb,
	0x7bff, 0xffff, 0xbff7, 0xffff, 0x7fdf, 0xffff, 0xbfff, 0xffef,
	0x7fff, 0xffff, 0xbfff, 0x7fff, 0x7fff, 0xe66f, 0xb37f, 0xffde,
	0x7fff, 0xffff, 0xbffe, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffd,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7feb, 0xeedf, 0xbfdf, 0xfcff,
	0x7fff, 0xffff, 0xbfff, 0xeeee, 0x7ffb, 0xfbbf, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7dfd, 0xffff, 0xbffd, 0xdfff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffd,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7ffa, 0xefdf, 0xbfff, 0xdfff,
	0x7fff, 0xffff, 0xbbfe, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fef, 0xfeff, 0xbfdd, 0xfd7a,
	0x77ff, 0xffff, 0xbebe, 0xfff7, 0x7fff, 0xfb7f, 0xbf9f, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfef, 0xfffb,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbaff, 0xfffd,
	0x7fff, 0xedff, 0xbfff, 0xffde, 0x7ffb, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xb7fd, 0xfff7, 0x7fff, 0xfdfb, 0xb7ff, 0xffff,
	0x7fff, 0xfdff, 0xbfff, 0xffff, 0x7ffe, 0xffff, 0xbff3, 0xbbf7,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xff7f, 0xbeaf, 0xfffe,
	0x7fff, 0xffff, 0xbfff, 0xffbe, 0x7ffb, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfee, 0xf7f7, 0x7fff, 0xfbef, 0xbfff, 0xffff,
	0x7fff, 0xfbfe, 0xbdff, 0xfadf, 0x7dff, 0xffff, 0xbfff, 0xffdf,
	0x7fff, 0xffff, 0xb7ff, 0x6fff, 0x77ff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xfff7, 0xafff, 0xbfef, 0x7fff, 0xffff, 0xbfff, 0xfffb,
	0x7fff, 0xffff, 0xbffd, 0xdfff, 0x7ff7, 0xfdff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffd7, 0x7eff, 0xffff, 0xbfff, 0xffdf,
	0x7fff, 0xffff, 0xbbdf, 0xbbf7, 0x7fff, 0xffef, 0xbfff, 0xffff,
	0x7fff, 0xfbf9, 0xb5ff, 0xfcff, 0x7fff, 0xffff, 0xbfff, 0xfffb,
	0x7fff, 0xffff, 0xbeff, 0xff77, 0x7fff, 0xf7fd, 0xbfff, 0xffff,
	0x7fff, 0xfeee, 0xbfbf, 0xfb3b, 0x77ff, 0xffff, 0xbfff, 0xffea,
	0x7fff, 0xffff, 0xbbaf, 0xffff, 0x6fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xf77f, 0xbfff, 0xd7f7, 0x6eff, 0xffff, 0xbfff, 0xffff,
	0x7bff, 0xffff, 0xbb5f, 0xffff, 0x7ff7, 0x7fff, 0xbfff, 0xffff,
	0x7fff, 0xfff7, 0xaaff, 0xf77f, 0x7fff, 0xffff, 0xbfff, 0xfff4,
	0x7fff, 0xffff, 0xbdaf, 0x7bff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xf7be, 0xbbff, 0xffff, 0x6dff, 0xffff, 0xbfff, 0xffff,
	0x7bff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xfeff, 0xbfbf, 0xfff3, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7f7f, 0xff7f, 0xbfff, 0xffff,
	0x7fff, 0xffef, 0xbfff, 0xffbf, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xff7f, 0x7fff, 0xfffd, 0xbfff, 0xffff,
	0x7fff, 0xfcde, 0xbdbf, 0xdf8d, 0x7bff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xb5af, 0xbfff, 0x6ff7, 0x76ff, 0xbfff, 0xffff,
	0x7fff, 0xfbad, 0xbfdf, 0xf77b, 0x7fff, 0xffff, 0xbfff, 0xffee,
	0x77ff, 0xffff, 0xbfff, 0xfbf7, 0x7f7f, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xf77b, 0xb37f, 0xecf6, 0x6cff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbf5f, 0x3000, 0x67c0, 0x007f, 0xbfff, 0xffef,
	0x7fff, 0xfccd, 0xbbb7, 0x7f99, 0x7cff, 0xffff, 0xb7ff, 0xfff5,
	0x6bff, 0xffff, 0xb7af, 0x3000, 0x66e0, 0x0061, 0xbfff, 0xffdf,
	0x7fff, 0xfccd, 0xbbbe, 0xd519, 0x7cff, 0xffff, 0xafff, 0xffff,
	0x7dff, 0xffff, 0xbdff, 0x3000, 0x67e0, 0x007f, 0xbfff, 0xffff,
	0x7fff, 0xfcc8, 0xb11f, 0xcc99, 0x7cff, 0xffff, 0xbfff, 0xfff5,
	0x6bff, 0xffff, 0xbbbf, 0x3000, 0x67e0, 0x0061, 0xbfff, 0xffff,
	0x7fff, 0xf698, 0xb11f, 0x8033, 0x66ff, 0xffff, 0xbfff, 0xffff,
	0x77ff, 0xffff, 0xbff7, 0xbbbb, 0x73ee, 0x6ee7, 0xb333, 0x31f3,
	0x6666, 0x78c6, 0xaccf, 0xb318, 0x7bcc, 0xccc7, 0xb999, 0x99ff,
	0x7fff, 0xffff, 0xb77f, 0x3333, 0x6546, 0x6667, 0xb777, 0x74ab,
	0x7777, 0x7d9c, 0xb995, 0x19cd, 0x79dd, 0xddd2, 0xb5dd, 0xddff,
	0x7bff, 0xffff, 0xbffb, 0xfddd, 0x7fdd, 0xddff, 0xbfff, 0xffef,
	0x7fff, 0xfff6, 0xacff, 0x337f, 0x7fff, 0xffff, 0xb7ff, 0xffff,
	0x7fff, 0xffff, 0xbffd, 0x5fff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xfff9, 0xbbdf, 0xddff, 0x7bbf, 0xbfff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xfff7, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xfdff, 0xbfff, 0xfffd, 0x6fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbffe, 0xfffb, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfbf, 0xfffd, 0x6fff, 0xffff, 0xbfff, 0xffff,
	0x7dff, 0xffff, 0xbbff, 0x5fff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xfef5, 0xbbff, 0xbdff, 0x77bf, 0xbfff, 0xbfff, 0xffef,
	0x7dff, 0xffff, 0xbfbf, 0xffef, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7ffd, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xdfff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7ffb, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7ff7, 0xffbf, 0xbfff, 0xfdff,
	0x7fff, 0xffff, 0xbff7, 0xffdf, 0x7ffe, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xeeff, 0xbfff, 0xffff, 0x7ff7, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7ffd, 0xffff, 0xbfff, 0xffff,
	0x7ffd, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xdfbf, 0xbfff, 0xfdff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbf7f, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfbf, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfbf, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffd,
	0x7bff, 0xffff, 0xb7ff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbf7f, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffd,
	0x79ff, 0xffff, 0xb7bf, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x75ff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbebf, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffe,
	0x77ff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xa95f, 0xffff, 0x7fdf, 0xffff, 0xbfff, 0xffef,
	0x7fff, 0xffff, 0xbfff, 0x7fff, 0x7fff, 0xffff, 0xb7ff, 0xfff5,
	0x69ff, 0xffff, 0xa7ff, 0xffff, 0x7fbf, 0xffff, 0xbfff, 0xffdf,
	0x7fff, 0xffff, 0xbffe, 0xffff, 0x7fff, 0xffff, 0xafff, 0xffff,
	0x7dff, 0xffff, 0xbd9f, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfff5,
	0x6bff, 0xffff, 0xbaff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0x3333, 0x63e6, 0x6667, 0xb333, 0x31f3,
	0x6666, 0x7ccc, 0xb98f, 0x9999, 0x73cc, 0xccc7, 0xb999, 0x99ff,
	0x7fff, 0xffff, 0xb7ff, 0x7777, 0x6957, 0x7777, 0xb777, 0x74ab,
	0x7777, 0x7ddd, 0xbba5, 0x5ddd, 0x7bdd, 0xddd2, 0xb5dd, 0xddff,
	0x7fff, 0xffff, 0xbdff, 0xffff, 0x7fdf, 0xffff, 0xbfff, 0xffef,
	0x7fff, 0xffff, 0xbfff, 0x7fff, 0x7fff, 0xffff, 0xb7ff, 0xffff,
	0x7fff, 0xffff, 0xbffd, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xf7ff, 0x7fff, 0xfbff, 0xbfff, 0xf7ff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbffe, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xfbff, 0xbfff, 0xffff,
	0x7dff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xefff, 0x7fff, 0xffff, 0xbfff, 0xf7ff,
	0x7dff, 0xffff, 0xbbbf, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbeff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xefff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xfbff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbff7, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xf7ff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xefff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbeff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffbf,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffb,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffd,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffbf,
	0x7fff, 0xffff, 0xaddf, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfff5,
	0x69ff, 0xffff, 0xab7f, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7dff, 0xffff, 0xbddf, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfff5,
	0x69ff, 0xffff, 0xb63f, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffe,
	0x75ff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbf0f, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfff5,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xb6ff, 0xffff, 0x7fdf, 0xffff, 0xbfff, 0xffef,
	0x7fff, 0xffff, 0xbfff, 0x7fff, 0x7fff, 0xffff, 0xb7ff, 0xfffe,
	0x7bff, 0xffff, 0xb95f, 0xffff, 0x7fbf, 0xffff, 0xbfff, 0xffdf,
	0x7fff, 0xffff, 0xbffe, 0xffff, 0x7fff, 0xffff, 0xafff, 0xffeb,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffe,
	0x77ff, 0xffff, 0xb69f, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffef,
	0x7fff, 0xffff, 0xbfff, 0x3333, 0x63e6, 0x6667, 0xb333, 0x31f3,
	0x6666, 0x7ccc, 0xb98f, 0x9999, 0x73cc, 0xccc7, 0xb999, 0x99ff,
	0x7fff, 0xffff, 0xb7bf, 0x7777, 0x6957, 0x7777, 0xb777, 0x74ab,
	0x7777, 0x7ddd, 0xbba5, 0x5ddd, 0x7bdd, 0xddd2, 0xb5dd, 0xddff,
	0x7fff, 0xffff, 0xbedf, 0xffff, 0x7fdf, 0xffff, 0xbfff, 0xffef,
	0x7fff, 0xffff, 0xbfff, 0x7fff, 0x7fff, 0xffff, 0xb7ff, 0xfff7,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbeff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xfffe, 0x7ff7, 0xffbf, 0xbeff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xff5f,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x6ff7, 0xffff, 0xbf7f, 0xfeff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbdff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xff7f, 0xbfff, 0xffff,
	0x77ff, 0xffff, 0xbffb, 0xff7f, 0x7fff, 0xbbf7, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xfffb, 0x7ff7, 0xffff, 0xbfff, 0xffbf,
	0x7fff, 0xffff, 0xbffe, 0xffff, 0x7fff, 0xffff, 0xbffe, 0xffff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbdfd, 0xffff, 0x7fff, 0xdff7, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffbf, 0x7fff, 0xfdff, 0xbffe, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xfffb, 0x7ffb, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfee, 0x75ff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffdf,
	0x7fff, 0xffff, 0xb7ff, 0xffff, 0x7ff7, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbffd, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xb7df, 0xb5ff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffbf,
	0x7fff, 0xffff, 0xb65f, 0xefff, 0x7fff, 0x7fff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfff5,
	0x6bff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7dff, 0xffff, 0xb7ff, 0xfdff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfff5,
	0x6bff, 0xffff, 0xbd0f, 0xffff, 0x7ff7, 0xffdf, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffea,
	0x77ff, 0xffff, 0xbbff, 0xffff, 0x7fff, 0xffff, 0x9fff, 0xffff,
	0x5fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0x9fff, 0xffff, 0x4fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0x9fff, 0xffff,
	0x5fff, 0xffff, 0xbfff, 0xdeff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbaff, 0xffff, 0x77ff, 0xffbf, 0x9fff, 0xffff,
	0x5fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffe,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fef, 0x7fff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xa55f, 0xfebf, 0x67c6, 0x1ebf, 0xbfff, 0xffef,
	0x7fff, 0xffff, 0x9fff, 0x7fff, 0x5fff, 0xffff, 0xb7ff, 0xfff5,
	0x65ff, 0xffff, 0xafff, 0xc2bf, 0x47a6, 0x1ebf, 0xbfff, 0xffdf,
	0x7fff, 0xffff, 0xbffe, 0xffff, 0x7fff, 0xffff, 0xafff, 0xffff,
	0x5dff, 0xffff, 0xb55f, 0xfe7f, 0x67e6, 0x1f3f, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfff5,
	0x67ff, 0xffff, 0x9fff, 0xc27f, 0x47e6, 0x1f3f, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0x3bb3, 0x73ee, 0xe6e7, 0xb333, 0x31f3,
	0x4666, 0x7ccc, 0xb98f, 0x9999, 0x73cc, 0xccc7, 0xb999, 0x99ff,
	0x7fff, 0xffff, 0xbfff, 0x7337, 0x4546, 0x7677, 0xb777, 0x74ab,
	0x7777, 0x7ddd, 0xbba5, 0x5ddd, 0x7bdd, 0xddd2, 0xb5dd, 0xddff,
	0x5fff, 0xffff, 0xbfff, 0xffff, 0x7fdf, 0xdfff, 0xbfff, 0xffef,
	0x7fff, 0xffff, 0xbfff, 0x7fff, 0x7fff, 0xffff, 0xb7ff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xfeff, 0x77ff, 0xffff, 0xbfff, 0xefff,
	0x7fff, 0xffff, 0xbf7f, 0xfff7, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0x9fff, 0xffff, 0x7ff7, 0xffff, 0xbfff, 0xffff,
	0x7fdf, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xff7f, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0x8fff, 0xfdff, 0x4ff7, 0xffff, 0xbfff, 0xffff,
	0x7fbf, 0xffff, 0xbfff, 0xffef, 0x7fff, 0xff7f, 0x9fff, 0xffff,
	0x5dff, 0xffff, 0xafff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xefff,
	0x7fff, 0xffff, 0x9f7f, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xffff,
	0x7dff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0x9fff, 0xffff,
	0x5fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffb,
	0x77ff, 0xffff, 0x9fff, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xdfff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0x9fff, 0xffff,
	0x5fff, 0xffff, 0xbfff, 0xffff, 0x77ee, 0xffff, 0xbfff, 0xdfff,
	0x7fff, 0xefff, 0x9fff, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0x9fff, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0x9fff, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0x9fff, 0xffff,
	0x5fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0x9fff, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0x9fff, 0xffff,
	0x5fff, 0xffff, 0xa55f, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0x9fff, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xfffd,
	0x7bff, 0xffff, 0xafff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xa55f, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffd,
	0x7bff, 0xffff, 0xaaff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfffb,
	0x77ff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0x9fff, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0x9fff, 0xffff,
	0x5fff, 0xffff, 0xbaff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0x9fff, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xffee,
	0x77ff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0x9fff, 0xffff,
	0x5fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0x855f, 0xffff, 0x5fdf, 0xffff, 0xbfff, 0xffef,
	0x7fff, 0xffff, 0xbfff, 0x7fff, 0x7fff, 0xffff, 0x97ff, 0xfff5,
	0x4bff, 0xffff, 0xafff, 0xffff, 0x7fbf, 0xffff, 0xbfff, 0xffdf,
	0x7fff, 0xffff, 0xbffe, 0xffff, 0x7fff, 0xffff, 0xafff, 0xffff,
	0x7fff, 0xffff, 0xb55f, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xfff5,
	0x6bff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x5fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0x3333, 0x43e6, 0x6667, 0xb333, 0x31f3,
	0x6666, 0x7ccc, 0xb98f, 0x9999, 0x73cc, 0xccc7, 0xb999, 0x99ff,
	0x7fff, 0xffff, 0xbfff, 0x7777, 0x6957, 0x7777, 0xb777, 0x74ab,
	0x7777, 0x7ddd, 0xbba5, 0x5ddd, 0x7bdd, 0xddd2, 0xb5dd, 0xddff,
	0x7fff, 0xffff, 0x9fff, 0xffff, 0x5fdf, 0xffff, 0xbfff, 0xffef,
	0x7fff, 0xffff, 0xbfff, 0x7fff, 0x7fff, 0xffff, 0xb7ff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0x9fff, 0xfeff, 0x7fff, 0xbfff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffbf, 0x9fff, 0xfff7,
	0x7fff, 0xffff, 0xafff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0x9fff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7dff, 0xffff, 0xafff, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7dff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xf7ff,
	0x7fff, 0xffff, 0xbfbf, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffef, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x5fff, 0xefff, 0xbfff, 0xffef, 0x7fff, 0xffbf, 0x9fff, 0xffff,
	0x5fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xf7ff,
	0x7fff, 0xefff, 0x9fff, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfdf, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fef, 0xffff, 0x9fff, 0xe7ff,
	0x5fff, 0xefff, 0xbfff, 0xdfff, 0x7fff, 0xffff, 0x9fff, 0xffff,
	0x5fff, 0xffff, 0xbfff, 0xffbe, 0x7fff, 0xbdff, 0xbfff, 0xffff,
	0x7fff, 0xefff, 0x9fff, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xfffd, 0x7ff7, 0xfdff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xdfff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xff7f, 0x7fff, 0xdfff, 0xbfff, 0xd7ff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffef, 0x7ffd, 0xdfff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xefff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xfffb, 0x77ef, 0xffff, 0xbfdd, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xfffe, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0x9fff, 0xffef, 0x5ffd, 0xbfff, 0xbfef, 0xffff,
	0x7fff, 0xffff, 0x9fff, 0xefff, 0x5fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xfef1, 0x67e7, 0xbfff, 0x9fed, 0xeffd,
	0x53ff, 0xfff9, 0xb77f, 0xffff, 0x7fff, 0xb99f, 0xbccf, 0xffff,
	0x7fff, 0xffff, 0x9fff, 0xffff, 0x5fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0x9fff, 0xffff,
	0x5fff, 0xffff, 0xbffc, 0xffff, 0x7ff3, 0xfffe, 0xaf9e, 0x7cff,
	0x7fff, 0xffe7, 0x93e7, 0xffff, 0x5f3e, 0x79f3, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0x9fff, 0xffff,
	0x5fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
	0x7fff, 0xffff, 0xbfff, 0xffff, 0x7fff, 0xffff, 0xbfff, 0xffff,
} };

const std::array<uint16_t, 512> block_1 { {
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
} };

} /* namespace cpld */
} /* namespace portapack */
