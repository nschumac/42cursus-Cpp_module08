#include "span.hpp"

Span::Span() {

}

Span::Span(Span const & in) {
	*this = in;
}

Span &Span::operator=(Span const & in) {
	this->_N = in._N;
	this->_arr = in._arr;
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->_arr.size() == this->_N)
		throw Span::AddNumber();
	else
		this->_arr.push_back(num);
}

int		Span::longestSpan()
{
	if (this->_arr.size() <= 1)
		throw Span::NoSpan();
	std::sort(this->_arr.begin(), this->_arr.end());
	return (_arr[_arr.size() - 1] - _arr[0]);
}

int		Span::shortestSpan()
{
	if (this->_arr.size() <= 1)
		throw Span::NoSpan();
	std::sort(this->_arr.begin(), this->_arr.end());
	return (_arr[1] - _arr[0]);
}

Span::~Span() {

}