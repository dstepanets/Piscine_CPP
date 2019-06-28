/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 14:23:00 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/28 14:23:01 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
# include <iostream>

# define RED		"\e[31m"
# define GREEN 		"\e[32m"
# define YELLOW		"\e[33m"
# define BLUE		"\e[34m"
# define MAGENTA	"\e[35m"
# define CYAN 		"\e[36m"
# define DEF		"\e[39m"
# define WHITE		"\e[97m"

class					FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(const FragTrap &rhs);
		~FragTrap(void);

		FragTrap &	operator = (const FragTrap &rhs);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);

		unsigned int	vaulthunter_dot_exe(std::string const & target);

};

std::ostream	&operator << (std::ostream &o, FragTrap const &i);

#endif
