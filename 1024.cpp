#include <iostream>

int main() 
{
    
    std::string word{};
    std::cin >> word;
    
    for (char ch : word)
    {
        std::cout << "'" << ch << "'" << '\n';
    }

    return 0;
}
