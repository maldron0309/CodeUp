#include <iostream>
#include <string>

int main() {
    
    std::string input;
    std::cin >> input;

    int pos = input.find('.');
    
    std::string integer = input.substr(0, pos);
    std::cout << integer << '\n';

    std::string fractional = input.substr(pos + 1);
    std::cout << fractional;
    return 0;
}
