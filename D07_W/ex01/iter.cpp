/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 22:07:09 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/04 22:07:11 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void		print_arr_member(T const & var, size_t const &i)
{
	std::cout << "array[" << i << "]: " << var << std::endl;
}

template <typename T>
void		iter(T *arr, size_t len, void (*f)(T const &, size_t const &))
{
	if (arr == NULL)
		return ;
	for (size_t i = 0; i < len; i++)
		f(arr[i], i);
	std::cout << std::endl;
}

int				main(void)
{
	std::cout << "=== Array of strings === " << std::endl;
	std::string		sarr[6] = { "Life", "is", "(a crap)", "easy", "with", "templates!" };
	iter<std::string>(sarr, 6, print_arr_member<std::string>);

	std::cout << "=== Array of ints === " << std::endl;
	int		iarr[5] = { 99, -21165, 666, 42, 0 };
	iter<int>(iarr, 5, print_arr_member<int>);

	std::cout << "=== Array of doubles === " << std::endl;
	double		darr[4] = { 0.12414, 32132133.321312, 0.0, 42.4242424242 };
	iter<double>(darr, 4, print_arr_member<double>);

	std::cout << "=== Array of chars === " << std::endl;
	char		carr[10] = { 'U', 'A', ' ', 'f', 'o', 'r', 'e', 'v', 'e', 'r' };
	iter<char>(carr, 10, print_arr_member<char>);

	return (0);
}
