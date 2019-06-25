/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 22:32:15 by dstepane          #+#    #+#             */
/*   Updated: 2019/06/24 22:32:17 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.class.hpp"
# include <iomanip>

typedef struct		s_phonebook
{
	Contact			book[8];
	size_t			contacts_num;

}					t_phonebook;

Contact			addContact();
void			searchContact(s_phonebook pb);



#endif
