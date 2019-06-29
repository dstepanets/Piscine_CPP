/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 12:47:13 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 12:47:14 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"

class					Sorcerer
{
	public:
		Sorcerer(void);
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &src);
		~Sorcerer(void);

		Sorcerer &	operator = (const Sorcerer &rhs);

		std::string		getName(void) const;
		std::string		getTitle(void) const;

		void			polymorph(Victim const &);

	private:
		std::string		_name;
		std::string		_title;
};

std::ostream	&operator << (std::ostream &o, Sorcerer const &i);

#endif

