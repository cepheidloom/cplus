#include <iostream>

class Guitar {
public:
  Guitar(int noOfStrings, const std::string &name);
  void getData() {
    std::cout << noOfString << std::endl;
    std::cout << nam << std::endl;
  };

private:
  int noOfString;
  std::string nam;
};

Guitar::Guitar(int noOfStrings, const std::string &name) {
  noOfString = noOfStrings;
  nam = name;
} 
