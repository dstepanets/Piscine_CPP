/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 22:17:32 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/24 22:17:34 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void			eof_exit(void)
{
	if (std::cin.eof())
	{
		std::cerr << "\nCtrl + D? I'll miss you, honey!" << std::endl;
		exit(0);
	}
}

int				main(void)
{
	std::string		command;
	t_phonebook		pb;
	
	std::cout << "Hello, dear!" << std::endl;
	std::cout << "Welcome to the (hell) best contacts app ever made." << std::endl;
	std::cout << "Let the fun begin!" << std::endl;
	pb.contacts_num = 0;
	while (command.compare("EXIT"))
	{
		std::cout << std::endl << "You have a rich choise of 3 commands:" << std::endl;
		std::cout << "* ADD" << std::endl << "* SEARCH" << std::endl << "* EXIT" << std::endl;
		std::cout << std::endl << "Your command: ";
		std::getline(std::cin, command);
		eof_exit();
		if (!command.compare("ADD"))
		{
			if (pb.contacts_num < 8)
				pb.book[++pb.contacts_num - 1] = addContact();
			else
				std::cerr << "ERROR. Your phonebook is full (of crap)." << std::endl;
		}
		else if (!command.compare("SEARCH"))
		{
			if (pb.contacts_num > 0)
				searchContact(pb);
			else
				std::cerr << "ERROR. Your phonebook is so empty..." << std::endl;
		}
		else if (command.compare("EXIT"))
			std::cerr << "ERROR. Don't know what you mean." << std::endl;
	}
	std::cout << "Please come back, it's so much fun!" << std::endl;
	return (0);
}
