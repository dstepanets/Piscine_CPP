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
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int			main(void)
{
	std::cout << "================ Bureaucrat ========================" << std::endl;

	Bureaucrat		bum("Noname Bum", 150);
	std::cout << bum << std::endl;

	Bureaucrat 	vas("Vasyl Hrygorovych Zayibysko", 1);
	std::cout << vas << std::endl;
	try 
	{


		// Bureaucrat 	d("Domkrat", 0);
		// std::cout << d << std::endl;

		vas.decrementGrade();
		std::cout << vas << std::endl;
	
		vas.incrementGrade();
		std::cout << vas << std::endl;
		vas.incrementGrade();
		std::cout << vas << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Something is wrong with those beraucrats... " << std::endl;
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl << "==================== EX02 =======================" << std::endl;

	Bureaucrat				zel("Zelenkin", 10);
	std::cout << zel;
	ShrubberyCreationForm	garden("president_palace");
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

	std::cout << std::endl << "	[Volotsiuha fails to execute robotomy]" << std::endl;

	RobotomyRequestForm		robo("Pavlo Zibrov");
	std::cout << bum;
	std::cout << robo << std::endl;

	try
	{
		bum.signForm(robo);
		bum.executeForm(robo);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "	[Zayibysko signs and executes robotomy]" << std::endl;
	std::cout << vas;

	try
	{
		robo.beSigned(vas);
		vas.executeForm(robo);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "	[Zaphod pardons Chikatilo]" << std::endl;

	Bureaucrat				zaf("Zaphod Beeblebrox", 6);
	std::cout << zaf;

	PresidentialPardonForm	pard("Chikatilo");
	std::cout << pard << std::endl;

	try
	{
		zaf.signForm(pard);
		pard.beSigned(zaf);
		pard.execute(zaf);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	zaf.incrementGrade();
	std::cout << zaf;
	pard.execute(zaf);
	
	return (0);
}
