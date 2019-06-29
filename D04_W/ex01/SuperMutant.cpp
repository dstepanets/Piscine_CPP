/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:35:31 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 14:35:32 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "SuperMutant.hpp"

/*==============================CONSTRUCTORS=================================*/

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	PUTLN("Gaaah. Me want smash heads !");
}

SuperMutant::SuperMutant(SuperMutant const &src)
{
	*this = src;
	PUTLN("Gaaah. Me want smash heads !");
}

SuperMutant::~SuperMutant(void)
{
	PUTLN("Aaargh ...");
}

/*===========================FUNCTIONS=======================================*/

void					SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (this->_hp > 0 && damage > 0)
		this->_hp -= damage;
	if (_hp < 0)
		_hp = 0;
}
