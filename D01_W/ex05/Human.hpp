/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 22:17:12 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 22:17:14 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <iostream>

class 		Human {

	public:

		Human(void);
		~Human(void);

		std::string 	identify(void) const;
		const Brain		&getBrain(void);


	private:
		Brain const		_brain;

};

#endif
