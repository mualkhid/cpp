#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <algorithm>
#include <ctime>

class PmergeMe 
{
    private:

        template <typename Container>
        void mergeInsertSort(Container& container);

        template <typename Container>
        void measureSortTime(const Container& input, const std::string& containerName);

    public:

        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& other);

        void sortAndMeasure(const std::vector<int>& input);

};

template <typename Container>
void PmergeMe::mergeInsertSort(Container& container) 
{
    if (container.size() <= 1) 
        return;

    typename Container::iterator mid = container.begin(); // create iterator to the beginning of the container
    std::advance(mid, container.size() / 2); // using advance to move the iterator to the middle of the container

    Container left(container.begin(), mid); // create a new container from the beginning to the middle
    Container right(mid, container.end()); // create a new container from the middle to the end

    mergeInsertSort(left);
    mergeInsertSort(right);

    container.clear();
    typename Container::iterator it_left = left.begin();
    typename Container::iterator it_right = right.begin();

    while (it_left != left.end() && it_right != right.end()) 
    {
        if (*it_left < *it_right) 
            container.push_back(*it_left++);

        else
            container.push_back(*it_right++);
    }

    container.insert(container.end(), it_left, left.end()); // insert the remaining elements from the left container if any
    container.insert(container.end(), it_right, right.end()); // insert the remaining elements from the right container if any
}

template <typename Container>
void PmergeMe::measureSortTime(const Container& input, const std::string& containerName) 
{
    Container copy = input;
    std::clock_t start = std::clock();
    mergeInsertSort(copy);
    std::clock_t end = std::clock();
    double duration = 1000000.0 * (end - start) / CLOCKS_PER_SEC; // calculate the duration in microseconds

    std::cout << "Time to process a range of " << input.size() << " elements with " << containerName << ": " << duration << " microseconds" << std::endl;
}

#endif