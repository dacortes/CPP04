/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:04:58 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/23 18:18:01 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Interface.h"

/*
 * Orthodox Canocical Form
*/
AMateria::AMateria(void)
{
	std::cout << O << "AMateria: " << E << "Default constructor called"
		<< std::endl;
	this->type = "empty";
}

AMateria::AMateria(std::string const &type)
{
	std::cout << O << "AMateria: " << E << "Type constructor called"
		<< std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria &obj)
{
	std::cout << O << "AMateria: " << E << "Copy constructor called"
		<< std::endl;
	this->type = obj.type;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
	std::cout << O << "AMateria: " << E << "Assignation operator called"
		<< std::endl;
	this->type = obj.type;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << O << "AMateria: " << E << "Destructor called"
		<< std::endl;
}

/*
 * Get Methods
*/
std::string const &AMateria::getType(void) const
{
	return (this->type);
}
