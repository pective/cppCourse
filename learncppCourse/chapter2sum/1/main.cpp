#include <iostream>

int readNumber() {
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;

    return x;
}

void writeAnswer(int x) {
    std::cout << "The answer is " << x << "\n";
}

int main() {
    int x { readNumber() };
    int y { readNumber() };

    // std::cout << readNumber() << " + " << readNumber() << " = " << writeAnswer(x+y);
    writeAnswer(x+y);
}