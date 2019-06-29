/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:34:10 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 14:34:12 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "defines.hpp"
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &src);
		~Character(void);

		Character &			operator = (Character const &rhs);

		void				recoverAP(void);
		void				equip(AWeapon *weapon);
		void				attack(Enemy *enemy);

		std::string	const &	getName(void) const;
		int					getAp(void) const;
		AWeapon	const *		getWeapon(void) const;

	protected:
		std::string			_name;
		int					_ap;
		AWeapon				*_weapon;
};

std::ostream &				operator<<(std::ostream &os, Character const &rhs);

#endif
