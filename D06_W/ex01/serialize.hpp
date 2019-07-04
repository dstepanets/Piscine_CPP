/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:19:11 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/04 14:19:12 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <string>
# include <time.h>
# include <ios>

struct 				Data 
{
	std::string		s1;
	int				n;
	std::string		s2;
};

void *				serialize(void);
Data *				deserialize( void * raw );
void				dump_memory(void const *mem);
#endif