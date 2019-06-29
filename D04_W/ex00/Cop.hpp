/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cop.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:06:13 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 14:06:14 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cop_HPP
# define Cop_HPP

#include "Victim.hpp"

class			Cop : public Victim
{
	public:
		Cop(void);
		Cop(std::string name);
		Cop(Cop const &src);
		virtual ~Cop(void);

		void		getPolymorphed(void) const;
};

#endif
