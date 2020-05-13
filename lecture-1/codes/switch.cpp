#include <iostream>

int main(int argc, char const *argv[]){

	int num = 20;

	switch (num){
		case 1:
			std::cout << "Execute the first statement.\n";
			break;
		case 2:
			std::cout << "Execute the second statement.\n";
			break;
		default:
			std::cout << "Execute the last statement.\n";

	}

	return 0;
}