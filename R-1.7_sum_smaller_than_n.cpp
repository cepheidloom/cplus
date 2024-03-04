//Write a short C++ function that takes an integer n and returns the sum of all the integers smaller than n.

#include <iostream>
#include <arm64intr.h>

inline int sum_before_n(int n);

int main() {
	int a;
	std::cout<<"Enter a number:"<<"\n";
	std::cin>>a;
	std::cout<<"The sum of numbers upto "<<a<<" is "<<sum_before_n(a)<<"\n";
}

inline int sum_before_n(int n) {return int((n*(n+1))/2);}
