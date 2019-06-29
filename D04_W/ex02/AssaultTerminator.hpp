/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 17:59:20 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 17:59:21 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"
# include "defines.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{

	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &cpy);
		~AssaultTerminator(void);

		AssaultTerminator &operator = (AssaultTerminator const & rhs);
		
		ISpaceMarine* 	clone() const;

		void			battleCry(void) const ;
		void			rangedAttack(void) const;
		void			meleeAttack(void) const;
};
#endif
