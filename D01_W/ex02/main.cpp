/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:59:22 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 16:59:23 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

#include <iostream>
#include <cmath>
#include <ctime>
#include <unistd.h>

std::string static 		generateName(void)
{
	int	len;

	len = rand() % 16;
	std::string name = "";
	name += rand() % 26 + 65;
	for (int i = 1; i < len; i++)
		name += rand() % 26 + 97;
	return (name);
}

void		randomChump(void)
{
	Zombie zomb = Zombie(generateName(), "Random");
	zomb.announce();
}

int			main(void)
{
		std::cout << "\t[initialize ZombieEvent]:" << std::endl;
	ZombieEvent		zparty("not drinking");

	Zombie *vas = zparty.newZombie("Vasylko");
		std::cout << "\t[set a new zombie's type]:" << std::endl;
	zparty.setZombieType("drankard");
	Zombie *ost = zparty.newZombie("Ostap");

		std::cout << "\n\t[generate 5 random zombies on a stack]:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		srand(time(NULL) * i);
		randomChump();
	}

			std::cout << "\n\t[destroy those 2 event zombies]:" << std::endl;
	delete vas;
	delete ost;

		std::cout << "\t[EXIT]:" << std::endl;
	return (0);
}
