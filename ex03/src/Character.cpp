/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:06:36 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/23 18:18:03 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character(void)
{

	std::cout << C << "Character: " << E << "Default constructor called"
		<< std::endl;
	this->name = "empty";
}

Chracter::Character(const Character &obj)
{
	std::cout << C << "Character: " << E << "Copy constructor called"
		<< std::endl;
	this->name = obj.name;
}

Character &Character::operator=(const Character &obj)
{
	std::cout << C << "Character: " << E << "Assignation operator called"
		<< std::endl;
	this->name = obj.name;
}

Character::~Character(void)
{
	std::cout << C << "Character: " << E << "Destructor called"
		<< std::endl;
}

Character::Character(std::string name)
{
	std::cout << O << "Character: " << E << "name constructor called"
	this->name = name;
}

/*
 * Get Methods
*/
std::string Character::getName()
{
	return (this->name);
}
