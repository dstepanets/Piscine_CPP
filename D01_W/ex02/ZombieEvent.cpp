/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:59:17 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 16:59:18 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type) : _type(type)
{
	std::cout << "Zombie Event started!" << std::endl;
}

ZombieEvent::~ZombieEvent() 
{
	std::cout << "Zombie Event ended!" << std::endl;
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	std::cout << "\t[ZombieEvent creates a zombie on the heap]:" << std::endl;
	Zombie		*z = new Zombie(name, this->_type);
	return (z);
}
