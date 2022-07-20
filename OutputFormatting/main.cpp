/*
 * Coded by Relg99.
 * Date 16/07/22
 * Compiled using Gcc v10.
 */

#include <iostream>
#include <iomanip>

int main() {

    // Enter at end of the line.
    std::cout << "Sample text." << std::endl;

    // Flushes the text from cout to the memory.
    std::cout << "Fun text." << std::flush << std::endl;

    // Set column width.
    int col_width {15};
    std::cout << std::setw(col_width) << "Brian" << std::setw(col_width) << "Morales" << std::endl;

    // Right justified text.
    std::cout << std::right;
    std::cout << std::setw(col_width) << "Some text." << std::endl;
    // Left justified text.
    std::cout << std::left;
    std::cout << std::setw(col_width) << "Same text." << std::endl;

    // Internal justificaiton of numbers.
    std::cout << std::internal;
    std::cout << std::setw(col_width) << -123.54 << std::endl;
    std::cout << std::right;
    std::cout << std::setw(col_width) << -123.54 << std::endl;

    // Fill empty spaces with some character.
    std::cout << std::left;
    std::cout << std::setfill('-');
    std::cout << std::setw(col_width) << "First name" << std::endl;
    std::cout << std::setw(col_width) << "Second name" << std::endl;

    // Force the format to be true/false.
    bool condition_1 {true}, condition_2 {false};

    std::cout << std::boolalpha;
    std::cout << "Conditions: " << condition_1 << ", " << condition_2 << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "Conditions: " << condition_1 << ", " << condition_2 << std::endl;

    std::showpos;
    std::noshowpos;

    std::dec;
    std::hex;
    std::oct;

    std::uppercase;

    std::showbase;
    std::noshowbase;

    std::scientific;
    std::fixed;

    std::cout.unsetf(std::ios::scientific | std::ios::fixed);

    std::setprecision(20);

    std::showpoint;
    std::noshowpoint;



}