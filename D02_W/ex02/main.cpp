/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:06:21 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/27 16:06:25 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

int			main(void)
{
	Fixed			a;
	Fixed const		b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

//more tests

	Fixed			c = (b * 99999 / 100);

	std::cout << std::endl << c << std::endl;
	std::cout << --c << std::endl;
	std::cout << c-- << std::endl;

	std::cout << (a <= b) << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << (c != b) << std::endl;
	std::cout << (a == a) << std::endl;

	std::cout << Fixed::min(c, b) << std::endl;
	std::cout << Fixed::min(a, c) << std::endl;
	return 0;
}
