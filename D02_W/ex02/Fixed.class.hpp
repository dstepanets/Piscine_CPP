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

		Fixed & operator = (Fixed const &rhs);

		bool	operator > (const Fixed &rhs) const;
		bool	operator < (const Fixed &rhs) const;
		bool	operator >= (const Fixed &rhs) const;
		bool	operator <= (const Fixed &rhs) const;
		bool	operator == (const Fixed &rhs) const;
		bool	operator != (const Fixed &rhs) const;

		Fixed	operator + (const Fixed &rhs) const;
		Fixed	operator - (const Fixed &rhs) const;
		Fixed	operator * (const Fixed &rhs) const;
		Fixed	operator / (const Fixed &rhs) const;

		Fixed &	operator ++ (void);
		Fixed	operator ++ (int);
		Fixed &	operator -- (void);
		Fixed	operator -- (int);

		static Fixed &			min(Fixed &a, Fixed &b);
		static const Fixed &	min(const Fixed &a, const Fixed &b);
		static Fixed &			max(Fixed &a, Fixed &b);
		static const Fixed &	max(const Fixed &a, const Fixed &b);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_fixedPoint;
		const static int	_fractBits;
};

std::ostream &	operator << (std::ostream & o, Fixed const & rhs);


#endif
