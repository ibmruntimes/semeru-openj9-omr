/*******************************************************************************
 * Copyright (c) 2000, 2022 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at http://eclipse.org/legal/epl-2.0
 * or the Apache License, Version 2.0 which accompanies this distribution
 * and is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following Secondary
 * Licenses when the conditions for such availability set forth in the
 * Eclipse Public License, v. 2.0 are satisfied: GNU General Public License,
 * version 2 with the GNU Classpath Exception [1] and GNU General Public
 * License, version 2 with the OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
 *******************************************************************************/

/*
 * This file will be included within an enum.  Only comments and enumerator
 * definitions are permitted.
 */

   NoReg                   = 0,

   // The order of the GPRS registers is defined by the linkage
   // convention, and the VM may rely on it (eg. for GC).
   eax                     = 1,
   FirstGPR                = eax,
   ebx                     = 2,
   ecx                     = 3,
   edx                     = 4,
   edi                     = 5,
   esi                     = 6,
   ebp                     = 7,
   esp                     = 8,
   r8                      = 9,
   r9                      = 10,
   r10                     = 11,
   r11                     = 12,
   r12                     = 13,
   r13                     = 14,
   r14                     = 15,
   r15                     = 16,
   LastGPR                 = r15,
   Last8BitGPR             = r15,
   LastAssignableGPR       = r15,

   vfp                     = 17,

   FPRMaskOffset           = LastGPR,
   st0                     = 18,
   FirstFPR                = st0,
   st1                     = 19,
   st2                     = 20,
   st3                     = 21,
   st4                     = 22,
   st5                     = 23,
   st6                     = 24,
   st7                     = 25,
   LastFPR                 = st7,
   LastAssignableFPR       = st7,

   XMMRMaskOffset          = LastGPR,
   xmm0                    = 26,
   FirstXMMR               = xmm0,
   xmm1                    = 27,
   xmm2                    = 28,
   xmm3                    = 29,
   xmm4                    = 30,
   xmm5                    = 31,
   xmm6                    = 32,
   xmm7                    = 33,
   xmm8                    = 34,
   xmm9                    = 35,
   xmm10                   = 36,
   FirstSpillReg           = xmm10,
   xmm11                   = 37,
   xmm12                   = 38,
   xmm13                   = 39,
   xmm14                   = 40,
   xmm15                   = 41,
   LastSpillReg            = xmm15,
   LastXMMR                = xmm15,

   ByteReg                 = 42,
   BestFreeReg             = 43,
   SpilledReg              = 44,
   NumRegisters            = 45,

   NumXMMRegisters         = LastXMMR - FirstXMMR + 1,
   MaxAssignableRegisters  = NumXMMRegisters + (LastAssignableGPR - FirstGPR + 1) - 1 // -1 for stack pointer
