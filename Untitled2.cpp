#include <iostream>

bool multiple(int no1, int no2) {
    if (no2 == 0) {
        return false; 
    }
    return no1 % no2 == 0;
}

int main() {
    int no1, no2;

    std::cout << "Enter the first integer: ";
    std::cin >> no1;
    std::cout << "Enter the second integer: ";
    std::cin >> no2;

    if (multiple(no1, no2)) {
    	std::cout << "*------------------------*" << std::endl;
        std::cout << no1 << " is a multiple of " << no2 << "." << std::endl;
    } else {
        std::cout << no1 << " is not a multiple of " << no2 << "." << std::endl;
    }

    return 0;
}

