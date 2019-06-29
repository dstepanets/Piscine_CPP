/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 12:46:47 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 12:46:48 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include <iostream>

/*======================CONSTRUCTORS=================================*/

Peon::Peon(void) : Victim("Peon")
{
	std::cout << "Zog zog" << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog" << std::endl;
}

Peon::Peon(Peon const &src) : Victim (src)
{
	std::cout << "Zog zog" << std::endl;
	*this = src;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

/*===========================FUNCTIONS=======================================*/

void				Peon::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a pink pony !" << std::endl;
}
