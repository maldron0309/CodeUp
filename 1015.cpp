#include <iostream>
#include <iomanip>

int main()
{
	float f = 0;
	std::cin >> f;
	std::cout << std::fixed << std::setprecision(2) << f;

	return 0;
}