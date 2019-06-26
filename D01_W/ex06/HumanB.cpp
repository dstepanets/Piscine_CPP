/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 23:04:54 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 23:04:57 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void		HumanB::setWeapon(Weapon& w)
{
	this->_weapon = &w;
}

void		HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his "
			<< this->_weapon->getType() << std::endl;
}
