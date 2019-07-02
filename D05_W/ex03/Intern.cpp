/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 19:23:48 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/02 19:23:49 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) {}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern(void) {}

Intern &			Intern::operator = (Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Form *				Intern::makeForm(std::string const &name, std::string const &target)
{
	Form		*f;

	if (name == "shrubbery creation" || name == "Shrubbery Creation")
		f = (Form *)new ShrubberyCreationForm(target);
	else if (name == "robotomy request" || name == "Robotomy Request")
		f = (Form *)new RobotomyRequestForm(target);
	else if (name == "presidential pardon" || name == "Presidential Pardon")
		f = (Form *)new PresidentialPardonForm(target);
	else
	{
		std::cerr << "Intern says, there is no \'" << name << "\' form!" << std::endl;
		return (NULL);
	}
	std::cout << "Intern creates:" << *f << std::endl;
	return (f);
}
