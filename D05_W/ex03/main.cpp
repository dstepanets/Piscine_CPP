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

int			main(void)
{
		
	std::cout << std::endl << "==================== EX03 =======================" << std::endl;

	Intern	someRandomIntern;
	Form*	rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	Bureaucrat		zaf("Zaphod Beeblebrox", 5);
	std::cout << zaf << std::endl;

	zaf.signForm(*rrf);
	zaf.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("Shrubbery Creation", "Space");
	zaf.signForm(*rrf);
	zaf.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("presidential pardon", "You");
	zaf.signForm(*rrf);
	zaf.executeForm(*rrf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("Pass CPP Piscine", "Me");
	std::cout << std::endl;

//	system("leaks -q a.out");
	return (0);
}
