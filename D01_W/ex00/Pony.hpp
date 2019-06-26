/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 15:11:15 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/26 15:11:18 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class		Pony
{
	private:
		std::string		_name;
		std::string		_color;
		size_t			_age;
		std::string		_allocation;

	public:
		Pony(std::string name, std::string color,
				size_t age, std::string allocation);
		~Pony(void);

		std::string		getName(void);
		std::string		getColor(void);
		size_t			getAge(void);
		std::string		getAllocation(void);
	
		void			ihoho(size_t num);
};

void		ponyOnTheStack(void);
void		ponyOnTheHeap(void);

#endif