#include <iostream>

class Bike {
public:
  Bike();
  Bike(int n);
  ~Bike();
  int *getData() { return data; }
  void printData() {
    for (int i = 0; i < size; i++) {
      std::cout << *(data + i) << std::endl;
    }
  }

  void setData() {
    int element;
    for (int i = 0; i< size; i++) {
      std::cout<<"Enter element "<<i<<std::endl;
      std::cin>>element;
      data[i] = element;
    }
  }

private:
  int *data;
  int size;
};

int main() {
  Bike honda(10);
  honda.setData();
  std::cout << honda.getData() << std::endl;
  honda.printData();
}

Bike::Bike() {
  size = 10;
  data = new int[10];
}
Bike::Bike(int n) {
  size = n;
  data = new int[n];
}
Bike::~Bike() { delete[] data; }