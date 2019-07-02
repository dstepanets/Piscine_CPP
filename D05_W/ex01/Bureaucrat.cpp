/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 16:17:24 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/01 16:17:25 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*==============================CONSTRUCTORS=================================*/

Bureaucrat::Bureaucrat(void) : _name("Bureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, short grade) : _name(name)
{
	setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat(void) {}

/*================================OPERATORS==================================*/

Bureaucrat & 		Bureaucrat::operator = (Bureaucrat const &rhs)
{
	if (this != &rhs)
		setGrade(rhs.getGrade());
	return (*this);
}

std::ostream &		operator << ( std::ostream & o, Bureaucrat const &i )
{
	o << i.getName() << ", bureaucrat grade " << (short)i.getGrade() << std::endl;
	return (o);
}

/*==============================GETTERS-SETTERS==============================*/

std::string			Bureaucrat::getName(void) const
{
	return (this->_name);
}

short				Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void				Bureaucrat::setGrade(short grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;

}

/*===========================FUNCTIONS=======================================*/

void				Bureaucrat::incrementGrade(void)
{
	this->setGrade(_grade - 1);
}

void				Bureaucrat::decrementGrade(void)
{
	this->setGrade(_grade + 1);
}

void				Bureaucrat::signForm(Form &form)
{
	try
	{
		if (form.getGradeToSign() >= _grade)
		{
			form.beSigned(*this);
			std::cout << _name << " signs \'" << form.getName() << "\'." << std::endl; 
		}
		else
		{
			std::cout << _name << " cannot sign " << form.getName() << " becuase of ";
		}
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
}

/*===========================EXCEPTIONS======================================*/

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}
Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src) {*this = src;}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}
Bureaucrat::GradeTooHighException 
			&Bureaucrat::GradeTooHighException::operator = 
			(Bureaucrat::GradeTooHighException const &rhs)
			{std::exception::operator=(rhs); return *this;}

const char *		Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("ERROR: Grade is a way too high  (Max is 1).");
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}
Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src) {*this = src;}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}
Bureaucrat::GradeTooLowException 
			&Bureaucrat::GradeTooLowException::operator = 
			(Bureaucrat::GradeTooLowException const &rhs)
			{std::exception::operator=(rhs); return *this;}

const char *		Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("ERROR: Grade is a way too low (min is 150).");
}