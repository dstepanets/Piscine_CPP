/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:22:43 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/28 14:22:47 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

/*======================CONSTRUCTORS=================================*/

FragTrap::FragTrap(void) : _var(0)
{
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(int const var) : _var(var)
{
	std::cout << "Parametrized constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*======================GETTERS-SETTERS============================*/

int					FragTrap::getVar(void) const
{
	return (this->_var);
}

void				FragTrap::setVar(int var)
{
	this->_var = var;
}

/*======================OPERATORS=================================*/

FragTrap & 			FragTrap::operator = (FragTrap const &rhs)
{
	if (this != &rhs)
		this->_var = rhs._var;
	return (*this);
}

std::ostream &		operator << ( std::ostream & o, FragTrap const &i )
{
	o << i.getVar();
	return (o);
}

