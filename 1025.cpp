#include <iostream>

int main() 
{
    
    int n = 0;
    std::cin >> n;

    int divisor = 10000;

    for (int i = 0; i < 5; i++)
    {
        int digit = n / divisor;
        std::cout << "[" << digit * divisor << "]" << '\n';
        n %= divisor;
        divisor /= 10;
    }

    return 0;
}
