#include "../includes/Span.hpp"
#include <iostream>
#include <vector>

int main()
{
	// Span sp = Span(5);
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	// return 0;

	Span a(20000);
	std::vector<int> vec;
	for (int i = 0; i < 20000; ++i) {
		vec.push_back(rand());
	}
	try
	{
		a.addRange(vec.begin(), vec.end());
		std::cout << a.shortestSpan() << std::endl;
		std::cout << a.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << a.curSize() << std::endl;
}
