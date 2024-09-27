#include "../includes/Span.hpp"

Span::Span() {}

Span::Span( unsigned int N ) : _size(N) {
}

Span::Span(const Span& other) : _size(other._size), _set(other._set) {
}

Span& Span::operator=(const Span& other) {
	if (this == &other) { return(*this); }
	this->_size = other._size;
	this->_set = other._set;
	return (*this);
}

Span::~Span() {}

void Span::addNumber( int number ) {
	if (this->_set.size() >= this->_size)
		throw std::overflow_error( "Span: Set is full" );
	this->_set.insert( number );
}

int Span::shortestSpan(void) {
	int range = std::numeric_limits<int>::max();
	if (this->_set.size() < 2)
		throw std::range_error("Span: Set too small for ranges");
	std::multiset<int>::iterator it = _set.begin();
	std::multiset<int>::iterator next = ++_set.begin();
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
	return (*--_set.end() - *_set.begin());
}

unsigned int Span::curSize(void) { return this->_set.size(); }

void Span::printSet(void) {
	std::cout << "Multiset content:\n";
	for (std::multiset<int>::iterator i = this->_set.begin(); i != this->_set.end(); ++i)
		std::cout << *i << ", ";
	std::cout << std::endl;
}
