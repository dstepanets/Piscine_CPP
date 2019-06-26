/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 22:16:38 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 22:16:40 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
# include <sstream>

Brain::Brain(void)
{
	std::stringstream	address;

	address << this;
	this->_address = address.str();
}

Brain::~Brain(void) { return ; }

std::string	Brain::identify(void) const
{
	return this->_address;
}
