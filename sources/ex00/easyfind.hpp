#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <string>

struct NotFound : public std::exception
{
  const char * what () const throw ()
  {
    return "Not Found";
  }
};

template<typename T>
typename T::iterator	easyfind(T var, int i)
{
	typename T::iterator itr = std::find(var.begin(), var.end(), i);
	if (itr == var.end())
		throw NotFound();
	return itr;
}

#endif