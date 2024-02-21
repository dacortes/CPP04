/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 02:02:14 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/21 13:45:58 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

/*
 * Orthodox Canonical Form
*/
Animal::Animal(void)
{
	std::cout << G << "Animal: " << E << "Default constructor called"
		<< std::endl;
	type = "Animal";
}

Animal::Animal(std::string _type)
{
	std::cout << G << "Animal: " << E << "Type constructor called" << std::endl;
	this->type = _type;
}

Animal::Animal(const Animal &obj)
{
	std::cout << G << "Animal: " << E << "Copy constructor called" << std::endl;
	this->type = obj.type;
}

Animal	&Animal::operator=(const Animal &obj)
{
	std::cout << G << "Animal: " << E << "Assignation operator called"
		<< std::endl;
	this->type = obj.type;
	return (*this);
}


Animal::~Animal(void)
{
	std::cout << G << "Animal: " << E << "Destructor called" << std::endl;
}


/*
 * Get Methods
*/
std::string	Animal::getType(void) const
{
	return (this->type);
}

/*
 * Members Funtions
*/
void	Animal::makeSound(void) const
{
	std::cout << F << "Type: " << E << this->type << "(sound)" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Animal &obj)
{
	if (obj.getType() == "Cat")
	   os << O << "Type: " << E << obj.getType();
	else if (obj.getType() == "Dog")
	   os << Y << "Type: " << E << obj.getType();
	else
	   os << F << "Type: " << E << obj.getType();
	return (os);
}

std::ostream &operator<<(std::ostream &os, const Animal *obj)
{
	if (obj)
	{
		if (obj->getType() == "Cat")
		   os << O << "Type: " << E << obj->getType();
		else if (obj->getType() == "Dog")
		   os << Y << "Type: " << E << obj->getType();
		else
		   os << F << "Type: " << E << obj->getType();
	}
	return (os);
}
