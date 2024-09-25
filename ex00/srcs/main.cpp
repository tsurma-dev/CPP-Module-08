#include "../includes/easyfind.hpp"
#include <iostream>
#include <deque>


int main(void) {
	std::vector<int> vector;
	vector.reserve(10);
	for (int i = 0; i < 10; ++i) {
		vector.push_back(i);
	}
	std::cout << easyfind(vector, 10) << std::endl;

	std::deque<int> deque(10);
	for (int i = 0; i < 10; ++i) {
		deque[i] = i + 10;
	}
	std::cout << easyfind(deque, 10) << std::endl;
	return (0);
}
