/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:47:21 by plandolf          #+#    #+#             */
/*   Updated: 2024/01/24 11:06:00 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact{
	private :
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickname;
		std::string		_phoneNumber;
		std::string		_darkestSecret;
		int 			_index;

		std::string		_maxLen(std::string str) const;
		std::string		_getInput(std::string str) const;
	
	public:
		Contact();
		~Contact();
		
		void			setIndex(int index);
		void			init(void);
		void			print(int index) const;
		void			view(int index) const;
		std::string		getFirstName(void) const;
};

#endif