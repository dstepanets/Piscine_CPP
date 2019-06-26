/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 23:04:28 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 23:04:30 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& w) :
						_weapon(w), _name(name)
{
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void		HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his "
				<< this->_weapon.getType() << std::endl;
}
