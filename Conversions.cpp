//
// Created by alexa on 25/04/2025.
//

#include "Conversions.h"

std::unordered_map<char, int> convertToIntMap {{'0', 0}, {'1', 1}, {'2', 2}, {'3', 3}, {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}};

std::unordered_map<int, char> convertToCharMap {{0, '0'}, {1, '1'}, {2, '2'}, {3, '3'}, {4, '4'}, {5, '5'}, {6, '6'}, {7, '7'}, {8, '8'}, {9, '9'}};

std::pair<bool, int> Conversions::stringToInt(const std::string& str){
  int result = 0;
  bool isValid = true;
  if (str.size() >9) {
    return std::make_pair(false, result);
  }
  for (int i = 0; i < str.size(); i++){
    auto it = convertToIntMap.find(str[(str.size()-1) - i]);
    if (it != convertToIntMap.end()){
      result += it->second * static_cast<int>(pow(10,i));
    }else{
      isValid = false;
      break;
    }
  }
  return std::make_pair(isValid, (isValid ? result : 0));
}

std::pair<bool, double> Conversions::stringToDouble(const std::string& str){
  double result = 0;
  bool isValid = true;
  std::stringstream ss(str);
  std::vector<std::string> halves;
  std::string token;

  while (std::getline(ss, token, '.')){
    halves.push_back(token);
  }
  if(halves.size() > 2){
    isValid = false;
    return std::make_pair(isValid, result);
  }
  std::pair<bool, int> inthalf = stringToInt(halves[0]);
  if(inthalf.first) {
    result += inthalf.second;
  }else {
    return std::make_pair(false, result);
  }
  if (halves.size() > 1) {
    if (halves[1].size() > 6) {
      return std::make_pair(false, 0);
    }
    for (int i = 0; i < halves[1].size(); i++){
      auto it = convertToIntMap.find(halves[1][i]);
      if (it != convertToIntMap.end()){
        result += static_cast<double>(1.00 /(pow(10,i+1)) * it->second);
      }else{
        isValid = false;
        break;
      }
    }
  }
  return std::make_pair(isValid, result);
}

std::pair<bool, std::string> Conversions::intToString(const int& number){ // completely wrong needs rework
  std::string result = "";
  bool isValid = true;
  for (int i = number; i > 0; i%10){
    auto it = convertToCharMap.find(i/10);
    if (it != convertToCharMap.end()){
      result += it->second;
    }else{
      isValid = false;
      break;
    }
  }
  return std::make_pair(isValid, result);
}