/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:43:06 by plandolf          #+#    #+#             */
/*   Updated: 2024/01/24 11:04:52 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <limits>
# include "Contact.hpp"

class PhoneBook 
{
	private:
		Contact		_contacts[8];
		int			_checkInput(void) const;
	
	public:
		PhoneBook();
		~PhoneBook();
		
		void		addContact(void);
		void		printContacts(void) const;
		void		searchContact(void) const;
		void		welcome(void) const;
		int			getNbContacts(void) const;
};

#endif