// Implementation of simple calculator program
// Created by Kyngston Gaddy
// 1.21.2025

// import statements
#include <iostream>
#include <string>
#include <vector>
#include "SimpleCalc.h"

// gets the user operation
std::vector<std::string> SimpleCalc::getOperation() {
    std::vector<std::string> userInput = {};
    std::string operation;
    std::string num1, num2;

    while (true) {
        try {
            // chooses the operation
            std::cout << "Which operation will you be performing: \n"
                         "1) Multiplication (*) \n"
                         "2) Division (/) \n"
                         "3) Addition (+)\n"
                         "4) Subtraction (-) \n"
                         "Your choice: ";
            std::getline(std::cin, operation);
            if (operation != "*" && operation != "/" && operation != "*" && operation != "+" && operation != "-") {
                std::cout << "Invalid input! Please try again!\n" << std::endl;
                continue;
            }

            // gets the first number
            std::cout << "Enter your first integer: ";
            std::getline(std::cin, num1);
            try {
                std::stoi(num1); // converts the string to double
            } catch (...) {
                std::cout << "Invalid number! Please try again!" << std::endl; // if it's not a number, then it'll throw an error
                continue;
            }

            // gets the second number
            std::cout << "Enter your second integer: ";
            std::getline(std::cin, num2);
            try {
                std::stoi(num2);

                // this checks for division by 0
                if (operation == "/" && std::stod(num2) == 0) {
                    std::cout << "Division by zero! Please try again!" << std::endl;
                    continue;
                }
            } catch (...) {
                std::cout << "Invalid number! Please try again!" << std::endl; // if not a number, then it'll throw an error
                continue;
            }


            if (operation != "*" && operation != "/" && operation != "-" && operation != "+" && operation != "-") {
                std::cout << "Invalid input! Please try again!" << std::endl;
                continue;
            }
            userInput = {operation, num1, num2};
            return userInput;

        } catch (std::invalid_argument& e) {
            std::cout << e.what() << std::endl;
        }
    }
}

// performs the operation based on the user input
double SimpleCalc::performOperation(std::vector<std::string> fill) {
    std::vector<std::string> operator_strings = fill;
    const std::string& operation = operator_strings[0];
    double x = std::stod(operator_strings[1]);
    double y = std::stod(operator_strings[2]);

    if (operation == "*") { // multipication
        return x * y;
    }
    if (operation == "/") { // division
        return x / y;
    }
    if (operation == "+") { // addition
        return x + y;
    }
    if (operation == "-") { // subtraction
        return x - y;
    }
}