/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 21:13:32 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/02 21:13:34 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"
#include <iostream>

/*==============================CONSTRUCTORS=================================*/

OfficeBlock::OfficeBlock(void) : _intern(NULL), _signer(NULL), _executor(NULL) {}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor)
{
	this->setIntern(intern);
	this->setSigner(signer);
	this->setExecutor(executor);
}

OfficeBlock::~OfficeBlock(void) {}

/*==============================GETTERS-SETTERS==============================*/

Intern		*OfficeBlock::getIntern(void) const {return this->_intern;}
Bureaucrat	*OfficeBlock::getSigner(void) const {return this->_signer;}
Bureaucrat	*OfficeBlock::getExecutor(void) const {return this->_executor;}

void		OfficeBlock::setIntern(Intern *intern)
{
	if (intern == NULL)
		throw NoInternException();
	else
		this->_intern = intern;
}
void		 OfficeBlock::setSigner(Bureaucrat *signer)
{
	if (signer == NULL)
		throw NoSignerException();
	else
		this->_signer = signer;
}
void 		OfficeBlock::setExecutor(Bureaucrat *executor)
{
	if (executor == NULL)
		throw NoExecutorException();
	else
		this->_executor = executor;
}

/*===========================FUNCTIONS=======================================*/

void 			OfficeBlock::doBureaucracy(std::string formName, std::string target)
{
	if (!this->_intern)
		throw OfficeBlock::NoInternException();
	if (!this->_signer)
		throw OfficeBlock::NoSignerException();
	if (!this->_executor)
		throw OfficeBlock::NoExecutorException();

	Form *form = this->_intern->makeForm(formName, target);

	if (!form)
		throw OfficeBlock::NoFormException();

	form->beSigned(*this->_signer);
	form->execute(*this->_executor);
	delete form;
}

/*===========================EXCEPTIONS======================================*/

OfficeBlock::NoInternException::NoInternException(void) {}
OfficeBlock::NoInternException::NoInternException(NoInternException const &rhs) {(void(rhs));}
OfficeBlock::NoInternException::~NoInternException(void) throw() {}
OfficeBlock::NoInternException & OfficeBlock::NoInternException::operator =
			(OfficeBlock::NoInternException const &rhs)
	{(void(rhs)); return *this;}
const char* OfficeBlock::NoInternException::what() const throw()
	{return ("No intern!");}

OfficeBlock::NoSignerException::NoSignerException(void) {}
OfficeBlock::NoSignerException::NoSignerException(NoSignerException const &rhs) {(void(rhs));}
OfficeBlock::NoSignerException::~NoSignerException(void) throw() {}
OfficeBlock::NoSignerException & OfficeBlock::NoSignerException::operator =
			(OfficeBlock::NoSignerException const &rhs)
	{(void(rhs)); return *this;}
const char* OfficeBlock::NoSignerException::what() const throw()
	{return ("No Signer!");}

OfficeBlock::NoExecutorException::NoExecutorException(void) {}
OfficeBlock::NoExecutorException::NoExecutorException(NoExecutorException const &rhs) {(void(rhs));}
OfficeBlock::NoExecutorException::~NoExecutorException(void) throw() {}
OfficeBlock::NoExecutorException & OfficeBlock::NoExecutorException::operator =
			(OfficeBlock::NoExecutorException const &rhs)
	{(void(rhs)); return *this;}
const char* OfficeBlock::NoExecutorException::what() const throw()
	{return ("No Executor!");}

OfficeBlock::NoFormException::NoFormException(void) {}
OfficeBlock::NoFormException::NoFormException(NoFormException const &rhs) {(void(rhs));}
OfficeBlock::NoFormException::~NoFormException(void) throw() {}
OfficeBlock::NoFormException & OfficeBlock::NoFormException::operator =
			(OfficeBlock::NoFormException const &rhs)
	{(void(rhs)); return *this;}
const char* OfficeBlock::NoFormException::what() const throw()
	{return ("Form wasn't created.");}
