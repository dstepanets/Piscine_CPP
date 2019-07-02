/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 12:31:33 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/02 12:31:35 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*==============================CONSTRUCTORS=================================*/

Form::Form(void) : _name("Form"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(std::string name, short gradeToSign, short gradeToExecute) :
	_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &src) : 
	_name(src._name), _signed(src._signed), 
	_gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	*this = src;
}

Form::~Form(void) {}

/*================================OPERATORS==================================*/

Form & 		Form::operator = (Form const &rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

std::ostream &		operator << ( std::ostream & o, Form const &i )
{
	o << "* Form \'" << i.getName() << "\' [" << (i.getSignature() ? "signed" : "not signed")
		<< "] Grade: to sign - " << i.getGradeToSign() << "; to execute - " 
		<< i.getGradeToExecute() << "." << std::endl;
	return (o);
}

/*==============================GETTERS-SETTERS==============================*/

std::string				Form::getName(void) const
{
	return (this->_name);
}

bool					Form::getSignature(void) const
{
	return (this->_signed);
}

short					Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

short					Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

/*===========================FUNCTIONS=======================================*/

void					Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->_gradeToSign)
	{
		throw Form::GradeTooLowException();
	}
	else
	{
		if (this->_signed)
		{
			std::cout << b.getName() << " cannot sign " << _name
						<< " because the Form is signed already" << std::endl;
		}
		else
		{
			this->_signed = true;
		}
	}
}

/*===========================EXCEPTIONS======================================*/

Form::GradeTooHighException::GradeTooHighException(void) {}
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src) {*this = src;}
Form::GradeTooHighException::~GradeTooHighException(void) throw() {}
Form::GradeTooHighException 
			&Form::GradeTooHighException::operator = 
			(Form::GradeTooHighException const &rhs)
			{std::exception::operator=(rhs); return *this;}

const char *		Form::GradeTooHighException::what(void) const throw()
{
	return ("Form ERROR: Grade is too high.");
}

Form::GradeTooLowException::GradeTooLowException(void) {}
Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src) {*this = src;}
Form::GradeTooLowException::~GradeTooLowException(void) throw() {}
Form::GradeTooLowException 
			&Form::GradeTooLowException::operator = 
			(Form::GradeTooLowException const &rhs)
			{std::exception::operator=(rhs); return *this;}

const char *		Form::GradeTooLowException::what(void) const throw()
{
	return ("Form ERROR: Grade is too low.");
}