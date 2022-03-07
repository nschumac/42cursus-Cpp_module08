#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <stack>

template<class T>
class MutantStack : public std::stack<T>
{
public:

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;


	iterator				begin() {return this->c.begin();};
	iterator				end(){return this->c.end();};
	const_iterator			begin() const {return this->c.begin();};
	const_iterator			end() const {return this->c.end();};
	reverse_iterator		rbegin(){return this->c.end();};
	reverse_iterator		rend(){return this->c.begin();};
	const_reverse_iterator	rbegin() const {return this->c.end();};
	const_reverse_iterator	rend() const{return this->c.begin();};

	MutantStack() : std::stack<T>(){};
	MutantStack(MutantStack<T> const &in) : std::stack<T>()
	{
		*this = in;
	}
	MutantStack<T> &operator=(MutantStack<T> const & in)
	{
		std::stack<T>::operator=(in);
		return (*this);
	}
	~MutantStack(){};
};

#endif