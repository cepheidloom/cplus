#include <iostream>
#include <string>

using std::string; 
enum Mood { HORNY, HAPPY, CURIOUS, SEARCH };

class Manish {
public:
  Manish(){};
  Manish(const std::string &state, bool sma);
  void setMood();
  static int getAge() { return 23; } //Static member functions can be called without first creating a class instance

private:
  long pain;
  short sight;
  bool misrey;
  std::string progress;
};

int main() {
  Manish twenty_four;
  std::cout << twenty_four.getAge() << std::endl;
  std::cout<<Manish::getAge()<<std::endl;
}
