#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <stack>

template<class T> class MutantStack: public std::stack<T> {
public:
	MutantStack() {};
	MutantStack(const MutantStack<T> &mstack): std::stack<T>(mstack) {}
	MutantStack<T>& operator=(const MutantStack<T>& other) {
		this->c = other.c; //c: container
		return *this;
	}
	~MutantStack() {}

	typedef class std::stack<T>::container_type::iterator iterator;
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};

#endif /* MUTANTSTACK_H */