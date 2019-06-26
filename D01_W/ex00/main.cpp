/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 15:11:33 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 15:11:34 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void		ponyOnTheStack(void)
{
	Pony	sh = Pony("Shlondra", "pink", 2, "stack");

	std::cout << " - " << sh.getName() << ", say ihoho 4 times." << std::endl;
	sh.ihoho(4);
	std::cout << " - Good girl!" << std::endl;
}

void		ponyOnTheHeap(void)
{
	Pony	*b = new Pony("Barsik", "light blue", 9999, "heap");

	std::cout << " - " << b->getName() << ", say ihoho 3 times." << std::endl;
	b->ihoho(3);
	std::cout << " - Good boy!" << std::endl;
	delete b;
}

int			main(void) 
{
	std::cout << ">> Calling ponyOnTheStack..." << std::endl;
	ponyOnTheStack();

	std::cout << "\n>> Calling ponyOnTheHeap..." << std::endl;
	ponyOnTheHeap();

	return (0);
}
