#ifndef MUTANT_HPP_
#define MUTANT_HPP_

#include <stack>
#include <iterator>

template<class DQ>
class MutantStack : public std::stack<DQ> {
public:
	typedef typename std::stack<DQ>::container_type::iterator iterator;

	iterator begin() { return (this->c.begin()); }
	iterator end() { return (this->c.end()); }
};

#endif
