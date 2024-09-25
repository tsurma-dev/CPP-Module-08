#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <exception>
#include <algorithm>
#include <vector>

template<typename T>
int easyfind(T& hayStack, int needle) {
	typename T::iterator iterator;
	iterator = std::find(hayStack.begin(), hayStack.end(), needle);
	if (iterator == hayStack.end())
		return (-1);
	return (distance(hayStack.begin(), iterator));
}

#endif
