/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:46:56 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/25 18:46:58 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact			addContact(void)
{
	Contact			newContact;
	std::string		input = "";
	
	std::cout << "\nTo add a new contact, please fill the following fields." << std::endl;

	std::cout << "Enter First Name: ";
	std::getline(std::cin, input);
	eof_exit();
	newContact.setFirstName(input);

	std::cout << "Enter Last Name: ";
	std::getline(std::cin, input);
	eof_exit();
	newContact.setLastName(input);

	std::cout << "Enter Nickname: ";
	std::getline(std::cin, input);
	eof_exit();	
	newContact.setNickname(input);

	std::cout << "Enter Login: ";
	std::getline(std::cin, input);
	eof_exit();
	newContact.setLogin(input);

	std::cout << "Enter Postal Address: ";
	std::getline(std::cin, input);
	eof_exit();	
	newContact.setPostalAddr(input);

	std::cout << "Enter Email: ";
	std::getline(std::cin, input);
	eof_exit();	
	newContact.setEmail(input);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, input);
	eof_exit();	
	newContact.setPhone(input);

	std::cout << "Enter Birthday Date: ";
	std::getline(std::cin, input);
	eof_exit();
	newContact.setBirthday(input);

	std::cout << "Enter Favourite Meal: ";
	std::getline(std::cin, input);
	eof_exit();
	newContact.setMeal(input);

	std::cout << "Enter Underwear Color: ";
	std::getline(std::cin, input);
	eof_exit();
	newContact.setUnderwear(input);

	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, input);
	eof_exit();
	newContact.setSecret(input);

	return (newContact);
}
