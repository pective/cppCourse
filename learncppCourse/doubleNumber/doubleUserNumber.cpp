#include <iostream>

int getUserNumber() {
    std::cout << "Enter number: ";
    int userX;
    std:: cin >> userX; 

    return userX;
}

void doubleNumber(int x) {
    std::cout << x << " doubled = " << x*2 << "\n";
}

int main() {
    doubleNumber(getUserNumber());
    return 0;
}