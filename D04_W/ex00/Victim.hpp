/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 12:47:28 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 12:47:30 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class					Victim
{
	public:
		Victim(void);
		Victim(std::string name);
		Victim(Victim const &src);
		~Victim(void);

		Victim &	operator = (const Victim &rhs);

		std::string		getName(void) const;

		virtual void	getPolymorphed(void) const;

	protected:
		std::string		_name;

};

std::ostream	&operator << (std::ostream &o, Victim const &i);

#endif

