/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 23:22:55 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/24 23:22:56 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>

class			Contact
{

public:

	void			setFirstName(std::string);
	void			setLastName(std::string);
	void			setNickname(std::string);
	void			setLogin(std::string);
	void			setPostalAddr(std::string);
	void			setEmail(std::string);
	void			setPhone(std::string);
	void			setBirthday(std::string);
	void			setMeal(std::string);
	void			setUnderwear(std::string);
	void			setSecret(std::string);
	std::string		getFirstName(void);
	std::string		getLastName(void);
	std::string		getNickname(void);
	std::string		getLogin(void);
	std::string		getPostalAddr(void);
	std::string		getEmail(void);
	std::string		getPhone(void);
	std::string		getBirthday(void);
	std::string		getMeal(void);
	std::string		getUnderwear(void);
	std::string		getSecret(void);

	Contact(void);
	~Contact(void);

private:
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_login;
	std::string		_postal_address;
	std::string		_email;
	std::string		_phone;
	std::string		_birthday;
	std::string		_meal;
	std::string		_underwear;
	std::string		_secret;

};


#endif
