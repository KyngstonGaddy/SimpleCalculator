// Finds the sum and average then prints it
// Created by Kyngston Gaddy
// 1.21.2025

// import statements
#include "SumAverage.h"
#include <iostream>
#include <string>
#include <vector>

// gets userInput for the five numbers
std::vector<std::string> SumAverage::getNums() {
    std::vector<std::string> nums = {};
    std::string num1, num2, num3, num4, num5;

    while (true) {
        try {
            // first number
            std::cout << "Enter your first number: ";
            std::getline(std::cin, num1);
            try {
                std::stod(num1); // converts the string to double
            } catch (...) {
                std::cout << "Invalid number! Please try again!" << std::endl; // if it's not a number, then it'll throw an error
                continue;
            }

            // second number
            std::cout << "Enter your second number: ";
            std::getline(std::cin, num2);
            try {
                std::stod(num2); // converts the string to double
            } catch (...) {
                std::cout << "Invalid number! Please try again!" << std::endl; // if it's not a number, then it'll throw an error
                continue;
            }

            // third number
            std::cout << "Enter your third number: ";
            std::getline(std::cin, num3);
            try {
                std::stod(num3); // converts the string to double
            } catch (...) {
                std::cout << "Invalid number! Please try again!" << std::endl; // if it's not a number, then it'll throw an error
                continue;
            }

            // fourth number
            std::cout << "Enter your fourth number: ";
            std::getline(std::cin, num4);
            try {
                std::stod(num4); // converts the string to double
            } catch (...) {
                std::cout << "Invalid number! Please try again!" << std::endl; // if it's not a number, then it'll throw an error
                continue;
            }

            // fifth number
            std::cout << "Enter your fifth number: ";
            std::getline(std::cin, num5);
            try {
                std::stod(num5); // converts the string to double to test if it works
            } catch (...) {
                std::cout << "Invalid number! Please try again!" << std::endl; // if it's not a number, then it'll throw an error
                continue;
            }

            nums = {num1, num2, num3, num4, num5};
            break;
        }
        catch (const std::exception& e) {
            std::cout << "Invalid number! Please try again!" << std::endl;
        }
    }
    return nums;
}

// creates five variables as doubles to find the sum
double SumAverage::getSum(std::vector<std::string> nums) {
    double p = std::stod(nums[0]);
    double w = std::stod(nums[1]);
    double x = std::stod(nums[2]);
    double y = std::stod(nums[3]);
    double z = std::stod(nums[4]);
    return (p + w + x + y + z);
}

// takes the sum and divides it by five
double SumAverage::getAverage(std::vector<std::string> nums, double sum) {
    double sum1 = getSum(nums);
    return sum1 / 5;
}
