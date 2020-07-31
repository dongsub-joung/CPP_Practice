class Calculator
{
public:
	//»ı¼ºÀÚ
	Calculator(){}

	int add(const int x, const int y)
	{
		return x + y;
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
