/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:35:48 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 14:35:49 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "defines.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int				main(void)
{
	Character		*zaz = new Character("zaz");

	std::cout << *zaz;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);

	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

/*================================MORE TESTS==================================*/

	PUTLN("==========ACT TWO============");

	delete zaz;

	Character	*bov = new Character("Bovdur");
	Enemy		*s = new SuperMutant();
	Enemy		*s2 = s;
	
	bov->equip(pf);
	std::cout << *bov;
	while (bov->getAp() > 0 && s->getHP() > 0)
	{
		bov->attack(s2);
		std::cout << *bov;
	}
	while (bov->getAp() < 40)
	{
		bov->recoverAP();
		std::cout << *bov;
	}
	bov->equip(pr);
	std::cout << *bov;

	delete pf;
	delete pr;
	delete bov;

	return (0);
}