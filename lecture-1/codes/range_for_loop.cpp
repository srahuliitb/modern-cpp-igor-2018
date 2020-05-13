#include <iostream>
#include<vector>
#include <string>

int main(int argc, char const *argv[]){

	std::vector<int> num_vec = {1, 2, 3, 4, 5};
	std::vector<std::string> string_vec = {"my", "name", "is", "rahul", "singh"};

	for(int item : num_vec){
		std::cout<< "Item # " << item << " is " << item << std::endl;
	}

	std::cout << "\nPrinting every word of the string vector." << std::endl;
	for(const auto& str : string_vec){
		std::cout << str << std::endl;
	}

	std::cout << "\nPrint every letter of the FIRST word." << std::endl;
	for(const auto& letter : string_vec.front()){
		std::cout << letter << std::endl;
	}

	std::cout << "\nPrint every letter of the LAST word." << std::endl;
	for(const auto& letter : string_vec.back()){
		std::cout << letter << std::endl;
	}

	return 0;
}