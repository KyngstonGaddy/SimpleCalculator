cmake_minimum_required(VERSION 3.30)
project(ADV3Lab01_01)

set(CMAKE_CXX_STANDARD 14)

add_executable(ADV3Lab01_01 main.cpp
        SimpleCalc.cpp
        SimpleCalc.h
        SumAverage.cpp
        SumAverage.h
        EvenOdd.cpp
        EvenOdd.h
        Factorial.cpp
        Factorial.h)
