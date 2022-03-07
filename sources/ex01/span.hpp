#ifndef SPAN_H
# define SPAN_H

#include <exception>
#include <vector>
class Span
{
private:
	unsigned int		_N;
	std::vector<int>	_arr;
	Span();
	
public:
	Span(unsigned int N) : _N(N){};
	Span &operator=(Span const & in);
	struct AddNumber : public std::exception
	{
	const char * what () const throw ()
	{
		return "Numbers already Added!";
	}
	};
	struct NoSpan : public std::exception
	{
	const char * what () const throw ()
	{
		return "No Span!";
	}
	};
	Span(Span const &in);
	template<typename T>
	void	addNumber(typename T::iterator begin, typename T::iterator end)
	{
		typename T::iterator itr = begin;
		while (itr != end)
		{
			addNumber(reinterpret_cast<int>(*itr));
			itr++;
		}
	}
	void	addNumber(int num);

	int		longestSpan();
	int		shortestSpan();

	~Span();
};

#endif