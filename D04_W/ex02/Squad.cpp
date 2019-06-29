/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 17:59:53 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/29 17:59:54 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

/*==============================CONSTRUCTORS=================================*/

Squad::Squad(void): _units_count(0), _squad(NULL) {}

Squad::Squad(Squad const & arg)
{
	t_squad		*src;
	t_squad		*cpy;

	_units_count = arg._units_count;

	src = arg._squad;
	cpy = _squad;
	while (src)
	{
		cpy = (cpy == NULL) ? new t_squad : NULL;
		cpy->marine = src->marine;
		cpy->next = NULL;
		cpy = cpy->next;
		src = src->next;
	}
	this->_squad = cpy;
	delete src;

}

Squad::~Squad( void )
{
	t_squad		*del;

	while (_squad)
	{
		del = _squad;
			_squad = _squad->next;
		delete del->marine;
		delete del;
	}
}

/*================================OPERATORS==================================*/

Squad &  		Squad::operator = (Squad const & rhs)
{
	if (this == &rhs)
		return (*this);

	_units_count = rhs._units_count;
	t_squad  *del;

	while (_squad)
	{
		del = _squad;
			_squad = _squad->next;
		delete del->marine;
		delete del;
	}


	t_squad		*src;
	t_squad		*cpy;

	src = rhs._squad;
	cpy = _squad;
	while (src)
	{
		cpy = (cpy == NULL) ? new t_squad : NULL;
		cpy->marine = src->marine;
		cpy->next = NULL;
		cpy = cpy->next;
		src = src->next;
	}
	this->_squad = cpy;
	delete src;

	return (*this);
}

/*==============================GETTERS-SETTERS==============================*/

int				Squad::getCount(void) const
{
	return _units_count;
}

ISpaceMarine*	Squad::getUnit(int i) const
{
	t_squad		*cur;

	cur = _squad;
	while (cur && i-- > 0)
		cur = cur->next;
	return (cur->marine);
}

/*===========================FUNCTIONS=======================================*/

int				Squad::push(ISpaceMarine* m)
{
	t_squad	*cur;

	if (m == NULL)
		return (_units_count);
	if (_squad == NULL)
	{
		_squad = new t_squad;
		_squad->marine = m;
		_squad->next = NULL;
	}
	else
	{
		cur = _squad;
		while (cur->next)
		{
			if (cur->marine == m)
				return (_units_count);
			cur = cur->next;
		}
		cur->next = new t_squad;
		cur->next->marine = m;
		cur->next->next = NULL;
	}
	_units_count++;
	return (_units_count);
}
