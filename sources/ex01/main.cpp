#include "span.hpp"
#include <iostream>
#include <random>
#include <time.h>

int main()
{
	Span sp = Span(10001);
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10000; i++)
	{
		sp.addNumber(rand());
	}
	std::cout << sp.shortestSpan() << std::endl; std::cout << sp.longestSpan() << std::endl; 
}