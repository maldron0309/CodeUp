#include <iostream>

int main()
{
    char c{};
    std::cin >> c;
    std::cout << static_cast<char>(c + 1);

    return 0;
}
