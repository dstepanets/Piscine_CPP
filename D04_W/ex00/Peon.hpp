/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 12:46:58 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 12:46:59 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class			Peon : public Victim
{
	public:
		Peon(void);
		Peon(std::string name);
		Peon(Peon const &src);
		virtual ~Peon(void);

		void		getPolymorphed(void) const;
};

#endif
