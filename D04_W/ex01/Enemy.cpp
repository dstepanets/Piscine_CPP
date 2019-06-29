/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:34:18 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 14:34:19 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.hpp"

/*==============================CONSTRUCTORS=================================*/

Enemy::Enemy(void) : _hp(0), _type("Enemy")
{
	PUTLN("Enemy default constructor called");
}

Enemy::Enemy(int hp, std::string const &type): _hp(hp), _type(type) {}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
}

Enemy::~Enemy(void) {}

/*================================OPERATORS==================================*/

Enemy &				Enemy::operator = (Enemy const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_hp = rhs._hp;
	}
	return (*this);
}

/*==============================GETTERS-SETTERS==============================*/

std::string	const &		Enemy::getType(void) const
{
	return (this->_type);
}

int						Enemy::getHP(void) const 
{
	return (this->_hp);
}

/*===========================FUNCTIONS=======================================*/

void				Enemy::takeDamage(int damage)
{
	if (this->_hp > 0)
		this->_hp -= damage;
	if (_hp < 0)
		_hp = 0;
}
