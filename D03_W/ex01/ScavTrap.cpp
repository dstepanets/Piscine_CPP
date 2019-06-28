/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 21:30:28 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/28 21:30:30 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

unsigned int const		ScavTrap::_maxHp = 100;
unsigned int const		ScavTrap::_maxEnergy = 50;

/*======================CONSTRUCTORS=========================================*/

ScavTrap::ScavTrap(void) :
					_name("Default"), _level(1), _hp(100), _armor(3), _energy(50),
					_meleeDmg(20), _rangedDmg(15)
{
	std::cout << "<" << _name <<">: Recompiling my combat code!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
					_name(name), _level(1), _hp(100), _armor(3), _energy(50),
					_meleeDmg(20), _rangedDmg(15)
{
	std::cout << "<" << _name <<">: I am a tornado of death and bullets!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs)
{
	std::cout << "<" << _name <<">: Hehehehe, mwaa ha ha ha, MWAA HA HA HA!" << std::endl;
	*this = rhs;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "<" << _name <<">: Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}

/*======================OPERATORS============================================*/

ScavTrap & 			ScavTrap::operator = (ScavTrap const &rhs)
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

std::ostream &		operator << ( std::ostream & o, ScavTrap const &i)
{
	o << "[" << i.getName() << "] Level: " << i.getLevel() << " | "
		<< "HP: " << i.getHp() << " | " << "Energy: " << i.getEnergy() << std::endl;
	return (o);
}

/*=======================GETTERS=============================================*/

std::string			ScavTrap::getName(void) const
{
	return (this->_name);
}

unsigned int		ScavTrap::getLevel(void) const
{
	return (this->_level);
}

unsigned int		ScavTrap::getHp(void) const
{
	return (this->_hp);
}

unsigned int		ScavTrap::getEnergy(void) const
{
	return (this->_energy);
}

unsigned int		ScavTrap::getMeleeDmg(void) const
{
	return (this->_meleeDmg);
}

unsigned int		ScavTrap::getRangedDmg(void) const
{
	return (this->_rangedDmg);
}

/*=======================ACTIONS=============================================*/

void				ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << CYAN <<"FR4G-TP <" << _name <<"> attacks "  << target
			<< " with a hand gun." << std::endl << "\tDAMAGE: " << _rangedDmg
			<< DEF << std::endl;
}

void				ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << BLUE <<"FR4G-TP <" << _name <<"> attacks "  << target
		<< " with a bare manipulators." << std::endl << "DAMAGE: " << _meleeDmg
		<< DEF << std::endl;
}

void				ScavTrap::takeDamage(unsigned int amount)
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

void				ScavTrap::beRepaired(unsigned int amount)
{
	if (_hp + amount > _maxHp)
		_hp = _maxHp;
	else
		_hp += amount;
	std::cout << GREEN << "FR4G-TP <" << _name <<"> is repaired "  << amount
		<< " of damage!" << std::endl << "\tHe now has "
		<< _hp << " HP." << DEF << std::endl;
}

void				ScavTrap::challengeNewcomer(std::string const & target) const
{
	std::string challenges[5] =
	{
		"~Dance battle! Or, you know... regular battle~",
		"~Let's see, how many TIG's you're able to buy!~",
		"~Can you make an origami Putin? And clean your ass with it, please?~",
		"~How about singing Ukrainian anthem aloud in the cluster?~",
		"~Bet you will not break this program? (Oh no, please don't!)~"
	};

	static	size_t	mod = 6;
	mod = 100 % mod * 11;
	srand(time(NULL) * mod * mod);
	size_t	i = rand() % 5;

	std::cout << MAGENTA << "<" << _name << ">: " << "Hey, " 
		<< target << "! " << challenges[i] << DEF << std::endl;

}

