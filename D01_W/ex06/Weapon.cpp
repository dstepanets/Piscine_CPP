/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 23:04:06 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 23:04:07 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

std::string const&		Weapon::getType(void) const
{
	return this->_type;
}

void 					Weapon::setType(std::string type)
{
	this->_type = type;
}
