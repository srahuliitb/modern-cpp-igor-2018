#include <iostream>
#include <vector>

int main(){

	std::vector<int> vec = {1, 2, 3, 4};

	std::cout << "\nBefore Adding New Item:" << std::endl;
	std::cout << "First item in the vector = " << vec.front() << std::endl;
	std::cout << "Last item in the vector = " << vec.back() << std::endl;

	vec.push_back(100);

	std::cout << "\nAfter Adding New Item:" << std::endl;
	std::cout << "First item in the vector = " << vec.front() << std::endl;
	std::cout << "Last item in the vector = " << vec.back() << std::endl;

	vec.emplace_back(55);

	std::cout << "\nAfter Adding Another New Item:" << std::endl;
	std::cout << "First item in the vecor = " << vec.front() << std::endl;
	std::cout << "Last item in the vector = " << vec.back() << std::endl;

	for (int i = 0; i < vec.size(); ++i){

		std::cout << "\nItem at index " << i << " = " << vec[i] << std::endl;
	}

	return 0;
}