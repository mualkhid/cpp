#include "MutantStack.hpp"

// int main()
// {
// 	MutantStack <int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	mstack.push(0);
// 	MutantStack <int>::iterator it = mstack.begin();
// 	MutantStack <int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// }



template <typename T>
void testContainer(MutantStack<T> &container)
{
    container.push(5);
    container.push(17);
    std::cout << container.top() << std::endl; // Use top() for MutantStack
    container.pop();
    std::cout << container.size() << std::endl;
    container.push(3);
    container.push(5);
    container.push(737);
    container.push(0);

    typename MutantStack<T>::iterator it = container.begin();
    typename MutantStack<T>::iterator ite = container.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
}

template <typename Container>
void testContainer(Container &container)
{
    container.push_back(5);
    container.push_back(17);
    std::cout << container.back() << std::endl; // Use back() for std::list
    container.pop_back();
    std::cout << container.size() << std::endl;
    container.push_back(3);
    container.push_back(5);
    container.push_back(737);
    container.push_back(0);

    typename Container::iterator it = container.begin();
    typename Container::iterator ite = container.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
}

int main()
{
    std::cout << "Testing MutantStack:" << std::endl;
    MutantStack<int> mstack;
    testContainer(mstack);

    std::cout << "\nTesting std::list:" << std::endl;
    std::list<int> lst;
    testContainer(lst);

    return 0;
}