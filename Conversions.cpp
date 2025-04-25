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

std::pair<bool, float> Conversions::stringToFloat(const std::string str){
  float result = 0;
  bool isValid = true;
  std::stringstream ss(str);
  std::vector<std::string> halves;
  std::string token;

  while (std::getline(ss, token, '.')){
    halves.push_back(token);
  }
  if(halves.size() != 2){
    isValid = false;
    return std::make_pair(isValid, result);
  }
  for (int i = halves[0].size()-1; i == 0; i--){
    auto it = Conversions::convertToIntMap.find(str[i]);
    if (it != Conversions::convertToIntMap.end()){
      result += 10 * i * it->second;
    }else{
      isValid = false;
      break;
    }
  }
  for (int i = 0; i < halves[1].size(); i++){
    auto it = Conversions::convertToIntMap.find(halves[1][i]);
    if (it != Conversions::convertToIntMap.end()){
      result += 1/(10 * i) * it->second;
    }else{
      isValid = false;
      break;
    }
  }
  return std::make_pair(isValid, result);
}

std::pair<bool, std::string> Conversions::intToString(const int number){
  std::string result = "";
  bool isValid = true;
  for (int i = number; i > 0; i%10){
    auto it = Conversions::convertToCharMap.find(i/10);
    if (it != Conversions::convertToCharMap.end()){
      result += it->second;
    }else{
      isValid = false;
      break;
    }
  }
  return std::make_pair(isValid, result);
}