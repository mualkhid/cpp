#include "Form.hpp"

void Form::checkGrade(int grade)
{
		if (grade < high)
			throw Bureaucrat::GradeTooHighException();
		if (grade > low)
			throw Bureaucrat::GradeTooLowException();
}

Form::Form() : _signed(false), _name("form"), _signGrade(150), _executeGrade(150) {}

Form::Form(const std::string &name, int signGrade, int executeGrade) : _signed(false), _name(name), _signGrade(signGrade), _executeGrade(executeGrade)
{
	checkGrade(signGrade);
	checkGrade(executeGrade);
	std::cout << "Form created" << std::endl;
}

Form::Form(const Form &other) : _signed(other._signed), _name(other._name), _signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
	std::cout << "Copy of form created" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destroyed" << std::endl;
}

Form &Form::operator=(const Form &other)
{
	std::cout << "Form assignment operator" << std::endl;
	if (this == &other)
		return *this;
	return *this;
}

const std::string &Form::getName() const
{
	return this->_name;
}

bool Form::getSigned() const
{
	return this->_signed;
}

int Form::getSignGrade() const
{
	return this->_signGrade;
}

int Form::getExecuteGrade() const
{
	return this->_executeGrade;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_signGrade)
	{
		this->_signed = true;
		std::cout <<  bureaucrat.getName() << " signed " << this->_name << std::endl;
	}
	else
	{
		std::cout << bureaucrat.getName() << " couldn’t sign  " << this->_name << " because ";
		throw Form::GradeTooLowException();

	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Exception: grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Exception: grade too low";
}

std::ostream &operator<<(std::ostream &os, const Form &instance)
{
	os << "Form " << instance.getName()
	   << ", status: " << (instance.getSigned() ? "signed" : "not signed")
	   << ", sign grade: " << instance.getSignGrade()
	   << ", execute grade: " << instance.getExecuteGrade()
	   << std::endl;
	return os;
}