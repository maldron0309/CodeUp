#include <iostream>

int main() 
{
    int h, m, s = 0;
    char colon;
    
    std::cin >> h >> colon >> m >> colon >> s;
    std::cout << m << '\n';

    return 0;
}
