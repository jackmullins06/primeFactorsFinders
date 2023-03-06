#include <iostream>

bool isPrime(int number) {
    if (number == 1) {
        return false;
    } else if (number == 2) {
        return true;
    } else if (number % 2 == 0) {
        return false;
    } else {
        for (int i = 3; i * i <= number; i += 2) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
}

void findPrimeFactors(int input) {
    int factor = 2;
    while (input > 1) {
        if (input % factor == 0) {
            if (isPrime(factor)) {
                std::cout << factor << std::endl;
                input /= factor;
            } else {
                factor++;
            }
        } else {
            factor++;
        }
    }
}

int promptForInput() {
    int input;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> input;

    return input;
}

int main() {
    int input = promptForInput();
    findPrimeFactors(input);

    return 0;
}
