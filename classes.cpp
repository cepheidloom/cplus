#include <iostream>
#include <string>

using namespace std;

enum Brand { ANDROID, IOS, KEY_PAD };

class Phone {
public:
  Phone();
  Phone(const string &nm, const int &prc, const string &osystem,
        const Brand &brnd);
  int getPrice() { return 29; }
  string getName() { return name; }
  Brand getBrand() { return brand; }

private:
  string name;
  long price;
  string os;
  Brand brand;
};

// main starts
int main() {
  Phone p1;
  Phone p2("Iphone", 25000, "apple OS", IOS);
  Phone p3 = p2;
  cout << p1.getName() << endl;
  cout << p2.getName() << endl;
  cout << p3.getName() << endl;
}
// main ends

Phone::Phone() {
  name = "Nokia";
  price = 25000;
  os = "custom";
  brand = ANDROID;
}
Phone::Phone(const string &nm, const int &prc, const string &osystem,
             const Brand &brnd) {
  name = nm;
  price = prc;
  os = osystem;
  brand = brnd;
}
