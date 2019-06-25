/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 00:06:53 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/25 00:06:58 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void			Contact::setFirstName(std::string input)
{
	this->_first_name = input;
}

void			Contact::setLastName(std::string input)
{
	this->_last_name = input;
}

void			Contact::setNickname(std::string input)
{
	this->_nickname = input;
}

void			Contact::setLogin(std::string input)
{
	this->_login = input;
}

void			Contact::setPostalAddr(std::string input)
{
	this->_postal_address = input;
}

void			Contact::setEmail(std::string input)
{
	this->_email = input;
}

void			Contact::setPhone(std::string input)
{
	this->_phone = input;
}

void			Contact::setBirthday(std::string input)
{
	this->_birthday = input;
}

void			Contact::setMeal(std::string input)
{
	this->_meal = input;
}

void			Contact::setUnderwear(std::string input)
{
	this->_underwear = input;
}

void			Contact::setSecret(std::string input)
{
	this->_secret= input;
}

std::string 	Contact::getFirstName(void)
{
	return (this->_first_name);
}

std::string 	Contact::getLastName(void)
{
	return (this->_last_name);
}

std::string 	Contact::getNickname(void)
{
	return (this->_nickname);
}

std::string 	Contact::getLogin(void)
{
	return (this->_login);
}

std::string 	Contact::getPostalAddr(void)
{
	return (this->_postal_address);
}

std::string 	Contact::getEmail(void)
{
	return (this->_email);
}

std::string 	Contact::getPhone(void)
{
	return (this->_phone);
}

std::string 	Contact::getBirthday(void)
{
	return (this->_birthday);
}

std::string 	Contact::getMeal(void)
{
	return (this->_meal);
}

std::string 	Contact::getUnderwear(void)
{
	return (this->_underwear);
}

std::string 	Contact::getSecret(void)
{
	return (this->_secret);
}

Contact::Contact(void) { return; }

Contact::~Contact(void) { return; }
