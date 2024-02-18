/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:32:15 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/18 17:14:22 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

/*
 * Orthodox Canonical Form
*/
WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << T << "WrongCat: " << E << "Default constructor called"
		<< std::endl;
}

WrongCat::WrongCat(const WrongCat &obj): WrongAnimal(obj.type)

{
	std::cout << T << "WrongCat: " << E << "Copy constructor called" << std::endl;
	this->type = obj.type;
}

WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	std::cout << T << "WrongCat: " << E << "Assignation operator called"
		<< std::endl;
	this->type = obj.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << Y << "WrongCat: " << E << "Destructor called" << std::endl;
}

/*
 * Membert Funtions
*/
void	WrongCat::makeSound(void) const
{
	std::cout << T << "WrongCat: " << E << "Meoow!"
		<< std::endl;
}
