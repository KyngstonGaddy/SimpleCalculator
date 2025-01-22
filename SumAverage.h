// header file for SumAverage class
// Created by Kyngston Gaddy
// 1.21.25

// guard for multiple inclusions of the header file
#ifndef SUMAVERAGE_H
#define SUMAVERAGE_H

// import statements
#include <string>
#include <vector>

// class constructor
class SumAverage {
    public:
        std::vector<std::string> getNums();
        double getSum(std::vector<std::string> nums);
        double getAverage(std::vector<std::string> nums, double sum);
};

#endif //SUMAVERAGE_H
