#include "Template.hpp"
#include <iostream>

/*======================CONSTRUCTORS=================================*/

Template::Template(void) : _var(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Template::Template(int const var) : _var(var)
{
	std::cout << "Parametrized constructor called" << std::endl;
}

Template::Template(Template const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Template::~Template(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*======================GETTERS-SETTERS============================*/

int					Template::getVar(void) const
{
	return (this->_var);
}

void				Template::setVar(int var)
{
	this->_var = var;
}

/*======================OPERATORS=================================*/

Template & 			Template::operator = (Template const &rhs)
{
	if (this != &rhs)
		this->_var = rhs._var;
	return (*this);
}

std::ostream &		operator << ( std::ostream & o, Template const &i )
{
	o << i.getVar();
	return (o);
}
