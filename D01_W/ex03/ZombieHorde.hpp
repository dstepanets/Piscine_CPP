/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 20:40:56 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 20:40:59 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>

class		ZombieHorde
{
	public:
		ZombieHorde(int N, std::string type);
		~ZombieHorde(void);

		std::string	generateName(void);
		Zombie*		newZombie(void);

		void	announce(void);

	private:
		int			_zombies_num;
		std::string	_zombies_type;
		Zombie		*_horde;
};

#endif
