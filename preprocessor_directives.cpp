#include <iostream>

int main() {
  #define LOLA_LAND

  #ifdef JOJO_LAND
  std::cout<<"Jojo"<<std::endl; //This won't print since JOJO_LAND identifer is not defined.
  #endif

  #ifdef LOLA_LAND
  std::cout<<"Lola"<<std::endl;
  #endif

  #ifndef DOMA_LAND
  std::cout<<"Doma"<<std::endl;
  #endif
}

