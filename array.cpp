#include <cstdlib>
#include <iostream>

int main() {
	//create an array of integer literals
	int array[] = {1,2,3,4};
	
	//create an integer pointer that points to array f
	//so basically the array identifer f is just a pointer to first element of array
	int* array_pointer = array;

	//print the second element of array and dereference array_pointer
	std::cout<<array[1]<<*array_pointer<<"\n";

	//print the third element of array
	std::cout<<array_pointer+2<<"\n";
	std::cout<<*(array_pointer+1)<<"\n";

	//show the difference between f+1 and g+1
	std::cout<<array+1<<"\n";
}
