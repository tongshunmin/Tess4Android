///////////////////////////////////////////////////////////////////////
// File:        dotproductneon.h
// Description: Architecture-specific dot-product function.
// Author:      Liu Shouyong,ZhangQiang
// Created:     2018/11/20
//
// (C) Copyright 2018, ZSmarter Technology Co., Ltd.
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
///////////////////////////////////////////////////////////////////////

#ifndef TESSERACT_ARCH_DOTPRODUCTNEON_H_
#define TESSERACT_ARCH_DOTPRODUCTNEON_H_

#include <cstdint> // for int32_t

namespace tesseract
{

// Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
double DotProductNEON(const double *u, const double *v, int n);
// Computes and returns the dot product of the n-vectors u and v.
// Uses Intel SSE intrinsics to access the SIMD instruction set.
int32_t IntDotProductNEON(const int8_t *u, const int8_t *v, int n);

} // namespace tesseract.

#endif //TESSERACT_ARCH_DOTPRODUCTNEON_H_
