// Copyright (c) 2021 Lauren Wheatley All rights reserved.
//
// Created by: Lauren Wheatley
// Created on: May 2021
// This program adds numbers

#include <iostream>
#include <string>

int main() {
    int total = 0;
    std::string userNum;
    int userNumInt;
    std::string userAdd;
    int userAddInt;

    std::cout << "Enter how many numbers you want to add up: ";
    std::cin >> userNum;

    try {
        userNumInt = std::stoi(userNum);

        if (userNumInt > 0) {
            while (userNumInt > 0) {
                std::cout << "Enter a number to add: ";
                std::cin >> userAdd;
                try {
                    userAddInt = std::stoi(userAdd);

                    userNumInt = userNumInt - 1;
                    if (userAddInt < 0) {
                       std::cout << "Negative numbers wont"
                       << "be added!" << std::endl;
                        continue;
                    } else {
                       total = total + userAddInt;
                    }
                } catch (std::invalid_argument) {
                   std::cout << "That's not a number!!!!" << std::endl;
                }
            }
            std::cout << "The sum is " << total << std::endl;

        } else {
            std::cout << userNumInt << " is not a"
            << "positive integer!" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That's not a number!!!" << std::endl;
    }
    std::cout << "Thanks for playing<3" << std::endl;
}
