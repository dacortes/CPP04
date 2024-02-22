/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 02:02:14 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/22 09:50:41 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

/*
 * Orthodox Canonical Form
*/
AAnimal::AAnimal(void)
{
	std::cout << G << "Animal: " << E << "Default constructor called"
		<< std::endl;
	type = "Animal";
}

AAnimal::AAnimal(std::string _type)
{
	std::cout << G << "Animal: " << E << "Type constructor called" << std::endl;
	this->type = _type;
}

AAnimal::AAnimal(const AAnimal &obj)
{
	std::cout << G << "Animal: " << E << "Copy constructor called" << std::endl;
	this->type = obj.type;
}

AAnimal	&AAnimal::operator=(const AAnimal &obj)
{
	std::cout << G << "Animal: " << E << "Assignation operator called"
		<< std::endl;
	this->type = obj.type;
	return (*this);
}


AAnimal::~AAnimal(void)
{
	std::cout << G << "Animal: " << E << "Destructor called" << std::endl;
}


/*
 * Get Methods
*/
std::string	AAnimal::getType(void) const
{
	return (this->type);
}

/*
 * Members Funtions
*/
void	AAnimal::makeSound(void) const
{
	std::cout << F << "Type: " << E << this->type << "(sound)" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const AAnimal &obj)
{
	if (obj.getType() == "Cat")
	   os << O << "Type: " << E << obj.getType();
	else if (obj.getType() == "Dog")
	   os << Y << "Type: " << E << obj.getType();
	else
	   os << F << "Type: " << E << obj.getType();
	return (os);
}

std::ostream &operator<<(std::ostream &os, const AAnimal *obj)
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
