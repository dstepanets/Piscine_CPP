/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 22:34:43 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/28 22:34:44 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*======================CONSTRUCTORS=========================================*/

ClapTrap::ClapTrap(void) :
					_name("ClapTrap"), _level(1), _hp(100), _maxHp(100), _armor(5),
					_energy(100), _maxEnergy(100), _meleeDmg(30), _rangedDmg(20)
{
	std::cout << "<" << _name <<">: Default construction." << std::endl;
}

ClapTrap::ClapTrap(std::string name, uint32_t level, uint32_t hp, uint32_t maxHp, uint32_t armor,
					uint32_t energy, uint32_t maxEnergy, uint32_t meleeDmg, uint32_t rangedDmg) :
					_name(name), _level(level), _hp(hp), _maxHp(maxHp), _armor(armor),
					_energy(energy), _maxEnergy(maxEnergy), _meleeDmg(meleeDmg), _rangedDmg(rangedDmg)
{
	std::cout << "<" << _name <<">: Default parametrized construction." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << "<" << _name <<">: Copy construction. " << std::endl;
	*this = rhs;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "<" << _name <<">: Default destruction." << std::endl;
}

/*======================OPERATORS============================================*/

ClapTrap & 			ClapTrap::operator = (ClapTrap const &rhs)
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

std::ostream &		operator << ( std::ostream & o, ClapTrap const &i)
{
	o << "[" << i.getName() << "] Level: " << i.getLevel() << " | "
		<< "HP: " << i.getHp() << " | " << "Energy: " << i.getEnergy() << std::endl;
	return (o);
}

/*=======================GETTERS=============================================*/

std::string			ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int		ClapTrap::getLevel(void) const
{
	return (this->_level);
}

unsigned int		ClapTrap::getHp(void) const
{
	return (this->_hp);
}

unsigned int		ClapTrap::getEnergy(void) const
{
	return (this->_energy);
}

unsigned int		ClapTrap::getMeleeDmg(void) const
{
	return (this->_meleeDmg);
}

unsigned int		ClapTrap::getRangedDmg(void) const
{
	return (this->_rangedDmg);
}

/*=======================ACTIONS=============================================*/

void				ClapTrap::takeDamage(unsigned int amount)
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

void				ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp + amount > _maxHp)
		_hp = _maxHp;
	else
		_hp += amount;
	std::cout << GREEN << "FR4G-TP <" << _name <<"> is repaired "  << amount
		<< " of damage!" << std::endl << "\tHe now has "
		<< _hp << " HP." << DEF << std::endl;
}
