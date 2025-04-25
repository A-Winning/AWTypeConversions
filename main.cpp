//
// Created by alexa on 25/04/2025.
//

#include "Conversions.h"

using namespace Conversions;

int main() {
    std::string si = "10202";
    std::pair<bool, int> result = stringToInt(si);
    std::cout << "Valid: " << result.first << ", Out: " << result.second;
    return 0;
}