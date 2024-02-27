/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:16:42 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/22 09:50:43 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

/*
 * Orthodox Canonical Form
*/
Dog::Dog(void): AAnimal("Dog")
{
	std::cout << Y << "Dog: " << E << "Default constructor called"
		<< std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &obj): AAnimal(obj.type)
{
	std::cout << Y << "Dog: " << E << "Copy constructor called" << std::endl;
	if (obj.brain)
		this->brain = new Brain(*obj.brain);
	else
		this->brain = new Brain();
}

Dog	&Dog::operator=(const Dog &obj)
{
	std::cout << Y << "Dog: " << E << "Assignation operator called"
		<< std::endl;
	if ( this != &obj)
	{
		if (this->brain)
			delete this->brain;
		if (obj.brain)
			this->brain = new Brain(*obj.brain);
		else
			this->brain = new Brain();
	}
	return (*this);
}


Dog::~Dog(void)
{
	std::cout << Y << "Dog: " << E << "Destructor called" << std::endl;
	if (this->brain)
		delete this->brain;
}

void	Dog::setIdea(std::string idea)
{
	if (this->brain)
		this->brain->setIdea(idea);
}

std::string	Dog::getIdea(unsigned int index) const
{
	if (this->brain)
		return (this->brain->getIdea(index));
	return ("No brain");
}

unsigned int Dog::getIndex(void) const
{
	if (this->brain)
		return (this->brain->getIndex());
	return (142);
}

/*
 * Membert Funtions
*/
void	Dog::makeSound(void) const
{
	std::cout << Y << "Dog: " << E << "Haf Haf!"
		<< std::endl;
}

std::ostream &Dog::coutBrain(std::ostream &os) const
{
	os << this->brain;
	return (os);
}

std::ostream &operator<<(std::ostream &os, const Dog &obj)
{
	os << O << "Type: " << E << obj.getType() << " ";
	obj.coutBrain(os);
	return (os);
}

std::ostream &operator<<(std::ostream &os, const Dog *obj)
{
	os << O << "Type: " << E << obj->getType() << " ";
	obj->coutBrain(os);
	return (os);
}	
