/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:48:41 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/19 17:17:35 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

/*
 * Orthodox Canonical Form
*/
Cat::Cat(void): Animal("Cat")
{
	std::cout << O << "Cat: " << E << "Default constructor called"
		<< std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &obj): Animal(obj.type)
{
	std::cout << G << "Cat: " << E << "Copy constructor called" << std::endl;
	if (obj.brain)
		this->brain = new Brain(*obj.brain);
	else
		this->brain = new Brain();
}

Cat	&Cat::operator=(const Cat &obj)
{
	std::cout << O << "Cat: " << E << "Assignation operator called"
		<< std::endl;
	if (this  != &obj)
	{
		if (this->brain)
		{
			delete this->brain;
			this->brain = new Brain(*obj.brain);
		}
		else
			this->brain = new Brain();
		this->type = obj.type;
	}
	return (*this);	
}

Cat::~Cat(void)
{
	std::cout << O << "Cat: " << E << "Destructor called" << std::endl;
	if (this->brain)
		delete this->brain;
}

void	Cat::setIdea(std::string idea)
{
	if (this->brain)
		this->brain->setIdea(idea);
}

std::string	Cat::getIdea(unsigned int index) const
{
	if (this->brain)
		return (this->brain->getIdea(index));
	return ("No brain");
}

unsigned int Cat::getIndex(void) const
{
	if (this->brain)
		return (this->brain->getIndex());
	return (142);
}

/*
 * Membert Funtions
*/
void	Cat::makeSound(void) const
{
	std::cout << O << "Cat: " << E << "Mnau Mnau!"
		<< std::endl;
}

std::ostream &Cat::coutBrain(std::ostream &os) const
{
	os << this->brain;
	return (os);
}

std::ostream &operator<<(std::ostream &os, const Cat &obj)
{
	os << O << "Type: " << E << obj.getType() << " ";
	obj.coutBrain(os);
	return (os);
}

std::ostream &operator<<(std::ostream &os, const Cat *obj)
{
	os << O << "Type: " << E << obj->getType() << " ";
	obj->coutBrain(os);
	return (os);
}	
