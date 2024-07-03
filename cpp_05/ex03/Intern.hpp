/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:59:17 by plandolf          #+#    #+#             */
/*   Updated: 2024/04/30 17:33:32 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;
class Intern;

typedef AForm* (Intern::*CF)(const std::string&) const;

class Intern
{
	private :
		static const std::string	_formNames[3];
		static const CF 			_forms[3];

		AForm* _PresidentalPardonForm(const std::string& target) const;
		AForm* _RobotomyRequestForm(const std::string& target) const;
		AForm* _ShrubberyCreationForm(const std::string& target) const;
		
	public:
		Intern();
		Intern(const Intern& other);
		virtual ~Intern();
		
		Intern& operator=(const Intern& other);
		AForm* makeForm(const std::string& formName, const std::string& target);
		
		class FormNotFoundException : public std::exception
		{
			virtual const char* what() const throw();
		};
};
#endif