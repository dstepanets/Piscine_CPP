/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 22:16:48 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 22:16:49 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	return; 
}

Human::~Human(void)
{
	return; 
}

std::string		Human::identify(void) const
{
	return (this->_brain.identify());
}

Brain const		&Human::getBrain(void)
{
	return (this->_brain);
}
