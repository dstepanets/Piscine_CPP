/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:34:35 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 14:34:36 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

/*==============================CONSTRUCTORS=================================*/

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 21, 5) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src)
{
	*this = src;
}

PlasmaRifle::~PlasmaRifle(void) {}

/*===========================FUNCTIONS=======================================*/

void					PlasmaRifle::attack() const
{
	PUTLN("* piouuu piouuu piouuu *");
}
