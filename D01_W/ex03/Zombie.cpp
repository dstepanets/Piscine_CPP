/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:58:55 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 16:58:56 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "* Zombie arised from dead!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << _name <<" (" << _type << ") was destroyed!" << std::endl;
}

void			Zombie::setName(std::string name)
{
	this->_name = name;
}
void			Zombie::setType(std::string type)
{
	this->_type = type;
}

std::string		Zombie::getName(void)
{
	return this->_name;
}

std::string		Zombie::getType(void)
{
	return this->_type;
}

void			Zombie::announce(void)
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}
