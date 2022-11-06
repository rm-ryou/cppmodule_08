#include "Span.h"

int	main()
{
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	try {
		Span sp = Span(3);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Span sp = Span(1);

		sp.addNumber(6);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Span sp = Span(2000);

		sp.addNumber(sp.begin(), 1000, 50);

		for (std::vector<int>::const_iterator iter = sp.begin(); iter != sp.end(); iter++)
			std::cout << *iter << " ";
		std::cout << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Span sp = Span(2000);

		sp.addNumber(sp.begin(), -100, 50);

		for (std::vector<int>::const_iterator iter = sp.begin(); iter != sp.end(); iter++)
			std::cout << *iter << " ";
		std::cout << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Span sp = Span(20);

		sp.addNumber(sp.begin(), 100, 50);

		for (std::vector<int>::const_iterator iter = sp.begin(); iter != sp.end(); iter++)
			std::cout << *iter << " ";
		std::cout << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}