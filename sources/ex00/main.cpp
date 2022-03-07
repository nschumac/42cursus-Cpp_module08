#include "easyfind.hpp"
#include <vector>
#include <iostream>


int main()
{
	std::vector<int> test;
	for (int i = 0; i < 10; i++)
		test.push_back(10 - i);
	try
	{
		std::vector<int>::iterator itr =  easyfind(test, 100);
		std::cout << *itr << *(++itr) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}