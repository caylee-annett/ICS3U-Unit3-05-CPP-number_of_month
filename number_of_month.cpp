// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program prints the month that matches the integer that
//    the user entered

#include <iostream>
#include <string>

int main() {
    // This function tells the user which month matches their number
    std::string monthNumberString;
    int numberOfMonthInt;

    // Input
    std::cout << "Enter the number of a month (ex. 4 for April): ";
    std::cin >> monthNumberString;
    std::cout << "" << std::endl;

    // Process & Output
    numberOfMonthInt = atoi(monthNumberString.c_str());
    switch (numberOfMonthInt) {
        case 1 :
            std::cout << "Month #1 is January." << std::endl;
            break;
        case 2 :
            std::cout << "Month #2 is February." << std::endl;
            break;
        case 3 :
            std::cout << "Month #3 is March." << std::endl;
            break;
        case 4 :
            std::cout << "Month #4 is April." << std::endl;
            break;
        case 5 :
            std::cout << "Month #5 is May." << std::endl;
            break;
        case 6 :
            std::cout << "Month #6 is June." << std::endl;
            break;
        case 7 :
            std::cout << "Month #7 is July." << std::endl;
            break;
        case 8 :
            std::cout << "Month #8 is August." << std::endl;
            break;
        case 9 :
            std::cout << "Month #9 is September." << std::endl;
            break;
        case 10 :
            std::cout << "Month #10 is October." << std::endl;
            break;
        case 11 :
            std::cout << "Month #11 is November." << std::endl;
            break;
        case 12 :
            std::cout << "Month #12 is December." << std::endl;
            break;
        default :
            std::cout << "Not a month." << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
