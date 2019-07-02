/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 16:17:35 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/01 16:17:36 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>

class					Form;

class					Bureaucrat
{
	public:
		class	GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(const GradeTooHighException &src);
				virtual ~GradeTooHighException(void) throw();
				GradeTooHighException	&operator = (const GradeTooHighException &rhs);
				virtual const char	*what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(const GradeTooLowException &src);
				virtual ~GradeTooLowException(void) throw();
				GradeTooLowException	&operator = (const GradeTooLowException &rhs);
				virtual const char	*what() const throw();
		};

		Bureaucrat(void);
		Bureaucrat(std::string name, short grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);

		Bureaucrat &operator = (const Bureaucrat &rhs);

		std::string		getName(void) const;
		short			getGrade(void) const;
		void			setGrade(short grade);

		void			incrementGrade(void);
		void			decrementGrade(void);

		void			signForm(Form &form);
		void			executeForm(Form const &form);

	private:
		std::string const			_name;
		short						_grade;

};

std::ostream	&operator << (std::ostream &o, Bureaucrat const &i);

#endif
