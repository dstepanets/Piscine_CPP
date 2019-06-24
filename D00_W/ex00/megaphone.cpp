/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 19:00:12 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/24 19:00:14 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void		megaphone(char *str)
{
	int	i = 0;
	
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			std::cout << (char)(str[i] - 32);
		else
			std::cout << str[i];
		i++;
	}
}

int			main(int ac, char *av[]) 
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
			megaphone(av[i]);
		std::cout << std::endl;
	}
	return (0);
}
