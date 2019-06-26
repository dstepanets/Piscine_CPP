/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 16:46:28 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 16:46:30 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		memoryLeak() 
{
	std::string*	panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;

	delete panthere;
}
