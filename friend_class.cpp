#include <iostream>

int main() {
  int lol = 53;
  int *lol_pointer = &lol;
  std::cout << lol << std::endl;
  std::cout << &lol << std::endl;
  std::cout << lol_pointer << std::endl;
  std::cout << *lol_pointer << std::endl;
}
