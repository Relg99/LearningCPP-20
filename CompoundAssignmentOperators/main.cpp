/*
 * Coded by Relg99.
 * Date 15/07/22
 * Compiled with Gcc v10
 */

#include <iostream>

int main() {
    int value {45};

    std::cout << "The value is " << std::endl;
    std::cout << value << std::endl; // 45

    value += 5;
    std::cout << "The value is (after +=) " << std::endl;
    std::cout << value << std::endl; // 50

    value -= 5;
    std::cout << "The value is (after -=) " << std::endl;
    std::cout << value << std::endl; // 45

    value *= 2;
    std::cout << "The value is (after *=) " << std::endl;
    std::cout << value << std::endl; // 90

    value /= 10;
    std::cout << "The value is (after /=) " << std::endl;
    std::cout << value << std::endl; // 9

    value %= 3;
    std::cout << "The value is (after %=) " << std::endl;
    std::cout << value << std::endl; // 0

    return 0;
}