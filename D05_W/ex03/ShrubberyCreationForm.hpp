/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 15:35:10 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/02 15:35:11 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
#include <fstream>

class	ShrubberyCreationForm : public Form
{

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm& operator = (const ShrubberyCreationForm &old);

		std::string		getTarget(void) const;

		void			execute(Bureaucrat const &) const;

	private:
		std::string		_target;
};

#endif
