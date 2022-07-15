/*
 * Coded by Relg99.
 * Date 15/07/22
 * Compiled using Gcc v10
 */

#include <iostream>

int main() {
    int number_1 {60};
    int number_2 {100};

    std::cout << "Number 1 : " << number_1 << std::endl;
    std::cout << "Number 2 : " << number_2 << std::endl;

    std::cout << "Comparing the two numbers. . . " << std::endl;
    std::cout << std::boolalpha;

    std::cout << "number_1 < number_2 : " << (number_1 < number_2) << std::endl;
    std::cout << "number_1 > number_2 : " << (number_1 > number_2) << std::endl;
    std::cout << "number_1 <= number_2 : " << (number_1 <= number_2) << std::endl;
    std::cout << "number_1 >= number_2 : " << (number_1 >= number_2) << std::endl;
    std::cout << "number_1 == number_2 : " << (number_1 == number_2) << std::endl;
    std::cout << "number_1 != number_2 : " << (number_1 != number_2) << std::endl;

    return 0;
}