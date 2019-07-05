/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:25:37 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/05 13:25:53 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <iostream>

template<typename T>
class			Array
{
	public:
		Array<T>(void) 				: _len(0), _array(NULL) { }
		Array<T>(unsigned int n) 	: _len(n) {_array = new T[n];}
		Array<T>(Array<T> const &src) 	{*this = src;}		// copy?
		~Array(void) 					{delete [] _array;}

		Array<T> & operator = (Array<T> const &rhs)
		{
			if (this != &rhs)
			{
				delete [] _array;
				this->_len = rhs.size();
				this->_array = new T[_len];
				for (unsigned int i = 0; i < _len; i++)
					this->_array[i] = rhs.getArr()[i];
			}
			return (*this);
		}
		T & operator [] (unsigned int i)
		{
			if(i > _len - 1)
				throw Array::OutOfLimitsExc();
			return (_array[i]);
		}

		unsigned int	size(void) const {return (_len);}
		T *				getArr(void) const {return (_array);}

		class	OutOfLimitsExc : public std::exception
		{
			public:
				OutOfLimitsExc(void) { }
				OutOfLimitsExc(const OutOfLimitsExc &src) {*this = src;}
				~OutOfLimitsExc(void) throw() { }
				OutOfLimitsExc & operator = (const OutOfLimitsExc &rhs)
					{std::exception::operator=(rhs); return *this;}
				virtual const char* what() const throw()
				{return ("ERROR. Index is out of array limits");};
		};

	private:
		unsigned int		_len;
		T					*_array;
};

#endif
