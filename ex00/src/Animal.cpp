/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 02:02:14 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/18 03:11:06 by dacortes         ###   ########.fr       */
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
}

Animal::Animal(std::string _type)
{
	std::cout << G << "Animal: " << E << "Copy constructor called" << std::endl;
	this->type = _type;
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
	std::cout << G << "Animal: " << E << " Destructor called" << std::endl;
}

/*
 * Get Methods
*/
std::string	Animal::getType(void) const;
{
	return (this->type);
}

/*
 * Members Funtions
*/
void	Animal::makeSound(void) const
{
	if (this->type == "Cat")
		std::cout << O << "type: " << E << this->type << "Mnau Mnau!" \
			<< std::endl;
	else if (this->type == "Dog")
		std::cout << Y << "Type: " << E << this->type << "Haf Haf!" << std::endl;
	else
		std::cout << F << "Type: " << E << this->type << "(sound)" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Animal &obj)
{
	if (obj.getType() == "Cat")
	   os << O << "Type: " << E << obj.getType() << std::endl;
	else if (obj.getType() == "Dog")
	   os << Y << "Type: " << E << obj.getType() << std::endl;
	else
	   os << F << "Type: " << E << obj.getType() << std::endl;
	return (os);
}

std::ostream &operator<<(std::ostream &os, const Animal *obj)
{
	if (obj)
	{
		if (obj->getType() == "Cat")
		   os << O << "Type: " << E << obj->getType() << std::endl;
		else if (obj->getType() == "Dog")
		   os << Y << "Type: " << E << obj->getType() << std::endl;
		else
		   os << F << "Type: " << E << obj->getType() << std::endl;
	}
	return (os);
}
