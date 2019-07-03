/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 19:05:15 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/03 19:05:17 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int			main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << 
		"USAGE: ./convert <value>\n\twhere <value> is either char, int, float or double"
		<< std::endl;
		return (0);
	}

	Convert		num(av[1]);

// =========== CHAR ==================

	std::cout << "char: ";
	try
	{
		char c = static_cast<char>(num);
		std::cout << "\'" << c << "\'" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

// =========== INT ==================

	std::cout << "int: ";
	try
	{
		int i = static_cast<int>(num);
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

// =========== FLOAT ==================

	std::cout << "float: ";
	try
	{
		float f = static_cast<float>(num);
		std::cout << std::setprecision(1) << std::fixed << f << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

// =========== DOUBLE ==================

	std::cout << "double: ";
	try
	{
		double d = static_cast<double>(num);
		std::cout << std::setprecision(1) << std::fixed << d << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	return (0);
}
