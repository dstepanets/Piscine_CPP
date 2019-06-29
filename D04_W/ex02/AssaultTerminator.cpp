/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 17:59:14 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 17:59:15 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

/*==============================CONSTRUCTORS=================================*/

AssaultTerminator::AssaultTerminator(void)
{
	PUTLN("* teleports from space *");
}

AssaultTerminator::~AssaultTerminator(void) 
{
	PUTLN("I’ll be back ...");
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &cpy) 
{
	*this = cpy;
}

/*================================OPERATORS==================================*/

AssaultTerminator& 	AssaultTerminator::operator = (AssaultTerminator const &rhs) 
{
	(void)rhs;
	return (*this);
}

/*===========================FUNCTIONS=======================================*/

void				AssaultTerminator::battleCry() const 
{
	PUTLN("This code is unclean. PURIFY IT !");
}

void				AssaultTerminator::rangedAttack() const 
{
	PUTLN("* does nothing *");
}

void				AssaultTerminator::meleeAttack() const 
{
	PUTLN("* attacks with chainfists *");
}

ISpaceMarine *		AssaultTerminator::clone() const 
{
	ISpaceMarine *		clone = new AssaultTerminator(*this);
	return  clone;
}
