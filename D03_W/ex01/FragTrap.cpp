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
					_name("Default"), _level(1), _hp(100), _armor(5), _energy(100),
					_meleeDmg(30), _rangedDmg(20)
{
	std::cout << "<" << _name <<">: Look out everybody! Things are about to get awesome!" << std::endl;
}

FragTrap::FragTrap(std::string name) :
					_name(name), _level(1), _hp(100), _armor(5), _energy(100),
					_meleeDmg(30), _rangedDmg(20)
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

unsigned int		FragTrap::getMeleeDmg(void) const
{
	return (this->_meleeDmg);
}

unsigned int		FragTrap::getRangedDmg(void) const
{
	return (this->_rangedDmg);
}

/*=======================ACTIONS=============================================*/

void				FragTrap::rangedAttack(std::string const &target)
{
	std::cout << CYAN <<"FR4G-TP <" << _name <<"> attacks "  << target
			<< " with a blaster." << std::endl << "\tCauses " << _rangedDmg
			<< " points of damage!" << DEF << std::endl;
}

void				FragTrap::meleeAttack(std::string const &target)
{
	std::cout << BLUE <<"FR4G-TP <" << _name <<"> attacks "  << target
		<< " with a hammer." << std::endl << "\tCauses " << _meleeDmg
		<< " points of damage!" << DEF << std::endl;
}

void				FragTrap::takeDamage(unsigned int amount)
{
	if ((_hp + _armor) <= amount)
		_hp = 0;
	else
		_hp -= (amount - _armor);
	std::cout << RED << "FR4G-TP <" << _name <<"> takes ("  << amount << " - " << _armor
		<< ") of damage!" << std::endl << "\tHe now has "
		<< _hp << " HP left." << DEF << std::endl;
	if (_hp == 0)
		std::cout << "<" << _name <<">: Oh my! This is the end :(" << std::endl;
}

void				FragTrap::beRepaired(unsigned int amount)
{
	if (_hp + amount > _maxHp)
		_hp = _maxHp;
	else
		_hp += amount;
	std::cout << GREEN << "FR4G-TP <" << _name <<"> is repaired "  << amount
		<< " of damage!" << std::endl << "\tHe now has "
		<< _hp << " HP." << DEF << std::endl;
}

unsigned int			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[5] =
	{
		"~Pizza Slice~",
		"~Huge Black Dildo~",
		"~Full Collection of Lenin's Works in 100500 Volumes~",
		"~Hedgehog~",
		"~Segmentation Fault~"
	};
	unsigned int	damage[5] = {5, 10, 15, 20, 30};

	static	size_t	mod = 6;
	mod = 100 % mod * 11;
	srand(time(NULL) * mod * mod);
	size_t	i = rand() % 5;

	std::cout << MAGENTA <<"FR4G-TP <" << _name <<"> attacks "  << target
		<< " with " << attacks[i] << "." << std::endl
		<< "\tCauses " << damage[i] << " points of damage!" << DEF << std::endl;

	if (_energy < 25)
		_energy = 0;
	else 
		_energy -= 25;
	std::cout << YELLOW <<"FR4G-TP <" << _name <<"> has "  << _energy
		<< " energy left." << DEF << std::endl;
	if (_energy == 0)
		std::cout  << "<" << _name <<">:  I'm out of energy :(" << std::endl;

	return (damage[i]);
}

