//
// Created by alexa on 25/04/2025.
//

#include <iomanip>

#include "Conversions.h"

using namespace Conversions;

int main() {
    int si = 999999999;
    std::pair<bool, double> result = intToString(si);
    std::cout << "Valid: " << (result.first ? "True" : "False") << ", Out: " <<std::setprecision(15) << result.second;
    return 0;
}