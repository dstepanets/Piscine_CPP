/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 19:23:53 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/02 19:23:54 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Intern.hpp"
# include "Form.hpp"

class Intern
{
	public:
						Intern(void);
						Intern(Intern const &src);
						~Intern(void);

		Intern &		operator = (Intern const &rhs);

		Form *			makeForm(std::string const &name, std::string const &target);
};

#endif
