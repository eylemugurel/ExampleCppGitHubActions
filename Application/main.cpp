#include <iostream>
#include <Library/Calculator.h>

int main()
{
    Library::Calculator calculator;

    const int result = calculator.Add(5, 7);
    std::cout << "Addition result: " << result << std::endl;

    return 0;
}
