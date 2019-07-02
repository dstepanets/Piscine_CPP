/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 15:34:39 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/02 15:34:40 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
#include <fstream>

class	PresidentialPardonForm : public Form
{

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		~PresidentialPardonForm(void);
		PresidentialPardonForm& operator = (const PresidentialPardonForm &old);

		std::string		getTarget(void) const;

		void			execute(Bureaucrat const &) const;

	private:
		std::string		_target;
};

#endif


