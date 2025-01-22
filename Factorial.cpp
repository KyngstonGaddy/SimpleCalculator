// Calculates the factorial of a given number using a for loop
// Created by Kyngston Gaddy
// 1.21.25

// import statements
#include "Factorial.h"
#include <iostream>
#include <string>

// gets user input for the integer
unsigned long long Factorial::getInput() {
    std::string input;
    while (true) {
        std::cout << "Enter any integer (WARNING - any integer greater than 65 will cause the program to overflow, resulting in the factorial printing \"0\"): ";
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

// gets the factorial result
unsigned long long Factorial::getFactorial(int number) {
    unsigned long long result;

    while (true) {
        try {
            if (number == 0) {
                return 1;
            }
            if (number < 0) {
                throw std::invalid_argument("Number must be non-negative");
            }
            result = 1; // setting the result to 1
            for (int i = number; i > 0; i--) { // counting down from number to 1
                result *= i; // multiplying result by (i-1)
            }
            return result;
        }
        catch (const std::invalid_argument& e) {
            std::cout << "Invalid input! Try again!" << std::endl;
            number = getInput();
        }
    }
}