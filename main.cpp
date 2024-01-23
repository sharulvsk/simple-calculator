#include <iostream>
#include "calculator.h"

int main() {
    Calculator calculator;

    double num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    double result = calculator.calculate(num1, num2, operation);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
