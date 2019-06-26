/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 23:04:44 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 23:04:46 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
#include <iostream>

class		HumanA
{
	public:

		HumanA(std::string name, Weapon& w);
		~HumanA(void);

		void			attack(void) const;

	private:

		Weapon&			_weapon;
		std::string		_name;

};

#endif
