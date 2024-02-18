/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:16:42 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/18 18:06:29 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

/*
 * Orthodox Canonical Form
*/
Dog::Dog(void): Animal("Dog")
{
	std::cout << Y << "Dog: " << E << "Default constructor called"
		<< std::endl;
}

Dog::Dog(const Dog &obj): Animal(obj.type)
{
	std::cout << Y << "Dog: " << E << "Copy constructor called" << std::endl;
	this->type = obj.type;
}

Dog	&Dog::operator=(const Dog &obj)
{
	std::cout << Y << "Dog: " << E << "Assignation operator called"
		<< std::endl;
	this->type = obj.type;
	return (*this);
}


Dog::~Dog(void)
{
	std::cout << Y << "Dog: " << E << "Destructor called" << std::endl;
}

/*
 * Membert Funtions
*/
void	Dog::makeSound(void) const
{
	std::cout << Y << "Dog: " << E << "Haf Haf!"
		<< std::endl;
}
