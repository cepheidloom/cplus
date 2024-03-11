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

  friend std::ostream &operator<<(std::ostream &out, const Bike &bike);

  void setData() {
    int element;
    for (int i = 0; i < size; i++) {
      std::cout << "Enter element " << i << std::endl;
      std::cin >> element;
      data[i] = element;
    }
  }

private:
  int *data;
  int size;
};

std::ostream &operator<<(std::ostream &out, const Bike &bike) {
  std::cout<<bike.data<<" "<<bike.size;
  return out;
} 

int main() {
  Bike honda(10);
  std::cout << honda.getData() << std::endl;
  Bike bmw = honda;
  Bike lola = bmw;
  std::cout << honda << std::endl;
  std::cout << bmw.getData() << std::endl;
  std::cout << lola.getData() << std::endl;
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
