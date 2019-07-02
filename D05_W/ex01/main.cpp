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
#include "Form.hpp"

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

	std::cout << "==================== FORM =======================" << std::endl;

	Form	f("Pysulka", 13, 7);
		std::cout << f << std::endl;

	std::cout << "<<< Low grade form >>>" << std::endl;
		try 
		{
			Form fl("Bamazhka", 151, 2);
			std::cout << fl << std::endl;
		}
		catch (Form::GradeTooLowException &e)
		{
			std::cout << e.what() << std::endl;
		}

	std::cout << "<<< High grade form >>>" << std::endl;
		try 
		{
			Form fh("TOP SECRET", 0, 42);
			std::cout << fh << std::endl;
		}
		catch (Form::GradeTooHighException &e)
		{
			std::cout << e.what() << std::endl << std::endl;
		}


	std::cout << "<<< Signing of a form fails >>>" << std::endl;
		Bureaucrat 	pet("Petrovych", 10);
		std::cout << pet;

		Form	ukaz("Presidential Decree", 1, 1);
		std::cout << ukaz;

		try
		{
			ukaz.beSigned(pet);
			std::cout << ukaz;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}

	std::cout << "<<< Signing of a form succeedes >>>" << std::endl;	

		Bureaucrat 	zel("Zelenkin", 1);
		std::cout << zel;

		try
		{
			zel.signForm(ukaz);
			std::cout << ukaz;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	return (0);
}
