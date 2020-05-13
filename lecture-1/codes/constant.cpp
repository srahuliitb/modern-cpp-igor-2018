#include <iostream>
#include <string>

int main(){

	const std::string myBirthMonth = "May";
	const int myBirthDay = 28;
	const int myBirthYear = 1992;
	const float myHeight = 170.0f;

	std::cout << "\nMy date of birth is " << myBirthMonth 
											<< " " << myBirthDay 
											<< ", " << myBirthYear << "\n";
	std::cout << "I am " << myHeight << " cm tall.\n";
	return 0;
}