/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 22:16:29 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 22:16:31 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class 		Brain 
{

	public:

		Brain(void);
		~Brain(void);

		std::string		identify(void) const;

	private:

		std::string		_address;
};

#endif
