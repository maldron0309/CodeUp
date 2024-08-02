    #include <iostream>
    #include <iomanip>

    int main()
    {
        int a{}, b{};
        std::cin >> a >> b;
        std::cout << a + b << '\n' << a - b << '\n' << a * b << '\n' << a / b << '\n' << a % b << '\n' << std::fixed << std::setprecision(2) << static_cast<double>(a) / b;

        return 0;
    }
