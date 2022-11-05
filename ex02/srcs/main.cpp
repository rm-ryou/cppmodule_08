#include "MutantStack.h"

int	main()
{
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << "s.top() = " << s.top() << std::endl;
		s.push(1);
		std::cout << "s.top() = " << s.top() << std::endl;
	}
	{
		MutantStack<int>	mstack;
		for (int i = 0; i < 100; i++) {
			mstack.push(i);
			std::cout << mstack.top() << " ";
		}
		std::cout << std::endl;
		for (int i = 0; i < 50; i++)
			mstack.pop();
		std::cout << mstack.top() << std::endl;
		std::cout << "mstack end = " << *(mstack.end()) << std::endl;

		MutantStack<int>::iterator	it = mstack.begin();
		MutantStack<int>::iterator	ite = mstack.end();

		std::cout << *(++it) << std::endl;
		std::cout << *(++ite) << std::endl;
	}
	return (0);
}