//
// Created by alexa on 25/04/2025.
//

#ifndef CONVERSIONS_H
#define CONVERSIONS_H

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <utility>




namespace Conversions {

    std::pair<bool, int> stringToInt(const std::string& str);
    std::pair<bool, double> stringToDouble(const std::string str);
    std::pair<bool, std::string> intToString(const int); // while > 1 %10 -> %100
    std::pair<bool, std::string> floatToString(const double); // while >1 div 1 10 100 1000 until == 0 then other way
};



#endif //CONVERSIONS_H
