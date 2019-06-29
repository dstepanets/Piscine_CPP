/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 12:47:07 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 12:47:08 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

/*==============================CONSTRUCTORS=================================*/

Sorcerer::Sorcerer(void) : _name("Ro/b/ert"), _title("the Magnificent")
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
	*this = src;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title
		<< ", is dead. Consequences will never be the same !" << std::endl;
}

/*============================OPERATORS======================================*/

Sorcerer & 			Sorcerer::operator = (Sorcerer const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return (*this);
}

std::ostream &		operator << ( std::ostream & o, Sorcerer const &i )
{
	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies !\n";
	return (o);
}


/*==============================GETTERS-SETTERS==============================*/

std::string				Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string				Sorcerer::getTitle(void) const
{
	return (this->_title);
}

/*===========================FUNCTIONS=======================================*/

void					Sorcerer::polymorph(Victim const &v)
{
	v.getPolymorphed();
}
