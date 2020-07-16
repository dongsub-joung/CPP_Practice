class Calculator
{
public:

	int add(int x, int y)
	{
		return x + y;
	}

	int sub(int x, int y)
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

	int mult(int x, int y)
	{
		return x * y;
	}

	int factorial(int x)
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