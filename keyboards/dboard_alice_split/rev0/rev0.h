
/* Copyright 2019 discord4415
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT( \
        l03,l08,l13,l14,l18,l23,l27,    r01,r06,r11,r16,r20,r24,r29,r33, \
        l04,l09,    l15,l19,l24,l28,    r02,r07,r12,r17,r21,r25,r30,r34, \
        l05,l10,    l16,l20,l25,l29,    r03,r08,r13,r18,r22,r26,    r35, \
    l01,l06,l11,    l17,l21,l26,l30,    r04,r09,r14,r19,r23,r27,r31,r36, \
    l02,l07,l12,l22,            l31,    r05,r10,r15,        r28,r32,r37 \
) \
{ \
    {KC_NO,l03,l08,l13,l14,l18,l23,l27},     \
    {KC_NO,l04,l09,KC_NO,l15,l19,l24,l28},     \
    {KC_NO,l05,l10,KC_NO,l16,l20,l25,l29},     \
    {l01,l06,l11,KC_NO,l17,l21,l26,l30},     \
    {l02,l07,l12,l22,KC_NO,KC_NO,KC_NO,l31},     \
    {r01,r06,r11,r16,r20,r24,r29,r33 }, \
    {r02,r07,r12,r17,r21,r25,r30,r34,}, \
    {r03,r08,r13,r18,r22,r26,KC_NO,r35}, \
    {r04,r09,r14,r19,r23,r27,r31,r36,}, \
    {r05,r10,r15,KC_NO,KC_NO,r28,r32,r37} \
}
