/****************************************************************************
 Copyright (c) 2010-2012 cocos2d-x.org
 Copyright (c) 2011 ForzeField Studios S.L
 Copyright (c) 2013-2014 Chukong Technologies Inc.

 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/
#ifndef __CCVERTEX_H__
#define __CCVERTEX_H__

#include "base/ccTypes.h"

/**
 * @addtogroup base
 * @{
 */

NS_CC_BEGIN

/** @file CCVertex.h*/

/** @~english converts a line to a polygon  @~chinese 将一系列的线转换为多边形*/
void CC_DLL ccVertexLineToPolygon(Vec2 *points, float stroke, Vec2 *vertices, unsigned int offset, unsigned int nuPoints);

/** 
@~english returns whether or not the line intersects，the two line are AB and CD
@~chinese 计算两条线AB和CD的交点
@param Ax @~english x coordinate of A. @~chinese A点的x坐标。
@param Ay @~english y coordinate of A. @~chinese A点的y坐标。
@param Bx @~english x coordinate of B. @~chinese B点的x坐标。
@param By @~english y coordinate of B. @~chinese B点的y坐标。
@param Cx @~english x coordinate of C. @~chinese C点的x坐标。
@param Cy @~english y coordinate of C. @~chinese C点的y坐标。
@param Dx @~english x coordinate of D. @~chinese D点的x坐标。
@param Dy @~english y coordinate of D. @~chinese D点的y坐标。
@return @~english the relative positon of the intersection point on line AB @~chinese 交点的位置（通过在AB上的相对位置来指定）
*/
bool CC_DLL ccVertexLineIntersect(float Ax, float Ay,
                             float Bx, float By,
                             float Cx, float Cy,
                             float Dx, float Dy, float *T);

NS_CC_END


// end of base group
/// @}

#endif /* __CCVERTEX_H__ */

