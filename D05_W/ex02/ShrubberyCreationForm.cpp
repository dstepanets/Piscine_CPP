/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 15:35:31 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/02 15:35:33 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*==============================CONSTRUCTORS=================================*/

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreation", 145, 137)
{
	_target = "default target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src.getName(), 145, 137)
{ 
	*this = src; 
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) { }

/*================================OPERATORS==================================*/

ShrubberyCreationForm&	ShrubberyCreationForm::operator = (const ShrubberyCreationForm &)
{ return (*this); }

/*==============================GETTERS-SETTERS==============================*/

std::string	ShrubberyCreationForm::getTarget(void)	const
{
	return (_target);
}

/*===========================FUNCTIONS=======================================*/

void			ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSignature())
	{
		if (executor.getGrade() <= this->getGradeToExecute())
		{
			std::ofstream		file(_target + "_shrubbery", std::fstream::app);
			if (file)
			{
				file << "     .{{}}}}}}." << std::endl;
				file << "    {{{{{{(`)}}}." << std::endl;
				file << "   {{{(`)}}}}}}}}}" << std::endl;
				file << "  }}}}}}}}}{{(`){{{" << std::endl;
				file << " }}}}{{{{(`)}}{{{{" << std::endl;
				file << "{{{(`)}}}}}}}{}}}}}" << std::endl;
				file << "{{{{{{{{(`)}}}}}}}}}}" << std::endl;
				file << " {{{{{{{}{{{{(`)}}}}}}" << std::endl;
				file << " {{{{{(`)   {{{{(`)}'" << std::endl;
				file << "	    |   | " << std::endl;
				file << " (`)   /     \\" << std::endl;
				file << "~~~~~~~~~~~~~~~~~~~ " << std::endl;
			}
			file.close();
		}
		else
			throw GradeTooLowException();
	}
	else
		throw NotSignedException();
}
