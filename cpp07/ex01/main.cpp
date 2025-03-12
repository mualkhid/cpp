#include "iter.hpp"

int main() {
	char arr[] = {'d', 'c', 'a', 'd'};
	iter(arr, 4, printarray<char>);
}
