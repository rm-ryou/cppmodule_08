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

	template<class T> void	addNumber(T begin, T end, int num)
	{
		if ((max_ - (unsigned int)array_.size()) < std::distance(begin, end))
			throw std::logic_error("error");
		if (std::distance(begin, end) < 0)
			throw std::logic_error("invalid number");
		array_.insert(begin, std::distance(begin, end), num);
	}
	std::vector<int>::iterator begin();
	std::vector<int>::iterator end();
};


#endif /* SPAN_H */