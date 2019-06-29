/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 17:59:58 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 17:59:59 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class		Squad : public ISquad
{

		typedef struct		s_squad
		{
			ISpaceMarine	*marine;
			s_squad			*next;
		}					t_squad;
	
	public:
		Squad(void);
		Squad(Squad const &arg);
		virtual ~Squad(void);

		Squad & operator = (Squad const & rhs);

		int				getCount(void) const;
		ISpaceMarine*	getUnit(int i) const;

		int				push( ISpaceMarine* sm );

	private:
		int				_units_count;
		t_squad			*_squad;
};

#endif