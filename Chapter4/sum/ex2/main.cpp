#include <iostream>

int calc(int x, int y, char o) {
    switch (o)
    {
    case '+':
        return x+y;
        break;
    case '-':
        return x-y;
        break;
    case '*':
        return x*y;
        break;
    case '/':
        return x/y;
        break;
    default:
        std::cout << "Enter a valid operand\n";
        break;
    }
    return 0;
}

int main() {
    int x,y;
    char o;
    std::cout << "Enter first number\n";
    std::cin >> x;
    std::cout << "Enter second number\n";
    std::cin >> y;
    std::cout << "+, -, *, /\n";
    std::cin >> o;
    
    std::cout << x << " " << o << " " << y << " = " << calc(x,y,o) << "\n";
}