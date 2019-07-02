/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 18:18:54 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/02 18:18:56 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
#include <fstream>

class	RobotomyRequestForm : public Form
{

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		~RobotomyRequestForm(void);
		RobotomyRequestForm& operator = (const RobotomyRequestForm &old);

		std::string		getTarget(void) const;

		void			execute(Bureaucrat const &) const;

	private:
		std::string		_target;
};

#endif

