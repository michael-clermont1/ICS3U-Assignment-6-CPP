// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Michael Clermont
// Created on: June 2022
// This program gets the volume of a rectangular prism

#include <iostream>


float VolOfCyl(float height, float width, float length) {
    // calculate volume
    float volume;

    // process
    volume = height * width * length;

    return volume;
}

main() {
    // this function gets the height, length, and width

    float heightFloat;
    float lengthFloat;
    float widthFloat;
    float calculatedVolume;

    // call functions
    while (true) {
        try {
            // input
            std::cout << "Enter the height of the rectangular prism(mm): ";
            std::cin >> heightFloat;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore();
                throw "error";
            }
            std::cout << "Enter the width of the rectangular prism(mm): ";
            std::cin >> widthFloat;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore();
                throw "error";
            }
            std::cout << "Enter the length of the rectangular prism(mm): ";
            std::cin >> lengthFloat;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore();
                throw "error";
            }
            calculatedVolume = VolOfCyl(heightFloat, widthFloat, lengthFloat);
            std::cout << "The volume of the rectangular prism is "
            << calculatedVolume << " mm³." << std::endl;
            break;
        } catch (const char* error) {
            std::cout << "That is not an float, try again." << std::endl;
            continue;
        }
    }
    std::cout << "\nDone." << std::endl;
}
