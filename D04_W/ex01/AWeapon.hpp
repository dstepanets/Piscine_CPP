/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:33:55 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 14:33:57 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include "defines.hpp"

class AWeapon
{

	public:
			AWeapon(void);
			AWeapon(std::string const & name, int apcost, int damage);
			AWeapon(AWeapon const &src);
			virtual ~AWeapon(void);

			AWeapon &	operator = (const AWeapon &rhs);

			std::string const &		getName(void) const;
			int 					getAPCost(void) const;
			int 					getDamage(void) const;
			virtual void 			attack() const = 0;

	private:
			std::string				_name;
			int						_damage;
			int						_apcost;

};

#endif