/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:28:15 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/27 14:28:43 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class		Fixed
{

	public:
		Fixed(void);
		Fixed(int const ival);
		Fixed(float const fval);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed & operator=(Fixed const & rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_value;
		const static int	_fractBits;


};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
