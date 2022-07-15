/*
 * Coded by Relg99.
 * Date 15/07/22
 * Compiled using Gcc v10.
 */

#include <iostream>

int main() {
    int value = {5};

    // Here we can see the functionality of using Postfix.

    std::cout << "The value is incrementing " << value++ << std::endl; // 5
    std::cout << "The value " << value << std::endl; // 6

    value = 5;

    std::cout << "The value is decreasing " << value-- << std::endl; // 5
    std::cout << "The value " << value << std::endl; // 4


    // Here we can see the functionality of uisng Prefix.

    value = 5;

    std::cout << "The value already incremented " << ++value << std::endl; // 6
    std::cout << "The same value " << value << std::endl;

    value = 5;

    std::cout << "The value already decreased " << --value << std::endl;
    std::cout << "The same value " << value << std::endl;

    return 0;   
}