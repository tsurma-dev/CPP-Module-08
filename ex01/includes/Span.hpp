#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <set>
#include <algorithm>
#include <stdexcept>
#include <limits>

class Span {
private:
	Span( void );
	unsigned int _size;
	std::multiset<int> _set;
public:
	Span( unsigned int );
	~Span();
	void addNumber( int );
	void addRange( std::multiset<int>::iterator, std::multiset<int>::iterator );
	int shortestSpan( void );
	int longestSpan( void );

};

#endif
