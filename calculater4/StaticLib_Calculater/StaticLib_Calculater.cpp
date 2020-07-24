// StaticLib_Calculater.cpp : 정적 라이브러리를 위한 함수를 정의합니다.
//

#include "pch.h"
#include "framework.h"

// TODO: 라이브러리 함수의 예제입니다.
class Calculator
{

public:

	Calculator() {}

	int add(const int x, const int y)
	{
		return  x + y;
	}

	int sub(const int x, const int y)
	{
		return x - y;
	}

	int div(int x, int y)
	{
		int sum = 0;

		if (x < y)
		{
			int p = 0;
			p = x;
			x = y;
			y = p;
		}

		sum = x / y;

		return sum;
	}

	int mult(const int x, const int y)
	{
		return x * y;
	}

	int factorial(const int x)
	{
		int i;
		int sum = 1;

		for (i = 1; i <= x - 1; ++i)
		{
			sum = sum * i;
		}

		return sum * x;
	}
};

int main()
{
	Calculator* cal = new Calculator;
	return cal->add(3, 5);
}