#include <iostream>

int main(int argc, char const *argv[]){

	int num = 12;

	const int& num_ref = num;

	std::cout << "The value of num is " << num << std::endl;
	std::cout << "Its reference is " << num_ref << std::endl;

	num = 8;
	// The value of num_ref changes because the value of num changes even though num_ref is a constant.
	std::cout << "The value of num is " << num << std::endl;
	std::cout << "Its reference is " << num_ref << std::endl;	

	return 0;
}