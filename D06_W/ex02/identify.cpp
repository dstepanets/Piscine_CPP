/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 19:02:15 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/04 19:02:18 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BaseABC.hpp"
#include <iostream>
#include <ctime>

void			identify_from_pointer(Base *p)
{
	if (A *a = dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (B *b = dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void			identify_from_reference(Base &p)
{
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {}

	try
	{
		B b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {}	

	try
	{
		C c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {}
}

Base *			generateObj(void)
{
	Base	*b;

	std::srand(static_cast<unsigned int>(time(0)));
	uint32_t i = rand() % 3;

	std::cout << "Randomizer created an object of class ";
	if (i == 0)
	{
		b = new A;
		std::cout << "\"A\"" << std::endl;
	}
	else if (i == 1)
	{
		b = new B;
		std::cout << "\"B\"" << std::endl;
	}
	else
	{
		b = new C;
		std::cout << "\"C\"" << std::endl;
	}
	return (b);
}

int				main(void)
{
	Base *		p = generateObj();

	std::cout << "It is identified by pointer as: ";
	identify_from_pointer(p);

	std::cout << "It is identified by reference as: ";
	identify_from_reference(*p);

	delete p;

	return (0);
}
