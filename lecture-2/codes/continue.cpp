#include <iostream>
#include <vector>

int main(int argc, char const *argv[]){

	std::vector<int> num_vec = {1, 2, 3, 4, 5, 6};

	for (int num : num_vec){
		if (num % 2 == 0){
			continue; // Skips all the even numbers because num % 2 == 0 condition is true.
		}
		std::cout << num << std::endl;
	}

	return 0;
}