/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 12:47:22 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 12:47:23 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

/*======================CONSTRUCTORS=================================*/

Victim::Victim(void) : _name("Victim")
{
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(Victim const &src)
{
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
	*this = src;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

/*======================GETTERS-SETTERS============================*/

std::string			Victim::getName(void) const
{
	return (this->_name);
}

/*======================OPERATORS=================================*/

Victim & 			Victim::operator = (Victim const &rhs)
{
	if (this != &rhs)
		this->_name = rhs.getName();
	return (*this);
}

std::ostream &		operator << (std::ostream & o, Victim const &i)
{
	o << "I'm " << i.getName() << " and I like otters !\n";
	return (o);
}

/*===========================FUNCTIONS=======================================*/

void				Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}
