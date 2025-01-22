// main method for the program
// Created by Kyngston Gaddy
// 1.21.2025

// import statements
#include <iostream>
#include <ostream>

// importing the other classes
#include "EvenOdd.h"
#include "SimpleCalc.h"
#include "SumAverage.h"
#include "Factorial.h"


// main method for program
int main() {
    // class objects
    SimpleCalc calculator;
    SumAverage sumAverage;
    EvenOdd evenOdd;
    Factorial factorial;
    std::string input;

    bool continueProgram = true; // if false, then the program will stop

    // begins the program
    while (continueProgram) {
        try {
            std::cout << "Welcome to the Simple Math I/O. You will have the option to choose between four functions: \n"
                         "1) Simple Calculator \n"
                         "2) Sum/Average \n"
                         "3) Even/Odd \n"
                         "4) Factorial \n"
                         "Type \"y\" to begin, or \"q\" to quit: ";
            std::getline(std::cin, input);
            if (input == "q") {
                std::cout << "\nUnfortunate you didn't even try the program. Peace!" << std::endl;
                continueProgram = false;
                break;
            }
            else if (input == "y") {
                bool keepGoing = false; // used later on if the user would like to keep using other functions
                while (!keepGoing) {
                    std::cout << "\nPlease enter a number (1-4): ";
                    std::getline(std::cin, input);

                    // simple calculator
                    if (input == "1") {
                        std::vector<std::string> operation = calculator.getOperation();
                        double result = calculator.performOperation(operation);
                        std::cout << "\nYour result is: " << result << "\n" << std::endl;
                        keepGoing = true;
                    }

                    // sum / average
                    if (input == "2") {
                        std::vector<std::string> user = sumAverage.getNums();
                        double sum = sumAverage.getSum(user);
                        double average = sumAverage.getAverage(user, sum);
                        std::cout << "\nThe sum is: " << sum << "\nThe average is: " << average << "\n" <<std::endl;
                        keepGoing = true;
                    }

                    // even or odd
                    if (input == "3") {
                        signed long long newInput = evenOdd.getInput();
                        bool result = evenOdd.evenOdd(newInput);
                        if (result == true) {
                            std::cout << "\nThe number " << newInput << " is even!\n" << std::endl;
                        }
                        else {
                            std::cout << "\nThe number " << newInput << " is odd!\n" << std::endl;
                        }
                        keepGoing = true;
                    }

                    // factorial
                    if (input == "4") {
                        unsigned long long newInput = factorial.getInput();
                        unsigned long long result = factorial.getFactorial(newInput);
                        std::cout << "\nThe factorial is: " << result << std::endl;
                        keepGoing = true;
                    }
                }
            }
            else {
                throw std::invalid_argument("\nPlease try again.\n");
            }

            // asking if the user would like to continue. if not, then the program will quit
            std::cout << "Continue? (y/n): ";
            std::getline(std::cin, input);
            if (input != "y") {
                std::cout << "\nGlad you gave it a chance. Farewell!\n" << std::endl;
                continueProgram = false;
                break;
            }
        } catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}