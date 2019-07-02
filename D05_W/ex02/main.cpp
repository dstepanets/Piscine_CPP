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
#include "ShrubberyCreationForm.hpp"

int			main(void)
{
	std::cout << "================ Bureaucrat ========================" << std::endl;
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


	std::cout << std::endl << "==================== EX02 =======================" << std::endl;

	Bureaucrat				zel("Zelenkin", 10);
	std::cout << zel;
	ShrubberyCreationForm	garden("PlantGardenForm");
	std::cout << garden << std::endl;

	std::cout << "	[preZedent plants a tree]" << std::endl;
	try
	{
		zel.executeForm(garden);
		std::cout << garden << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	zel.signForm(garden);
	std::cout << garden << std::endl;
	zel.executeForm(garden);
	std::cout << ">> file output" << std::endl  << std::endl ;


	Bureaucrat				lya("Lyashko", 140);
	std::cout << lya << std::endl;

	std::cout << "	[Radykal plants a tree]" << std::endl;
	try
	{
		garden.execute(lya);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	


	return (0);
}
