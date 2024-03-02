#include <iostream>

bool arrayProductIsEven(int array[], int n);

int main() {
	int n;
	std::cout<<"Enter the size of array \n";
	std::cin>>n;
	int array[n];
	int x;	
	for (int i=0; i<n; i++) {
		std::cout<<"Enter elements in your array:\n";
		std::cin>>x;
		array[i] = x;
	}
	std::cout<<arrayProductIsEven(array,n)<<"\n";	
	return 0;
}

bool arrayProductIsEven(int array[], int n) {
	if (n<2) {
		return false;
	}

	for (int i = 0; i < n; i++) {
		if (array[i]%2==0) {
			return true;
		}
	}
	return false;	
}
