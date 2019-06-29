/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cop.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:06:09 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 14:06:10 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cop.hpp"
#include <iostream>

/*======================CONSTRUCTORS=================================*/

Cop::Cop(void) : Victim("Cop")
{
	std::cout << "Hands in the air! This is police!" << std::endl;
}

Cop::Cop(std::string name) : Victim(name)
{
	std::cout << "Hands in the air! This is police!"  << std::endl;
}

Cop::Cop(Cop const &src) : Victim (src)
{
	std::cout << "Hands in the air! This is police!"  << std::endl;
	*this = src;
}

Cop::~Cop(void)
{
	std::cout << "Oh, this is dinner time. I'll get some doughnuts!" << std::endl;
}

/*===========================FUNCTIONS=======================================*/

void				Cop::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a little piglet !" << std::endl;
}

