#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>
#include <iostream>

template <class T> typename T::iterator easyfind(T container, int num)
{
	class T::iterator iter = std::find(container.begin(), container.end(), num);
	if (iter == container.end())
		throw std::logic_error("no such data.");
	else
		return iter;
}

#endif /* EASYFIND_H */