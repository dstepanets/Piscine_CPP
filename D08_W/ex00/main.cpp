/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 18:21:31 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/05 18:21:32 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <iterator>

void			displayInt(int i)
{
	std::cout << "[" << i << "] ";
}

int				main(void)
{
	std::list<int>						l;
	std::list<int>::iterator			it;

	l.push_back(-7);
	l.push_back(21);
	l.push_back(-42);
	l.push_back(84);
	l.push_back(0);

	std::cout << ":) Hello! Here is the list of ints: " << std::endl;
	for_each(l.begin(), l.end(), displayInt);
	std::cout << "\n" << std::endl;

	std::cout << ":) Let's find a cheating -42 int!" << std::endl;
	it = easyfind(l, -42);
	std::cout << *it << "\t (it's index is: " << std::distance(l.begin(), it) << ")" << std::endl;

	std::cout << "\n:) Here it is. Now, let's find an evil 666!" << std::endl;
	try
	{
		it = easyfind(l, 666);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}