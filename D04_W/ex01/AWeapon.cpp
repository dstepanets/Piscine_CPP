/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:33:49 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 14:33:50 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*==============================CONSTRUCTORS=================================*/

AWeapon::AWeapon(void) : _name("AWeapon"), _damage(0), _apcost(0)
{
	PUTLN("AWeapon default constructor called");
}

AWeapon::AWeapon(std::string const & name, int damage, int apcost) : 
								_name(name), _damage(damage), _apcost(apcost)
{}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
}

AWeapon::~AWeapon(void) {}

/*================================OPERATORS==================================*/

AWeapon & 			AWeapon::operator = (AWeapon const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_damage = rhs._damage;
		this->_apcost = rhs._apcost;
	}
	return (*this);
}

/*==============================GETTERS-SETTERS==============================*/

std::string	const	&AWeapon::getName(void) const 
{
	return (this->_name);
}

int					AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int					AWeapon::getDamage(void) const
{
	return (this->_damage);
}
