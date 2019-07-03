/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 19:46:43 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/03 19:46:44 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/*==============================CONSTRUCTORS=================================*/

Convert::Convert(void) : _str("0") {}
Convert::Convert(std::string str) : _str(str) {}
Convert::Convert(Convert const &src) { _str = src._str; *this = src; }
Convert::~Convert(void) {}

/*================================OPERATORS==================================*/

Convert & 			Convert::operator = (Convert const &rhs)
{
	if (this != &rhs)
		this->_str = rhs._str;
	return (*this);
}

Convert::operator	char(void)		const
{
	int			integer;
	char		c;

	try
	{
		integer = std::stoi(_str);
	}
	catch(const std::exception& e)
	{
		throw Convert::ImpossibleExc();
	}
	if (integer > CHAR_MAX || integer < CHAR_MIN)
		throw Convert::ImpossibleExc();
	if (!std::isprint(integer))
		throw NonDisplayableExc();
	c = static_cast<char>(integer);
		return (c);
}

Convert::operator	int(void)		const
{
	int			integer;

	try
	{
		integer = std::stoi(_str);
		return (integer);
	}
	catch (const std::exception &e)
	{
		throw Convert::ImpossibleExc();
	}
}

Convert::operator	float(void)		const
{
	float		f;

	try
	{
		f = std::stof(_str);
		return (f);
	}
	catch (const std::exception &e)
	{
		throw Convert::ImpossibleExc();
	}
}

Convert::operator	double(void)	const
{
	double		d;

	try
	{
		d = std::stod(_str);
		return (d);
	}
	catch (const std::exception &e)
	{
		throw Convert::ImpossibleExc();
	}
}

/*===========================EXCEPTIONS=======================================*/

Convert::ImpossibleExc::ImpossibleExc(void) {}
Convert::ImpossibleExc::ImpossibleExc(ImpossibleExc const &src) {*this = src;}
Convert::ImpossibleExc::~ImpossibleExc(void) throw() {}
Convert::ImpossibleExc &Convert::ImpossibleExc::operator = (Convert::ImpossibleExc const &rhs)
{std::exception::operator=(rhs); return *this;}
const char *		Convert::ImpossibleExc::what(void) const throw()
{return ("impossible");}

Convert::NonDisplayableExc::NonDisplayableExc(void) {}
Convert::NonDisplayableExc::NonDisplayableExc(NonDisplayableExc const &src) {*this = src;}
Convert::NonDisplayableExc::~NonDisplayableExc(void) throw() {}
Convert::NonDisplayableExc &Convert::NonDisplayableExc::operator = (Convert::NonDisplayableExc const &rhs)
{std::exception::operator=(rhs); return *this;}
const char *		Convert::NonDisplayableExc::what(void) const throw()
{return ("Non displayable");}
