/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:59:08 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 16:59:10 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <iostream>

class		ZombieEvent
{
	public:
		ZombieEvent(std::string type);
		~ZombieEvent(void);

		void		setZombieType(std::string type);

		Zombie*		newZombie(std::string name);

	private:
		std::string	_type;
};

#endif
