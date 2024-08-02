#include <iostream>

int main() 
{
    std::string s{};
    std::cin >> s;

    for (char c : s)
    {
        if (c != '-') std::cout << c;
    }
    std::cout << '\n';

    return 0;
}
