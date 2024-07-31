#include <iostream>
#include <iomanip>

int main() 
{
    double d{ 0 };
    std::cin >> d;
    std::cout << std::fixed << std::setprecision(11) << d;

    return 0;
}
