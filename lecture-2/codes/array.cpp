#include <iostream>
#include <array>

int main(){

	std::array<float, 3> arr = {1.0f, 2.0f, 3.0f};

	for (int i = 0; i < 3; ++i){
		std::cout << "Item at index: " << i << " = " << arr[i] << std::endl;
	}

	std::cout << "\nNumber of items in array = " << arr.size() << std::endl;
	// arr = arr.clear();
	// std::cout << "\nNumber of items in array after clearing = " << arr.size() << std::endl;

	return 0;
}