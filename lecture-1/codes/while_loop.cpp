#include <iostream>

int main(int argc, char const *argv[]){

	const int iterCount = 10;
	int i = 0;
	while (i < iterCount){
		std::cout << "Value of i is " << i << std::endl;
		++i;
	}

	return 0;
}