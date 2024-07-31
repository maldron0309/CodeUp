#include <iostream>

int main() 
{
    int y, m, d;
    char dot;

    std::cin >> y >> dot >> m >> dot >> d;
    std::cout << (d < 10 ? "0" : "") << d << '-' << (m < 10 ? "0" : "") << m << '-' << y << '\n';

    return 0;
}
