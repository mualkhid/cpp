#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <ctime> 
#include <exception>

class Span
{
	private:
		unsigned int _maxSize;
        std::vector<int> _numbers;

	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span &copy);
		Span &operator=(const Span &other);

		void addNumber(int number);

        int shortestSpan() const;
        int longestSpan() const;

        class SpanFullException : public std::exception {
            public:
                const char *what() const throw();
        };
        class NotEnoughNumbersException : public std::exception {
            public:
                const char *what() const throw();
        };

        template <typename T>
        void addNumbers(T begin, T end);

        const std::vector<int> &getNumbers() const;
};

template <typename T>
void Span::addNumbers(T begin, T end)
{
    if (std::distance(begin, end) + _numbers.size() > _maxSize)
        throw SpanFullException();
    _numbers.insert(_numbers.end(), begin, end);
}


#endif
