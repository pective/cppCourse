#include <iostream>

int main() {

    char op;
    double num1, num2, res;

    std::cout << "--------- Calculator ---------\n";
    std::cout << "Enter first number: "; std::cin >> num1;
    std::cout << "Enter second number: "; std::cin >> num2;
    std::cout << "What do you want to do? (+, -, *, /)"; std::cin >> op;

    switch (op)
    {
    case '+':
        res = num1 + num2;
        std::cout << "Result = " << res << "\n";
        break;
    case '-':
        res = num1 - num2;
        std::cout << "Result = " << res << "\n";
        break;
    case '*':
        res = num1 * num2;
        std::cout << "Result = " << res << "\n";
        break;
    case '/':
        res = num1 / num2;
        std::cout << "Result = " << res << "\n";
        break;
    default:
        std::cout << "Please enter a valid operator (+, -, *, /)\n";
        break;
    }

    return 0;

}