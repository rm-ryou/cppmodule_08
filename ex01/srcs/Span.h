#ifndef SPAN_H
#define SPAN_H

#include <algorithm>
#include <exception>
#include <iostream>
#include <iterator>
#include <vector>

class Span {
private:
	std::vector<int>	array_;
	unsigned int		max_;
public:
	Span();
	Span(unsigned int size);
	Span(const Span& span);
	Span& operator=(const Span& other);
	~Span();

	void	addNumber(int num);
	int		shortestSpan();
	int		longestSpan();

	template<class T> void	addNumber(T begin, int size, int num)
	{
		if (size < 0)
			throw std::logic_error("invalid size");
		if ((max_ - (unsigned int)array_.size()) < (unsigned int)size)
			throw std::logic_error("vector size error");
		array_.insert(begin, size, num);
	}
	std::vector<int>::iterator begin();
	std::vector<int>::iterator end();
};


#endif /* SPAN_H */