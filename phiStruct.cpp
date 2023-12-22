#include <iostream>

struct phi {
    float lmbd;
    float year;
};

void printPhiValues(const phi& obj) {
    std::cout << "lmbd: " << obj.lmbd << ", year: " << obj.year << std::endl;
}

void askAndPrintPhiValues(const phi& obj) {
    std::string input;
    std::cout << "Enter the object name (l, m, or r): ";
    std::cin >> input;

    if (input == "l") {
        printPhiValues(obj);
    } else if (input == "m") {
        printPhiValues(obj);
    } else if (input == "r") {
        printPhiValues(obj);
    } else {
        std::cout << "Invalid object name!" << std::endl;
    }
}

int main() {
    phi l, m, r;
    l.lmbd = 21.3;
    l.year = 7888.3;
    m.lmbd = 21.5;
    m.year = 7888.5;
    r.lmbd = 21.1;
    r.year = 7888.1;

    askAndPrintPhiValues(l);

    return 0;
}
