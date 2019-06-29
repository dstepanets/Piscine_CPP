/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 14:34:25 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 14:34:26 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include "defines.hpp"

class					Enemy
{
	public:
		Enemy(void);
		Enemy(int hp, std::string const &type);
		virtual ~Enemy(void);
		Enemy(Enemy const &src);

		Enemy				&operator = (Enemy const &rhs);

		std::string	const &	getType(void) const;
		int					getHP() const;

		virtual void		takeDamage(int damage);

	protected:
		int					_hp;
		std::string			_type;

};

#endif
