/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 18:21:25 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/05 18:21:26 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
#include <iostream>

template<typename T>
typename T::iterator	easyfind(T & container, int n)
{
	typename T::iterator	it;

	it = find(container.begin(), container.end(), n);
		if (it != container.end() || (it == container.end() && *it == n))
			return (it);

	throw std::range_error("No such int found in the container :(");
};


#endif
