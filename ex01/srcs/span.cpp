#include "../includes/Span.hpp"
#include "Span.hpp"

Span::Span( void ) {}

Span::Span( unsigned int N ) : _size(N) {

}

Span::~Span()
{
}

void Span::addNumber( int number ) {
	if (this->_set.size() >= this->_size)
		throw std::overflow_error( "Span: Set is full" );
	this->_set.insert( number );
}

void Span::addRange(std::multiset<int>::iterator a,
                    std::multiset<int>::iterator b) {
	if ()
	this->_set.insert(a, b);
}

int Span::shortestSpan(void) {
	int	range = std::numeric_limits<int>::max();
	if (this->_set.size() < 2)
		throw std::range_error( "Span: Set too small for ranges" );
	std::multiset<int>::iterator it = _set.begin();
	std::multiset<int>::iterator next = std::next(it);
	while (next != _set.end()) {
		if (range > *next - *it)
			range = *next - *it;
		++it;
		++next;
	}
	return (range);
}

int Span::longestSpan(void) {
	if (this->_set.size() < 2)
		throw std::range_error( "Span: Set too small for ranges" );
	return (*std::prev(_set.end()) - *_set.begin());
}
