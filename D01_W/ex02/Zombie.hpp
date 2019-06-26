/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:59:01 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 16:59:02 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class		Zombie
{
	public:

		Zombie(std::string name, std::string type);
		~Zombie(void);

		std::string	getName(void);
		std::string	getType(void);

		void	announce(void);

	private:

		std::string		_name;
		std::string		_type;

};

#endif
