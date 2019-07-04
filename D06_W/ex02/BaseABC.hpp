/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseABC.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 19:02:01 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/04 19:02:02 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASEABC_HPP
# define BASEABC_HPP

class	Base
{
	public:
		virtual ~Base(void) {};
};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

#endif