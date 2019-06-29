/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 12:47:38 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 12:47:39 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Cop.hpp"

int main() 
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Cop	ad("Adolf");

	std::cout << robert << jim << joe << ad;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(ad);
	return 0; 
}
