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

void			searchContact(s_phonebook pb)
{
	std::string		fields[3];

	std::cout << std::setw(10) << "Index|FirstName|LasttName|Nickname" << std::endl;
	for (size_t i = 0; i < pb.contacts_num; i++)
	{
		std::cout << std::setw(10) << i + 1;
		fields[0] = pb.book[i].getFirstName();
		fields[1] = pb.book[i].getLastName();
		fields[2] = pb.book[i].getNickname();
		std::cout << std::setw(10) << fields[0];
		std::cout << std::setw(10) << fields[1];
		std::cout << std::setw(10) << fields[2] << std::endl;
	}
}

Contact			addContact(void)
{
	Contact			newContact;
	std::string		input;
	
	std::cout << "To add a new contact, please fill the following fields." << std::endl;
	std::cout << "Enter First Name: ";
	std::cin >> input;
	newContact.setFirstName(input);
	std::cout << "Enter Last Name: ";
	std::cin >> input;
	newContact.setLastName(input);
	std::cout << "Enter Nickname: ";
	std::cin >> input;
	newContact.setNickname(input);
	std::cout << "Enter Login: ";
	std::cin >> input;
	newContact.setLogin(input);
	std::cout << "Enter Postal Address: ";
	std::cin >> input;
	newContact.setPostalAddr(input);
	std::cout << "Enter Email: ";
	std::cin >> input;
	newContact.setEmail(input);
	std::cout << "Enter Phone Number: ";
	std::cin >> input;
	newContact.setPhone(input);
	std::cout << "Enter Birthday Date: ";
	std::cin >> input;
	newContact.setBirthday(input);
	std::cout << "Enter Favourite Meal: ";
	std::cin >> input;
	newContact.setMeal(input);
	std::cout << "Enter Underwear Color: ";
	std::cin >> input;
	newContact.setUnderwear(input);
	std::cout << "Enter Darkest Secret: ";
	std::cin >> input;
	newContact.setSecret(input);

	return (newContact);
}

int				main(void)
{
	std::string		command;
	t_phonebook		pb;
	
	std::cout << "Hello, dear!" << std::endl;
	std::cout << "Welcome to the (hell) best contact app ever made." << std::endl;
	std::cout << "Let the fun begin!" << std::endl;
	pb.contacts_num = 0;
	while (command.compare("EXIT"))
	{
		std::cout << std::endl << "You have a rich choise of 3 commands:" << std::endl;
		std::cout << "1) ADD" << std::endl << "2) SEARCH" << std::endl << "3) EXIT" << std::endl;
		std::cout << std::endl << "Your command: ";
		std::cin >> command;
		if (!command.compare("ADD"))
		{
			if (pb.contacts_num < 1)
			// if (pb.contacts_num < 8)
				pb.book[++pb.contacts_num - 1] = addContact();
			else
				std::cerr << "ERROR. Your phonebook is full (of crap)" << std::endl;
		}
		else if (!command.compare("SEARCH"))
		{
			if (pb.contacts_num > 0)
				searchContact(pb);
			else
				std::cerr << "ERROR. Your phonebook is empty" << std::endl;
		}
		else if (command.compare("EXIT"))
			std::cerr << "ERROR. Wrong command :(" << std::endl;
	}
	
	return (0);
}
