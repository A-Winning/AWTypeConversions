//
// Created by alexa on 25/04/2025.
//

#ifndef CONVERSIONS_H
#define CONVERSIONS_H

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <utility>

namespace Conversions {
    std::unordered_map<char, int> convertToIntMap {{'0', 0}, {'1', 1}, {'2', 2}, {'3', 3}, {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}};
    std::unordered_map<int, char> convertToCharMap {{0, '0'}, {1, '1'}, {2, '2'}, {3, '3'}, {4, '4'}, {5, '5'}, {6, '6'}, {7, '7'}, {8, '8'}, {9, '9'}};
    std::pair<bool, int> stringToInt(const std::string str);
    std::pair<bool, float> stringToFloat(const std::string str);
    std::pair<bool, std::string> intToString(const int);
    std::pair<bool, std::string> floatToString(const float);
};



#endif //CONVERSIONS_H
