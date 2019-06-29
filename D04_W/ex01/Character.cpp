/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:34:03 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 14:34:06 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

/*==============================CONSTRUCTORS=================================*/

Character::Character(void) : _name("Character"), _ap(40), _weapon(NULL)
{}

Character::Character(std::string const &name) : _name(name), _ap(40), _weapon(NULL)
{}

Character::Character(Character const &src)
{
	this->_name = src._name;
	*this = src;
}

Character::~Character(void) {}

/*================================OPERATORS==================================*/

Character &				Character::operator = (Character const	&rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

std::ostream &			operator<<(std::ostream &o, Character const &i)
{
	o << WHITE << i.getName() << " has " << i.getAp() << " AP and ";
	i.getWeapon() ? o << "wields a " << i.getWeapon()->getName() : (o << "is unarmed");
	o << DEF << std::endl;
	return (o);
}

/*==============================GETTERS-SETTERS==============================*/

std::string	const &		Character::getName(void) const { return (this->_name); }
int						Character::getAp(void) const { return (this->_ap); }
AWeapon	const *			Character::getWeapon(void) const { return (this->_weapon); }

/*===========================FUNCTIONS=======================================*/


void				Character::recoverAP(void)
{
	_ap = (_ap < 30) ? (_ap + 10) : 40;
}

void				Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void				Character::attack(Enemy *enemy)
{
	if (_weapon)
	{
		if (_ap > _weapon->getAPCost())
		{
			std::cout << YELLOW << _name<< " attacks " << enemy->getType() 
					<< " with a " << _weapon->getName() << DEF << std::endl;
			_weapon->attack();

			if (enemy)
			{
				enemy->takeDamage(_weapon->getDamage());
				if (enemy->getHP() <= 0)
					delete enemy;
			}
			_ap -= _weapon->getAPCost();
		}
	}
}
