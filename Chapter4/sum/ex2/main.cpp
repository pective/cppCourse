#include <iostream>

double getNumber() {
    double n;
    std::cout << "Enter a decimal number: \n";
    std::cin >> n;
    return n;
}
char getSymbol() {
    char s;
    std::cout << "Enter Arithmetic operator: \n";
    std::cin >> s;
    return s;
}
void calculate(double n1, double n2, char s) {
    switch (s)
    {
    case '+':
        std::cout << n1 << " " << " + " << n2 << " = " << n1+n2 << "\n";
        break;
    case '-':
        std::cout << n1 << " " << " - " << n2 << " = " << n1-n2 << "\n";
        break;
    case '*':
        std::cout << n1 << " " << " * " << n2 << " = " << n1*n2 << "\n";
        break;
    case '/':
        std::cout << n1 << " " << " / " << n2 << " = " << n1/n2 << "\n";
        break;
    default:
        std::cout << "idk what went wrong tbh";
        break;
    }
}


int main() {
    double x { getNumber() };
    double y { getNumber() };
    char s { getSymbol() };

    calculate(x,y,s);
}