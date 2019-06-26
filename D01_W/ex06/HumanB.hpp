/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 23:05:05 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 23:05:06 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class		HumanB
{
	public:

		HumanB(std::string name);
		~HumanB(void);

		void			setWeapon(Weapon& w);
		void			attack(void) const;

	private:

		Weapon*			_weapon;
		std::string		_name;

};

#endif