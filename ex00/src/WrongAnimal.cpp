/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:47:25 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/19 01:18:45 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

/*
 * Orthodox Canonical Form
*/
WrongAnimal::WrongAnimal(void)
{
	std::cout << B << "WrongAnimal: " << E << "Default constructor called"
		<< std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string _type)
{
	std::cout << B << "WrongAnimal: " << E << "Type constructor called" << std::endl;
	this->type = _type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << B << "WrongAnimal: " << E << "Copy constructor called" << std::endl;
	this->type = obj.type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << B << "WrongAnimal: " << E << "Assignation operator called"
		<< std::endl;
	this->type = obj.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << B << "WrongAnimal: " << E << "Destructor called" << std::endl;
}

/*
 * Get Methods
*/
std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

/*
 * Members Funtions
*/
void	WrongAnimal::makeSound(void) const
{
	std::cout << B << "Type: " << E << this->type << "(Wrong Animal sound)" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const WrongAnimal &obj)
{
	os << B << "Type: " << E << obj.getType();
	return (os);
}

std::ostream &operator<<(std::ostream &os, const WrongAnimal *obj)
{
	if (obj)
	   os << B << "Type: " << E << obj->getType();
	return (os);
}
