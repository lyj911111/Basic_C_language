#include "basicArith.h"	//	수학연산에 필요한 해더를 포함

// 함수내용 정의
double TriangleArea(double base, double height)
{
	return Div(Mul(base, height), 2);	// 밑변 x 높이 x 2
}

double CircleArea(double rad)
{
	return Mul(Mul(rad, rad), PI);
}