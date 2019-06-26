/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 20:41:06 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 20:41:08 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>
#include <cmath>
#include <ctime>

ZombieHorde::ZombieHorde(int N, std::string type) :
							_zombies_num(N), _zombies_type(type)
{
	std::cout << "\t[ZombieHorde is coming]:" << std::endl;

	this->_horde = new Zombie[_zombies_num];
	for (int i = 0; i < _zombies_num; i++)
	{
		srand(time(NULL) * i);
		this->_horde[i].setName(generateName());
		this->_horde[i].setType(type);
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_horde;
	std::cout << "\t[ZombieHorde is gone]:" << std::endl;
}

std::string 	ZombieHorde::generateName(void)
{
	int	len;

	len = rand() % 16;
	std::string name = "";
	name += rand() % 26 + 65;
	for (int i = 1; i < len; i++)
		name += rand() % 26 + 97;
	return (name);
}

Zombie*			ZombieHorde::newZombie(void)
{
	std::cout << "\t[ZombieHorde creates a zombie on the heap]:" << std::endl;
	Zombie		*z = new Zombie();
	return (z);
}

void			ZombieHorde::announce(void)
{
	for (int i = 0; i < _zombies_num; i++)
	{
		this->_horde[i].announce();
	}
}
