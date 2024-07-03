/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:03:00 by plandolf          #+#    #+#             */
/*   Updated: 2024/04/30 12:55:17 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string& name,const std::string & target, int gradeToSign, int gradeToExec) 
	:_name(name), _target(target), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm() : _gradeToSign(0), _gradeToExec(0)
{
}

AForm::AForm(AForm const &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec)
{
	_signed = other._signed;
}

AForm::~AForm()
{
}

AForm &AForm::operator=(AForm const &other)
{
	_signed = other._signed;
	return *this;
}

const std::string& AForm::getName() const
{
	return _name;
}

const std::string& AForm::getTarget() const
{
	return _target;
}


bool AForm::getSigned() const
{
	return _signed;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExec() const
{
	return _gradeToExec;
}

void AForm::beSigned(Bureaucrat &b)
{
	if (_signed)
		throw AForm::AlreadySignedException();
	if (b.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char *AForm::AlreadySignedException::what() const throw()
{
	return "Form is already signed";
}

const char *AForm::ExecutionException::what() const throw()
{
	return "Form cannot be executed";
}

std::ostream &operator<<(std::ostream &os, AForm const &AForm)
{
	os << "AForm " << AForm.getName() << " is ";
	if (AForm.getSigned())
		os << "signed";
	else
		os << "not signed";
	os << " and requires grade " << AForm.getGradeToSign() << " to be signed and grade " << AForm.getGradeToExec() << " to be executed ";
	return os;
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!_signed)
		throw AForm::ExecutionException();
	if (executor.getGrade() > _gradeToExec)
		throw AForm::GradeTooLowException();
	_execute();
}