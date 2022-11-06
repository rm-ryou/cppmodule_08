#include "Span.h"

Span::Span(): max_(100) {}

Span::Span(unsigned int size): max_(size) {}

Span::Span(const Span& span)
{
	*this = span;
}

Span&	Span::operator=(const Span& other)
{
	if (this != &other) {
		this->array_ = other.array_;
		this->max_ = other.max_;
	}
	return *this;
}

Span::~Span() {}

void	Span::addNumber(int num)
{
	if (this->max_ < this->array_.size())// + 1)
		throw std::logic_error("Span is full.");
	else
		this->array_.push_back(num);
}

int		Span::shortestSpan()
{
	if (this->array_.size() < 2)
		throw std::logic_error("error");
	std::vector<int> tmp(this->array_);
	std::sort(tmp.begin(), tmp.end());
	int	shortRange = longestSpan();
	for (size_t	i = 0; i < tmp.size() - 1; i++) {
		if (tmp[i + 1] - tmp[i] < shortRange)
			shortRange = tmp[i + 1] - tmp[i];
	}
	return shortRange;
}

int		Span::longestSpan()
{
	if (this->array_.size() < 2)
		throw std::logic_error("error");
	return *std::max_element(this->array_.begin(), this->array_.end()) - *std::min_element(this->array_.begin(), this->array_.end());
}

std::vector<int>::iterator Span::begin()
{
	return this->array_.begin();
}

std::vector<int>::iterator Span::end()
{
	return this->array_.end();
}
