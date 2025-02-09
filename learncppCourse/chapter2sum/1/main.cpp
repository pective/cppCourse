#include <iostream>

int readNumber();

void writeAnswer(int x);

int main() {
    int x { readNumber() };
    int y { readNumber() };

    // std::cout << readNumber() << " + " << readNumber() << " = " << writeAnswer(x+y);
    writeAnswer(x+y);
}