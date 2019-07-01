/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 16:24:52 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/01 16:24:55 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int			main(void)
{
	try 
	{
		Bureaucrat		b("Danylo Volotsiuha", 150);
		std::cout << b << std::endl;

		Bureaucrat 	c("Vasyl Hrygorovych Zayibysko", 1);
		std::cout << c << std::endl;

		// Bureaucrat 	d("Domkrat", 0);
		// std::cout << d << std::endl;

		b = c;
		std::cout << b << std::endl;

		c.decrementGrade();
		std::cout << c << std::endl;
	
		c.incrementGrade();
		std::cout << c << std::endl;
		c.incrementGrade();
		std::cout << c << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Something is wrong with those beraucrats... " << std::endl;
		std::cout << e.what() << std::endl;
	}

	return (0);
}
