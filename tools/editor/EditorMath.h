#ifndef MATH_H
#define MATH_H

#include <array>

typedef float vec;
typedef vec vec3[3];
typedef vec vec4[4];
typedef vec vec6[6];

typedef bool Boolean;

int snap(int point);

class Vector{ public: Vector(); ~Vector(); vec3 * mins; vec3 * maxs; };

//afx.h
Boolean m_bBrushPrimitMode;

#endif
