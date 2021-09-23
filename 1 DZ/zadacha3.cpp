
#include <iostream>
#include <cmath>


int main()
{
	double a, b, c, d, x1, x2;
	std::cin >> a >> b >> c;
	d = pow(b,2) - 4 * a * c;
	if (a == 0)
	{
		x1 = (-1) * c / b;
		std::cout << x1;
	}
	else if ((a != 0) && (d >= 0))
	{
		x1 = ((-1) * b + pow(d, 0.5)) / (2 * a);
		x2 = ((-1) * b - pow(d, 0.5)) / (2 * a);
		if (x1 == x2)
		{
			std::cout << x1;
		}
		else
		{
			std::cout << x1 << x2;
		}
	}
	else
		std::cout << "No solution";

	
}

