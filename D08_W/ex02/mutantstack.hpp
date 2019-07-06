/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 22:42:38 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/05 22:42:39 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <vector>
#include <stack>
#include <list>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>(void) {}
		MutantStack<T>(MutantStack const &src) {*this = src;}
		~MutantStack<T>(void) {}
		MutantStack<T> &operator = (MutantStack<T> const &rhs)
			{this->_mstack = rhs._mstack; return *this;}

		T &			top(void) { return _mstack.front(); };
		size_t		size(void) { return _mstack.size(); };
		bool 		empty(void) { return _mstack.empty(); }
		void		push(T var) { _mstack.push_front( var ); };
		void		pop(void) { _mstack.pop_front(); }
		void		swap(MutantStack<T> &rhs) { std::swap(*this, rhs); }

		typedef typename std::list<T>::iterator iterator;
		iterator	begin(void) { return _mstack.begin(); }
		iterator	end(void) { return _mstack.end(); }

	private:
		std::list<T>		_mstack;
};

#endif
