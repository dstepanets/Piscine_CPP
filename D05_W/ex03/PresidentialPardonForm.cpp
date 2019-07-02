/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 15:34:29 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/02 15:34:31 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*==============================CONSTRUCTORS=================================*/

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon", 25, 5)
{
	_target = "default_target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
											Form("Presidential Pardon", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :
											Form(src.getName(), 25, 5)
{ 
	*this = src; 
}

PresidentialPardonForm::~PresidentialPardonForm(void) { }

/*================================OPERATORS==================================*/

PresidentialPardonForm&	PresidentialPardonForm::operator = (const PresidentialPardonForm &)
{ return (*this); }

/*==============================GETTERS-SETTERS==============================*/

std::string	PresidentialPardonForm::getTarget(void)	const
{
	return (_target);
}

/*===========================FUNCTIONS=======================================*/

void			PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	srand(time(0));

	if (this->getSignature())
	{
		if (executor.getGrade() <= this->getGradeToExecute())
		{
			std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	else
		throw NotSignedException();
}


