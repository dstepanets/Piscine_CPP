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
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int			main(void)
{
		
	Intern			idiotOne;
	Bureaucrat		hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat		bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock		ob;
	ob.setIntern(&idiotOne);
	ob.setSigner(&bob);
	ob.setExecutor(&hermes);

	try
	{
		ob.doBureaucracy("mutant pig termination", "Pigley");
	}
	catch (OfficeBlock::NoFormException &e)
	{
		std::cerr << "Gotcha!" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}


	std::cout << "=== ==== MORE TESTS ==== ===" << std::endl;
	std::cout << "	[Empty block]" << std::endl;

	OfficeBlock		ob2;

	try
	{
		ob2.doBureaucracy("Robotomy Request", "Vasia");
	}
	catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	ob2.setIntern(&idiotOne);
	try
	{
		ob2.doBureaucracy("Robotomy Request", "Vasia");
	}
	catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	ob2.setSigner(&bob);
	try
	{
		ob2.doBureaucracy("Robotomy Request", "Vasia");
	}
	catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}



	ob2.setExecutor(&hermes);
	try
	{
		ob2.doBureaucracy("Robotomy Request", "Zzzz");
	}
	catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	ob2.setSigner(&hermes);
	try
	{
		ob2.doBureaucracy("Robotomy Request", "Vasia");
	}
	catch (std::exception & e) 
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
