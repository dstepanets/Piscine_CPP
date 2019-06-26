/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 15:11:26 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 15:11:27 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color,
				size_t age, std::string allocation) : 
				_name(name), _color(color), _age(age), _allocation(allocation)
{
	std::cout << _color << " pony " << _name
				<< " came to the " << _allocation << "."<< std::endl;
	std::cout << _name << " is " << _age << " years old.\n" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << std::endl << _color << " " << _name
				<< " was kicked of the " << _allocation  << "." << std::endl;
}

std::string		Pony::getName(void)
{
	return (this->_name);
}
std::string		Pony::getColor(void)
{
	return (this->_color);
}
size_t			Pony::getAge(void)
{
	return (this->_age);
}
std::string		Pony::getAllocation(void)
{
	return (this->_allocation);
}

void		Pony::ihoho(size_t num)
{
	while (num--)
		std::cout << "I-ho-ho! ";
	std::cout << std::endl;
}