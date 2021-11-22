/*
 * Copyright © 2020 Loongson Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * Authors:
 *    Sui Jingfeng <suijingfeng@loongson.cn>
 */


#ifndef LOONGSON_SHADOW_H_
#define LOONGSON_SHADOW_H_

#include "shadow.h"

Bool LS_ShadowLoadAPI(ScrnInfoPtr pScrn);

Bool LS_ShadowAllocFB(ScrnInfoPtr pScrn, void **ppShadowFB);
void LS_ShadowFreeFB(ScrnInfoPtr pScrn, void **ppShadowFB);

void LS_TryEnableShadow(ScrnInfoPtr pScrn);

void *LS_ShadowWindow(ScreenPtr pScreen, CARD32 row, CARD32 offset,
        int mode, CARD32 *size, void *closure);

void LS_ShadowUpdatePacked(ScreenPtr pScreen, shadowBufPtr pBuf);

#endif
