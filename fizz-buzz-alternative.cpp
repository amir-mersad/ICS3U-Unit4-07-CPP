// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program prints 1000 to 2000 with 5 of numbers each line
#include <iostream>
int counter = 1;

int main() {
    // This function prints 1000 to 2000 with 5 of numbers each line
    for (counter = 1000; counter < 2000 + 1; counter++) {
        if (counter % 5 == 0) {
            std::cout << "\n" << counter << " ";
        } else {
            std::cout << counter << " ";
        }
    }
}
