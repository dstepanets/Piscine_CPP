/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 23:04:14 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 23:04:16 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class		Weapon
{
	public:
		
		Weapon(std::string type);
		~Weapon(void);

		std::string const&	getType(void) const;
		void				setType(std::string type);

	private:
		
		std::string			_type;

};

#endif
