#include <cstdlib>
#include <string>
#include <iostream>

int main() {
	std::string a = "lol";
	std::string b = "you are a lseor";
	std::string c = a + b;
	std::cout<<c<<"\n";

	std::string* cp = &c;

	std::cout<<*cp<<"\n";
}
