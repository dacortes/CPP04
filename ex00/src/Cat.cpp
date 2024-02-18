/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:48:41 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/18 16:19:39 by dacortes         ###   ########.fr       */
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
}

Cat::Cat(const Cat &obj): Animal(obj.type)
{

	std::cout << G << "Cat: " << E << "Copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &obj)
{
	std::cout << O << "Cat: " << E << "Assignation operator called"
		<< std::endl;
	this->type = obj.type;
	return (*this);	
}

Cat::~Cat(void)
{
	std::cout << O << "Cat: " << E << "Destructor called" << std::endl;
}

/*
 * Membert Funtions
*/
void	Cat::makeSound(void) const
{
	std::cout << O << "Cat: " << E << "Mnau Mnau!"
		<< std::endl;
}
