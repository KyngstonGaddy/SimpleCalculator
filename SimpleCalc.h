// header file for the simple calculator class
// Created by Kyngston Gaddy
// 1.21.2025

// guard for multiple inclusions of the header file
#ifndef SIMPLE_CALC_H
#define SIMPLE_CALC_H

// import files
#include <string>
#include <vector>

// class constructor
class SimpleCalc {
    public:
        std::vector<std::string> getOperation();
        double performOperation(std::vector<std::string> fill);
};
#endif