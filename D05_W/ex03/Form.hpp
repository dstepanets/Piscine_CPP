/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 12:31:40 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/02 12:31:43 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class					Bureaucrat;

class					Form
{
	public:
		Form(void);
		Form(std::string name, short gradeToSign, short gradeToExecute);
		Form(Form const &src);
		virtual ~Form(void);

		Form &	operator = (const Form &rhs);

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
		class	NotSignedException : public std::exception
		{
		public:
			NotSignedException(void);
			NotSignedException(const NotSignedException &src);
			~NotSignedException(void) throw();
			NotSignedException& operator = (const NotSignedException &rhs);
			virtual const char* what() const throw();
		};

		std::string			getName(void) const;
		bool				getSignature(void) const;
		short				getGradeToSign(void) const;
		short				getGradeToExecute(void) const;

		void				beSigned(Bureaucrat &b);
		virtual void		execute(Bureaucrat const &) const = 0;

	private:
		std::string	const	_name;
		bool				_signed;
		short const			_gradeToSign;
		short const			_gradeToExecute;

};

std::ostream	&operator << (std::ostream &o, Form const &i);

#endif

