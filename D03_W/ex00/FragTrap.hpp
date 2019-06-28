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

# include <iostream>

# define RED		"\e[31m"
# define GREEN 		"\e[32m"
# define YELLOW		"\e[33m"
# define BLUE		"\e[34m"
# define MAGENTA	"\e[35m"
# define CYAN 		"\e[36m"
# define DEF		"\e[39m"
# define WHITE		"\e[97m"


class					FragTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(const FragTrap &rhs);
		~FragTrap(void);

		FragTrap &	operator=(const FragTrap &rhs);

		std::string		getName(void) const;
		unsigned int	getLevel(void) const;
		unsigned int	getHp(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getMeleeDmg(void) const;
		unsigned int	getRangedDmg(void) const;

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		unsigned int	vaulthunter_dot_exe(std::string const & target);

	private:
		std::string					_name;
		unsigned int				_level;

		unsigned int				_hp;
		unsigned int static const	_maxHp;
		unsigned int				_armor;

		unsigned int				_energy;
		unsigned int static const	_maxEnergy;

		unsigned int				_meleeDmg;
		unsigned int				_rangedDmg;

		static std::string _vaulthunterQuotes[25];
};

std::ostream	&operator << (std::ostream &o, FragTrap const &i);

#endif
