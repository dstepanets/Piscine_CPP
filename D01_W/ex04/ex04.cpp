/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 22:03:27 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 22:03:28 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int			main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *bptr = &brain;
	std::string &bref = brain;

	std::cout << "[Str by pointer]: " << *bptr << std::endl;
	std::cout << "[Str by reference]: " << bref << std::endl;
	
	return (0);
}
