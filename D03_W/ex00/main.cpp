/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:23:07 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/28 14:23:09 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int			main(void)
{
	FragTrap sheva ("Taras Shevchenko");
	FragTrap frank ("Ivan Franko");

	while (sheva.getHp() > 0 && frank.getHp() > 0)
	{
		sheva.rangedAttack("Ivan Franko");
		frank.takeDamage(sheva.getRangedDmg());
		
		frank.meleeAttack("Taras Shevchenko");
		sheva.takeDamage(frank.getMeleeDmg());
	}

	std::cout << std::endl << WHITE << sheva << DEF;
	std::cout << WHITE << frank << DEF << std::endl;

	std::cout << "<" << frank.getName() << ">: Taras, I'm sorry! I'll fix you." << std::endl;

	sheva.beRepaired(150);

	std::cout << "<" << sheva.getName() << ">: Ivan, take this!" << std::endl;

	unsigned int	damage;
	while (sheva.getEnergy() > 0 && frank.getHp() > 0)
	{
		damage  = sheva.vaulthunter_dot_exe("Ivan Franko");
		frank.takeDamage(damage);
	}
	
	std::cout << std::endl << WHITE << sheva << DEF;
	std::cout << WHITE << frank << DEF << std::endl;

	return (0);
}
