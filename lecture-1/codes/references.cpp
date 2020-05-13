#include <iostream>

int main(int argc, char const *argv[]){

	int num = 5;
	int& num_ref = num;

	std::cout << "\nThe value of num is " << num << std::endl;
	std::cout << "It's reference is " << num_ref << std::endl;

	num = 11;

	std::cout << "\nThe value of num is " << num << std::endl;
	std::cout << "It's reference is " << num_ref << std::endl;

	num_ref = 144;

	std::cout << "\nThe value of num is " << num << std::endl;
	std::cout << "It's reference is " << num_ref << std::endl;

	return 0;
}