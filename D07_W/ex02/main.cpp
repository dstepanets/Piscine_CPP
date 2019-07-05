/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:20:41 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/05 13:20:43 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"


int				main(void)
{
	Array<int>		iarr(7);

	std::cout << "Array of <" << iarr.size() << "> integers, initialized by default:" << std::endl;
	for (unsigned int i = 0; i < iarr.size(); i++)
		std::cout << i << "[" << iarr[i] << "] ";
	std::cout << std::endl << std::endl;

	srand(static_cast<unsigned int>(time(0)));
	for (unsigned int i = 0; i < iarr.size(); i++)
	{
		int	t = static_cast<int>(rand() % 1000);
		if (t % 2)
			t = -t;
		iarr[i] = t;
	}
	
	std::cout << "Array of <" << iarr.size() << "> integers, assigned random values:" << std::endl;
	for (unsigned int i = 0; i < iarr.size(); i++)
		std::cout << i << "[" << iarr[i] << "] ";
	std::cout << std::endl << std::endl;


	Array<int>		cpy(iarr);

	std::cout << "Copy of the array by copy constructor:" << std::endl;
	for (unsigned int i = 0; i < cpy.size(); i++)
		std::cout << i << "[" << cpy[i] << "] ";
	std::cout << std::endl << std::endl;

	Array<int>		cpy2(iarr);

	std::cout << "Copy of the array by assignment operator:" << std::endl;
	for (unsigned int i = 0; i < cpy2.size(); i++)
		std::cout << i << "[" << cpy2[i] << "] ";
	std::cout << std::endl << std::endl;


	std::cout << "Modified copy and original compare:" << std::endl;
	for (unsigned int i = 0; i < cpy.size(); i++)
		cpy[i] = 42; 
	for (unsigned int i = 0; i < cpy.size(); i++)
		std::cout << i << "[" << cpy[i] << "] ";
	std::cout << std::endl;
	for (unsigned int i = 0; i < iarr.size(); i++)
		std::cout << i << "[" << iarr[i] << "] ";
	std::cout << std::endl << std::endl;



	Array<std::string>		s(3);
	std::cout << "Array of <" << s.size() << "> strings:" << std::endl;
	s[0] = "C++"; s[1] = "is"; s[2] = "fun!";
	for (unsigned int i = 0; i < s.size(); i++)
		std::cout << i << "[" << s[i] << "] ";
	std::cout << std::endl << std::endl;


	std::cout << "Trying to access 4th index of this array:" << std::endl;
	try
	{
		std::cout << s[3] << "] ";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
