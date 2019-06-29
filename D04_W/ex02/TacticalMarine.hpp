/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 18:00:12 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 18:00:13 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"
# include "defines.hpp"
# include <iostream>

class		TacticalMarine : public ISpaceMarine
{

	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const & cpy);
		~TacticalMarine();

		TacticalMarine & operator = (TacticalMarine const & rhs);

		ISpaceMarine *		clone() const;

		void 				battleCry() const;
		void 				rangedAttack() const;
		void 				meleeAttack() const;
};

#endif
