/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 18:00:20 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 18:00:22 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main() 
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

/*================================MORE TESTS=============================*/
	PUTLN("=====MORE TESTS========");

	ISquad* copy = vlc;

	PUTLN(vlc->getCount() << "	<-- vlc count");
	PUTLN((vlc == copy) << "	<-- vlc == copy");

	ISpaceMarine* Ivan = new TacticalMarine;
	ISpaceMarine* Petro = new AssaultTerminator;
	
	copy->push(Ivan);
	copy->push(Petro);

	PUTLN(vlc->getCount() << "	<-- vlc count");
	PUTLN((vlc == copy) << "	<-- vlc == copy");

	ISquad* band(copy);

	PUTLN(band->getCount() << "	<-- band count");
	PUTLN((band == copy) << "	<-- band == copy");

	delete copy;

	return 0; 
}