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

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack<T>(void) {}
	MutantStack<T>(MutantStack const &src) {*this = src;}
	~MutantStack<T>(void) {}
	MutantStack &operator =(MutantStack const &rhs) {*this = rhs; return *this;}

	T			top(void) { return _stack.front(); };
	size_t		size(void) { return _stack.size(); };
	bool 		empty(void) { return _stack.empty(); }
	void		push(T value) { _stack.push_front( value ); };
	void		pop(void) { _stack.pop_front(); }


	typedef typename std::list<T>::iterator iterator;

	iterator	begin(void) { return _stack.begin(); }
	iterator	end(void) { return _stack.end(); }

private:
	std::list<T>		_stack;
};

#endif
