#include <iostream>

#define MODE 1

#ifndef MODE
#error MODE is not defined!
#endif

#if MODE == 1
int add(int a, int b)
{
    return a + b;
}
#endif

int main()
{
#if MODE == 0

    std::cout << "Training mode" << std::endl;

#elif MODE == 1

    std::cout << "Combat mode" << std::endl;

    int num1, num2;

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    std::cout << "Addition result: "
        << add(num1, num2)
        << std::endl;

#else

    std::cout << "Unknown mode. Exiting" << std::endl;

#endif

    return 0;
}