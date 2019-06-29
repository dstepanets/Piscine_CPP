/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:35:08 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 14:35:10 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "RadScorpion.hpp"

/*==============================CONSTRUCTORS=================================*/

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	PUTLN("* click click click *");
}

RadScorpion::RadScorpion(RadScorpion const &src)
{
	*this = src;
	PUTLN("* click click click *");
}

RadScorpion::~RadScorpion(void)
{
	PUTLN("* SPROTCH *");
}
