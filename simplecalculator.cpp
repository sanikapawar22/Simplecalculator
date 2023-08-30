#include <iostream>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double divide(int a, int b) {
        if (b == 0) {
            std::cerr << "Error: Division by zero" << std::endl;
            return 0;
        }
        return static_cast<double>(a) / b;
    }
};

int main() {
    Calculator calc;
    
    int num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (operation) {
        case '+':
            std::cout << "Result: " << calc.add(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << calc.subtract(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << calc.multiply(num1, num2) << std::endl;
            break;
        case '/':
            std::cout << "Result: " << calc.divide(num1, num2) << std::endl;
            break;
        default:
            std::cerr << "Invalid operation" << std::endl;
            break;
    }

    return 0;
}