#include <iostream>

inline bool isMultiple(long n, long m);

int main() {
	int n;
	int m;
	std::cout<<"Enter 2 numbers:"<<"\n";
	std::cin>>n>>m;
	std::cout<<n<<" is a multiple of "<<m<<" ?: "<<isMultiple(n,m)<<"\n";
}

inline bool isMultiple(long n, long m) {
	return n%m==0;
}
