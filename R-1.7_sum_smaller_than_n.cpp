#include <iostream>

inline int sum_before_n(int n);

int main() {
	int a;
	std::cout<<"Enter a number:"<<"\n";
	std::cin>>a;
	std::cout<<"The sum of numbers upto "<<a<<" is "<<sum_before_n(a)<<"\n";
}

inline int sum_before_n(int n) {return int((n*(n+1))/2);}
