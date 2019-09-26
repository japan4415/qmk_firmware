
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
     k60, k52, k42, k37,      k29, k19, k11, k01,      k10, k18, k28, k36,      k41, k51,      k67,\
     k61, k53, k43,           k30, k20, k12, k02,      k09, k17, k27, k35,      k40, k50, k59, k66,\
     k62, k54, k44,           k31, k21, k13, k03,      k08, k16, k26, k34,      k39, k49,      k65,\
          k55, k45,           k32, k22, k14, k04,      k07, k15, k25, k33,      k38, k48, k58, k64,\
          k56, k46,                k23,      k05,      k06,      k24,                k47, k57, k63\
){ \
    {  k01,  k11,  k19,  k29,  k37,  k42,  k52,  k60}, \
    {  k02,  k12,  k20,  k30,KC_NO,  k43,  k53,  k61}, \
    {  k03,  k13,  k21,  k31,KC_NO,  k44,  k54,  k62}, \
    {  k04,  k14,  k22,  k32,KC_NO,  k45,  k55,KC_NO}, \
    {  k05,KC_NO,  k23,KC_NO,KC_NO,  k46,  k56,KC_NO}, \
    {  k06,KC_NO,  k24,KC_NO,KC_NO,  k47,  k57,  k63}, \
    {  k07,  k15,  k25,  k33,  k38,  k48,  k58,  k64}, \
    {  k08,  k16,  k26,  k34,  k39,  k49,KC_NO,  k65}, \
    {  k09,  k17,  k27,  k35,  k40,  k50,  k59,  k66}, \
    {  k10,  k18,  k28,  k36,  k41,  k51,KC_NO,  k67} \
}
