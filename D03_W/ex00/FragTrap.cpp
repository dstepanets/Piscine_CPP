/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:22:43 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/28 14:22:47 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

unsigned int const		FragTrap::_maxHp = 100;
unsigned int const		FragTrap::_maxEnergy = 100;

/*======================CONSTRUCTORS=========================================*/

FragTrap::FragTrap(void) :
					_name("Default"), _level(1), _hp(100), _energy(100),
					_meleeDmg(30), _rangedDmg(20), _armor(5)
{
	std::cout << "<" << _name <<">: Look out everybody! Things are about to get awesome!" << std::endl;
}

FragTrap::FragTrap(std::string name) :
					_name(name), _level(1), _hp(100), _energy(100),
					_meleeDmg(30), _rangedDmg(20), _armor(5)
{
	std::cout << "<" << _name <<">: Let's get this party started!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs)
{
	std::cout << "<" << _name <<">: This time it'll be awesome, I promise!" << std::endl;
	*this = rhs;
}

FragTrap::~FragTrap(void)
{
	std::cout << "<" << _name <<">: I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

/*======================OPERATORS============================================*/

FragTrap & 			FragTrap::operator = (FragTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_level = rhs._level;
		this->_hp = rhs._hp;
		this->_energy = rhs._energy;

	}
	return (*this);
}

std::ostream &		operator << ( std::ostream & o, FragTrap const &i)
{
	o << "[" << i.getName() << "] Level: " << i.getLevel() << " | "
		<< "HP: " << i.getHp() << " | " << "Energy: " << i.getEnergy() << std::endl;
	return (o);
}

/*=======================GETTERS=============================================*/

std::string			FragTrap::getName(void) const
{
	return (this->_name);
}

unsigned int		FragTrap::getLevel(void) const
{
	return (this->_level);
}

unsigned int		FragTrap::getHp(void) const
{
	return (this->_hp);
}

unsigned int		FragTrap::getEnergy(void) const
{
	return (this->_energy);
}

/*=======================ACTIONS=============================================*/

void				FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name <<"> CYANattacks "  << target
			<< " with a blaster, causing " << _rangedDmg << " points of damage! DEF" << std::endl;
}

void				FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << _name <<"> attacks "  << target
		<< " with a hammer, causing " << _meleeDmg << " points of damage!" << std::endl;
}

void				FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP <" << _name <<"> takes "  << amount
		<< " of damage!" << std::endl << "\tIt now has " << _hp << "left" << std::endl;
}

void				FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP <" << _name <<"> is repaired "  << amount
		<< " of damage!" << std::endl << "\tIt now has " << _hp << "left" << std::endl;
}

void				FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	
}

