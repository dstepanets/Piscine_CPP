/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:34:48 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 14:34:49 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"
#include "PowerFist.hpp"

/*==============================CONSTRUCTORS=================================*/

PowerFist::PowerFist(void) : AWeapon("PowerFist", 50, 8) {}

PowerFist::PowerFist(PowerFist const &src)
{
	*this = src;
}

PowerFist::~PowerFist(void) {}

/*===========================FUNCTIONS=======================================*/

void					PowerFist::attack() const
{
	PUTLN("* pschhh... SBAM! *");
}
