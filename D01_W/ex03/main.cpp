/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:59:22 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 16:59:23 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

int			main(void)
{
	ZombieHorde horde = ZombieHorde(7, "regular");
	horde.announce();
	system("leaks -q a.out");
	return (0);
}
