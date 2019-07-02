/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 15:34:48 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/02 15:34:49 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*==============================CONSTRUCTORS=================================*/

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequest", 72, 45)
{
	_target = "default_target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
											Form("RobotomyRequest", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
											Form(src.getName(), 72, 45)
{ 
	*this = src; 
}

RobotomyRequestForm::~RobotomyRequestForm(void) { }

/*================================OPERATORS==================================*/

RobotomyRequestForm&	RobotomyRequestForm::operator = (const RobotomyRequestForm &)
{ return (*this); }

/*==============================GETTERS-SETTERS==============================*/

std::string	RobotomyRequestForm::getTarget(void)	const
{
	return (_target);
}

/*===========================FUNCTIONS=======================================*/

void			RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	srand(time(0));

	if (this->getSignature())
	{
		if (executor.getGrade() <= this->getGradeToExecute())
		{
			if ((rand() % 2) != 0)
			{
				std::cout << "* Zzzhh jrrrr zzzz jzh... *" << std::endl;
				system("afplay Drill.wav");
				std::cout << _target << " has been robotomized successfully" << std::endl;
			}
			else
				std::cout << _target << " has failed to be robotomized" << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	else
		throw NotSignedException();
}

