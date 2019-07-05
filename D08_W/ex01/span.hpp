/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 20:19:37 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/05 20:19:38 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class					Span
{
	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const &src);
		~Span(void);

		Span &	operator = (const Span &rhs);

		class	FullExc : public std::exception
		{
		public:
			FullExc(void);
			FullExc(const FullExc &src);
			~FullExc(void) throw();
			FullExc& operator = (const FullExc &rhs);
			virtual const char* what() const throw();
		};
		class	EmptyExc : public std::exception
		{
		public:
			EmptyExc(void);
			EmptyExc(const EmptyExc &src);
			~EmptyExc(void) throw();
			EmptyExc& operator = (const EmptyExc &rhs);
			virtual const char* what() const throw();
		};

		// int		getVar(void) const;
		// void		setVar(int var);

		void			addNumber(int num);
		void			addRange(int x, int y);

		int				shortestSpan(void);
		int				longestSpan(void);


	private:
		unsigned int 			_n;
		std::vector<int>		_v;

};

#endif

