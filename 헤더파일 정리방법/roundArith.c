#include "basicArith.h"	// 기본 사칙연산에 필요한 해더만 추가.

double RectangleRound(double base, double height)
{
	return Mul(Add(base, height), 2);
}

double SquareRound(double side)
{
	return Mul(side, 4);
}
