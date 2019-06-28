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
#include "ClapTrap.hpp"
#include <iostream>

/*======================CONSTRUCTORS=========================================*/

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap", 1, 100, 100, 3, 50, 50, 20, 15)
{
	std::cout << "<" << _name <<">: Recompiling my combat code!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 1, 100, 100, 3, 50, 50, 20, 15)
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

void				ScavTrap::challengeNewcomer(std::string const & target)
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

	if (_energy < 25)
		_energy = 0;
	else 
		_energy -= 25;
	std::cout << YELLOW <<"FR4G-TP <" << _name <<"> has "  << _energy
		<< " energy left." << DEF << std::endl;
	if (_energy == 0)
		std::cout  << "<" << _name <<">:  I'm out of energy :(" << std::endl;

}
