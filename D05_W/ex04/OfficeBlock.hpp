/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 21:13:38 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/02 21:13:39 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include <iostream>
# include "Bureaucrat.hpp"
# include "Intern.hpp"

class					OfficeBlock
{
	public:
		OfficeBlock(void);
		OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor);
		~OfficeBlock(void);

		class NoInternException : public std::exception 
		{
			public:
				NoInternException();
				NoInternException(NoInternException const &src);
				~NoInternException() throw();
				NoInternException &operator = (NoInternException const &rhs);
				const char *what() const throw();
		};
		class NoSignerException : public std::exception 
		{
			public:
				NoSignerException();
				NoSignerException(NoSignerException const &src);
				~NoSignerException() throw();
				NoSignerException &operator = (NoSignerException const &rhs);
				const char *what() const throw();
		};
		class NoExecutorException : public std::exception 
		{
			public:
				NoExecutorException();
				NoExecutorException(NoExecutorException const &src);
				~NoExecutorException() throw();
				NoExecutorException &operator = (NoExecutorException const &rhs);
				const char *what() const throw();
		};
		class NoFormException : public std::exception 
		{
			public:
				NoFormException();
				NoFormException(NoFormException const &src);
				~NoFormException() throw();
				NoFormException &operator = (NoFormException const &rhs);
				const char *what() const throw();
		};

		Intern			*getIntern(void) const;
		Bureaucrat		*getSigner(void) const;
		Bureaucrat		*getExecutor(void) const;

		void 			setIntern(Intern *intern);
		void 			setSigner(Bureaucrat *signer);
		void 			setExecutor(Bureaucrat *executor);

		void 			doBureaucracy(std::string formName, std::string target);

	private:
		Intern			*_intern;
		Bureaucrat		*_signer;
		Bureaucrat		*_executor;

};

#endif

