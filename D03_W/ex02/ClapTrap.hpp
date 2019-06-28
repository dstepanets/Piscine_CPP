/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 22:34:50 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/28 22:34:51 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define RED		"\e[31m"
# define GREEN 		"\e[32m"
# define YELLOW		"\e[33m"
# define BLUE		"\e[34m"
# define MAGENTA	"\e[35m"
# define CYAN 		"\e[36m"
# define DEF		"\e[39m"
# define WHITE		"\e[97m"

class					ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name, uint32_t level, uint32_t hp, uint32_t maxHp, uint32_t armor,
					uint32_t energy, uint32_t maxEnergy, uint32_t meleeDmg, uint32_t rangedDmg);
		ClapTrap(const ClapTrap &rhs);
		~ClapTrap(void);

		ClapTrap &	operator=(const ClapTrap &rhs);

		std::string		getName(void) const;
		uint32_t		getLevel(void) const;
		uint32_t		getHp(void) const;
		uint32_t		getEnergy(void) const;
		uint32_t		getMeleeDmg(void) const;
		uint32_t		getRangedDmg(void) const;

		void			takeDamage(uint32_t amount);
		void			beRepaired(uint32_t amount);

	protected:
		std::string			_name;
		uint32_t			_level;

		uint32_t			_hp;
		uint32_t			_maxHp;
		uint32_t			_armor;

		uint32_t			_energy;
		uint32_t			_maxEnergy;

		uint32_t			_meleeDmg;
		uint32_t			_rangedDmg;
};

std::ostream	&operator << (std::ostream &o, ClapTrap const &i);

#endif
