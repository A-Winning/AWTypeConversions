//
// Created by alexa on 25/04/2025.
//

#include "Conversions.h"


std::pair<bool, int> Conversions::stringToInt(const std::string str){
  int result = 0;
  bool isValid = true;

  for (int i = str.size()-1; i == 0; i--){
    auto it = Conversions::convertToIntMap.find(str[i]);
    if (it != Conversions::convertToIntMap.end()){
      result += 10 * i * it->second;
    }else{
      isValid = false;
      break;
    }
  }
  return std::make_pair(isValid, result);
}