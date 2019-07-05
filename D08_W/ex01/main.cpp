/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 20:19:45 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/05 20:19:47 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int			main(void) 
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\n=========== MORE TESTS =============" << std::endl;

	Span s = Span(10);
	s.addRange(-4, 0);
	s.addRange(10, 14);
	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;

	try
	{
		s.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Span s2;
	try
	{
		std::cout << s2.shortestSpan() << std::endl;
		std::cout << s2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	Span s3(1000001);	// 1 mln
	s3.addRange(-500000, 500000);
	std::cout << s3.shortestSpan() << std::endl;
	std::cout << s3.longestSpan() << std::endl << std::endl;

	Span s4(2);
	s4.addRange(-1, 0);
	std::cout << s4.shortestSpan() << std::endl;
	std::cout << s4.longestSpan() << std::endl << std::endl;

	Span s5(6);
	s5.addNumber(5);
	s5.addNumber(-5);
	s5.addNumber(-25);
	s5.addNumber(25);
	s5.addNumber(50);
	s5.addNumber(100);
	std::cout << s5.shortestSpan() << std::endl;
	std::cout << s5.longestSpan() << std::endl;

	return (0);
}