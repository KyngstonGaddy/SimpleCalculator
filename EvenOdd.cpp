// Determines if an integer given by the user is even or odd
// Created by Kyngston Gaddy
// 1.21.25

// import statement
#include "EvenOdd.h"
#include <iostream>
#include <string>

// gets user input
signed long long EvenOdd::getInput() {
    std::string input;
    while (true) {
        std::cout << "Enter any integer: ";
        std::getline(std::cin, input);
        try {
            if (input.find(".") != std::string::npos) {
                throw std::invalid_argument("Invalid input");
            }
            else {
                return std::stoll(input);
            }
        }
        catch (const std::invalid_argument& e) {
            std::cout << "Invalid input! Try again!" << std::endl;
        }
    }
}

// determines if the number is even or odd
bool EvenOdd::evenOdd(signed long long number) {
    return number % 2 == 0;
}