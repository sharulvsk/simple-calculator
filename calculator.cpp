#include "calculator.h"

double Calculator::calculate(double num1, double num2, char operation) {
    switch (operation) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                throw std::invalid_argument("Cannot divide by zero.");
            }
        default:
            throw std::invalid_argument("Invalid operation.");
    }
}
