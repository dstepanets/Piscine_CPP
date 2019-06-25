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

void			displayContact(s_phonebook pb)
{
	
	size_t		i = 0;

	do
	{
		std::cout << "Input an index of a contact to display:" << std::endl;
		if (!(std::cin >> i))
		{
			std::cerr << "ERROR. I need a good old unsigned int, my dear.\n" << std::endl;
		}
		else if (i > 0 && i <= pb.contacts_num)
		{
			std::cout << "\nFirst Name:\t\t" << pb.book[i - 1].getFirstName() << std::endl;
			std::cout << "Last Name:\t\t" << pb.book[i - 1].getLastName() << std::endl;
			std::cout << "Nickname:\t\t" << pb.book[i - 1].getNickname() << std::endl;
			std::cout << "Login:\t\t\t" << pb.book[i - 1].getLogin() << std::endl;
			std::cout << "Postal Address:\t\t" << pb.book[i - 1].getPostalAddr() << std::endl;
			std::cout << "Email Address:\t\t" << pb.book[i - 1].getEmail() << std::endl;
			std::cout << "Phone Number:\t\t" << pb.book[i - 1].getPhone() << std::endl;
			std::cout << "Birthday Date:\t\t" << pb.book[i - 1].getBirthday() << std::endl;
			std::cout << "Favourite Meal:\t\t" << pb.book[i - 1].getMeal() << std::endl;
			std::cout << "Underwear Color:\t" << pb.book[i - 1].getUnderwear() << std::endl;
			std::cout << "Darkest Secret:\t\t" << pb.book[i - 1].getSecret() << std::endl;
		}
		else
			std::cerr << "ERROR. Wrong index. Try again!\n" << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	} while (!(i > 0 && i <= pb.contacts_num));

}

void			searchContact(s_phonebook pb)
{
	std::string		fields[3];

	std::cout << std::endl;
	std::cout << std::setw(11) << "INDEX|";
	std::cout << std::setw(11) << "FIRST NAME|";
	std::cout << std::setw(11) << "LAST NAME|";
	std::cout << std::setw(11) << "NICKNAME|" << std::endl;
	for (size_t i = 0; i < pb.contacts_num; i++)
	{
		fields[0] = pb.book[i].getFirstName();
		fields[1] = pb.book[i].getLastName();
		fields[2] = pb.book[i].getNickname();
		for (int j = 0; j < 3; j++)
			if (fields[j].length() > 10)
				fields[j] = fields[j].substr(0, 9) + ".";
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << fields[0] << "|";
		std::cout << std::setw(10) << fields[1] << "|";
		std::cout << std::setw(10) << fields[2] << "|" << std::endl;
	}
	std::cout << std::endl;
	displayContact(pb);
}

Contact			addContact(void)
{
	Contact			newContact;
	std::string		input;
	
	std::cout << "\nTo add a new contact, please fill the following fields." << std::endl;
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
	std::cout << "Welcome to the (hell) best contacts app ever made." << std::endl;
	std::cout << "Let the fun begin!" << std::endl;
	pb.contacts_num = 0;
	while (command.compare("EXIT"))
	{
		std::cout << std::endl << "You have a rich choise of 3 commands:" << std::endl;
		std::cout << "* ADD" << std::endl << "* SEARCH" << std::endl << "* EXIT" << std::endl;
		std::cout << std::endl << "Your command: ";
		std::cin >> command;
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
	return (0);
}
