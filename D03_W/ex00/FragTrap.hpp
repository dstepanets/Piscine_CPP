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

class					FragTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(const FragTrap &obj);
		~FragTrap(void);

		FragTrap &	operator=(const FragTrap &rhs);

		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void			vaulthunter_dot_exe(std::string const & target);

	private:
		std::string		_name;
		unsigned int	_health;
		unsigned int	_maxHealth;
		unsigned int	_energy;
		unsigned int	_maxEnergy;
		unsigned int	_level;
		unsigned int	_meleeDmg;
		unsigned int	_rangedDmg;
		unsigned int	_armor;

		static std::string _vaulthunterQuotes[25];
};

std::ostream	&operator<<(std::ostream &o, FragTrap const &i);

#endif
