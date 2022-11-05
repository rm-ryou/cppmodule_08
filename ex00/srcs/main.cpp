#include <vector>
#include "easyfind.h"

int	main()
{
	{
		std::vector<int> test(10, 0);

		for (int i = 0; i < 10; i++)
			test.push_back(i);
		std::vector<int>::iterator ans = easyfind(test, 5);
		std::cout << *ans << std::endl;
	}
	{
		std::vector<int> test(10, 0);

		for (int i = 0; i < 10; i++)
			test.push_back(i);
		try {
			std::vector<int>::iterator ans = easyfind(test, 100);
			std::cout << *ans << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		
	}
}