#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <set>
#include <algorithm>
#include <stdexcept>
#include <limits>
#include <iostream>

class Span {
private:
	unsigned int _size;
	std::multiset<int> _set;
	Span();
public:
	Span( unsigned int N );
	Span(const Span& other );
	Span& operator=(const Span& other);
	~Span();
	void addNumber( int );
	int shortestSpan( void );
	int longestSpan( void );

	template<typename iterator>
	void addRange(iterator begin, iterator end) {
		unsigned long i = std::distance(begin, end);
		if (i < 0 || (i) > (this->_size - this->_set.size()))
			throw std::range_error( "Span: Set too small for addRange" );
		this->_set.insert(begin, end);
	}

	unsigned int curSize( void );
	void printSet(void);

};

#endif
