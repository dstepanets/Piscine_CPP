/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 22:42:44 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/05 22:42:46 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;


	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737); 
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

std::cout << "************************ MORE TESTS ******************************" << std::endl;

	MutantStack<int> 	ms;
	ms.push(10);
	ms.push(21);
	ms.push(-42);
	ms.push(84);
	ms.push(168);
	ms.push(-999);

	std::cout << "ms:	";
	for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); it++)
		std::cout << *it << "| ";
	std::cout << std::endl;


	std::cout << "\n=== SWAP ===" << std::endl;
	ms.swap(mstack);

	std::cout << "ms:	";
	for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); it++)
		std::cout << *it << "| ";
	std::cout << std::endl;
	std::cout << "mstack:	";
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
		std::cout << *it << "| ";
	std::cout << std::endl;

	std::cout << "ms size:	" << ms.size() << std::endl;
	std::cout << "mstack size:	" << mstack.size() << std::endl;


	std::cout << "\n=== EMPTY? ===" << std::endl;
	std::cout << "ms empty?:	" << ms.empty() << std::endl;

	ms.pop();
	std::cout << "ms pop:	";
	for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); it++)
		std::cout << *it << "| ";
	std::cout << std::endl;
	std::cout << "ms top:	" << ms.top() << std::endl;

	std::cout << "ms pop all." << std::endl;;
	while (!ms.empty())
		ms.pop();
	std::cout << "ms size:	" << ms.size() << std::endl;


	std::cout << "\n=== ASSINMENT OPERATOR ===" << std::endl;
	ms = mstack;
	std::cout << "ms = mstack. ms now:	";
	for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); it++)
		std::cout << *it << "| ";
	std::cout << std::endl;

	return (0);
}


/*	std::list output:
	17
	1
	0
	737
	5
	3
	5
*/