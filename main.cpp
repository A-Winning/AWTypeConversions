//
// Created by alexa on 25/04/2025.
//

#include <iomanip>

#include "Conversions.h"

using namespace Conversions;

int main() {
    std::string si = "999999999.999999";
    std::pair<bool, double> result = stringToDouble(si);
    std::cout << "Valid: " << (result.first ? "True" : "False") << ", Out: " <<std::setprecision(15) << result.second;
    return 0;
}