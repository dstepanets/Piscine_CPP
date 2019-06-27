/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:41:36 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/27 14:41:37 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
# include <cmath>

//CONSTRUCTORS-DESTRUCTORS

Fixed::Fixed(void)	: _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const ival)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(ival << this->_fractBits);
}

Fixed::Fixed(float const fval)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(roundf(fval * (1 << this->_fractBits)));
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

//OPERATORS

Fixed & 			Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream &		operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return (o);
}

//GETTERS-SETTERS

int					Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void				Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

//MEMBER METHODS

float				Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / (1 << this->_fractBits));
}

int					Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->_fractBits);
}

const int			Fixed::_fractBits = 8;

