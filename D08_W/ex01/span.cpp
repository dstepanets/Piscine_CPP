/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 20:19:32 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/05 20:19:33 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <cmath>
#include <limits>

/*==============================CONSTRUCTORS=================================*/

Span::Span(void) {}
Span::Span(unsigned int n) : _n(n) { _v.reserve(n); }
Span::Span(Span const &src) { *this = src; }
Span::~Span(void) {}

/*================================OPERATORS==================================*/

Span & 			Span::operator = (Span const &rhs)
{
	if (this != &rhs)
	{
		this->_n = rhs._n;
		this->_v = rhs._v;
	}
	return (*this);
}

/*==============================GETTERS-SETTERS==============================*/

// int					Span::getVar(void) const
// {
// 	return (this->_var);
// }

// void				Span::setVar(int var)
// {
// 	this->_var = var;
// }

/*===========================FUNCTIONS=======================================*/

void			Span::addNumber(int num)
{
	if (_v.size() >= _n)
		throw Span::FullExc();
	else
		_v.push_back(num);
}

void			Span::addRange(int x, int y)
{
	if (x > y)
	{
		int z = x;
		x = y;
		y = z;
	}
	while (x <= y)
	{
		addNumber(x);
		x++;
	}
}

int				Span::shortestSpan(void)
{
	if (_v.size() < 2)
		throw Span::EmptyExc();
	
	std::vector<int>	cpy = _v;
	std::sort(cpy.begin(), cpy.end());

	int	span = INT_MAX;
	for (std::vector<int>::iterator it = cpy.begin(); it != cpy.end(); ++it)
	{
		if (span > (abs(*it - *(it - 1))))
			span = (abs(*it - *(it - 1)));
	}
	return (span);
	
}

int				Span::longestSpan(void)
{
	if (_v.size() < 2)
		throw Span::EmptyExc();
	
	int		min, max;

	min = *std::min_element(_v.begin(), _v.end());
	max = *std::max_element(_v.begin(), _v.end());	

	return (abs(max - min));
}


/*===========================EXCEPTIONS======================================*/

Span::FullExc::FullExc(void) {}
Span::FullExc::FullExc(FullExc const &src) {*this = src;}
Span::FullExc::~FullExc(void) throw() {}
Span::FullExc &Span::FullExc::operator = (Span::FullExc const &rhs) 
	{std::exception::operator=(rhs); return *this;}
const char *		Span::FullExc::what(void) const throw()
	{return ("ERROR. Array is full");}

Span::EmptyExc::EmptyExc(void) {}
Span::EmptyExc::EmptyExc(EmptyExc const &src) {*this = src;}
Span::EmptyExc::~EmptyExc(void) throw() {}
Span::EmptyExc &Span::EmptyExc::operator = (Span::EmptyExc const &rhs) 
	{std::exception::operator=(rhs); return *this;}
const char *		Span::EmptyExc::what(void) const throw()
	{return ("ERROR. Array is empty or has only 1 element");}


