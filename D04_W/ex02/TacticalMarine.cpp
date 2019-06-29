/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 18:00:07 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 18:00:08 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

/*==============================CONSTRUCTORS=================================*/

TacticalMarine::TacticalMarine()
{
	PUTLN("Tactical Marine ready for battle");
}

TacticalMarine::~TacticalMarine()
{
	PUTLN("Aaargh ...");
}

TacticalMarine::TacticalMarine(TacticalMarine const &cpy)
{
	*this = cpy;
}

/*================================OPERATORS==================================*/

TacticalMarine &	TacticalMarine::operator = (TacticalMarine const &rhs)
{
	(void)rhs;
	return (*this);
}

/*===========================FUNCTIONS=======================================*/

void 				TacticalMarine::battleCry() const
{
	PUTLN("For the holy PLOT !");
}

void 				TacticalMarine::rangedAttack() const
{
	PUTLN("* attacks with bolter *");
}

void				 TacticalMarine::meleeAttack() const
{
	PUTLN("* attacks with chainsword *");
}

ISpaceMarine * 		TacticalMarine::clone() const
{
	ISpaceMarine	*clone = new TacticalMarine(*this);
	return clone;
}

