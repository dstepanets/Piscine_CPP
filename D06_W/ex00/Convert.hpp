/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 19:46:50 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/03 19:46:51 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cmath>
# include <limits.h>
# include <iomanip>
# include <float.h>

class					Convert
{
	public:
		Convert(void);
		Convert(std::string _str);
		Convert(Convert const &src);
		~Convert(void);

		Convert &	operator = (const Convert &rhs);

		operator char(void)		const;
		operator int(void)		const;
		operator float(void)	const;
		operator double(void)	const;

		class	ImpossibleExc : public std::exception
		{
			public:
				ImpossibleExc(void);
				ImpossibleExc(const ImpossibleExc &src);
				virtual ~ImpossibleExc(void) throw();
				ImpossibleExc	&operator = (const ImpossibleExc &rhs);
				virtual const char	*what() const throw();
		};
		class	NonDisplayableExc : public std::exception
		{
			public:
				NonDisplayableExc(void);
				NonDisplayableExc(const NonDisplayableExc &src);
				virtual ~NonDisplayableExc(void) throw();
				NonDisplayableExc	&operator = (const NonDisplayableExc &rhs);
				virtual const char	*what() const throw();
		};

	private:
		std::string 	_str;

};

#endif

