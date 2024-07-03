/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:14:48 by plandolf          #+#    #+#             */
/*   Updated: 2024/04/30 12:20:23 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;


class AForm{
	protected :
		const std::string _name;
		const std::string _target;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExec;

		AForm();
		virtual void	_execute() const = 0;
	
	public :
		AForm(const std::string& name,const std::string& target, int gradeToSign, int gradeToExec);
		virtual ~AForm();
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		const std::string& getName() const;
		const std::string& getTarget() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		void beSigned(Bureaucrat &b);
		void execute(Bureaucrat const &executor) const;
		
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
		
		class AlreadySignedException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		class ExecutionException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const AForm &f);

#endif