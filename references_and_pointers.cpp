#include <iostream>

int main() {
  int lol = 53;
  int *lol_pointer{&lol};
  std::cout << lol << std::endl;
  std::cout << &lol << std::endl;
  std::cout << lol_pointer << std::endl;
  std::cout << *lol_pointer << std::endl;

  // shoes_reference is a non-constant l value reference variable that can be
  // used as an alias for variable shoes
  int shoes{2};

  int &shoes_reference = shoes;
  std::cout << "shoes: " << shoes << ", shoes_reference: " << shoes_reference
            << std::endl;

  shoes = 3;
  std::cout << "shoes: " << shoes << ", shoes_reference: " << shoes_reference
            << std::endl;

  shoes_reference = 5;
  std::cout << "shoes: " << shoes << ", shoes_reference: " << shoes_reference
            << std::endl;

  const int &five =
      5; // constant lvalue reference binded to a temporary of type `int`
  // int &number; ---> Error, reference must be initialized

  const int jojo{7};
  const int &jojo_reference = jojo; // only constant lvalue references can be
                                    // used for non-modifiable l values.

  // void &lola  ----> references of type void are disallowed.

  // Use of references --> we can call functions using pass by references
  // instead of pass by value to avoid making copies of object
}
