#include <iostream>
#include <iomanip>

int main()
{
    long long a{}, b{}, c{};
    std::cin >> a >> b >> c;
    std::cout << a + b + c << '\n'
              << std::fixed << std::setprecision(1) << static_cast<double>(a + b + c) / 3;

    return 0;
}
