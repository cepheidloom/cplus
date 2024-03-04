#include <iostream>
#include <string>

using std::string; 
enum Mood { HAPPY, CURIOUS, SEARCH };

class lol {
public:
  lol(){};
  lol(const std::string &state, bool sma);
  void setMood();
  int getAge() { return 23; }

private:
  long pain;
  short sight;
  bool misrey;
  std::string progress;
};

int main() {
  lol twenty_four;
  std::cout << twenty_four.getAge() << std::endl;
}
