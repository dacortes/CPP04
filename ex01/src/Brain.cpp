/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 00:59:33 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/22 09:31:01 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

/*
 * Orthodox Canonical Form
*/
Brain::Brain(void)
{
	std::cout << C << "Brain: " << E << "Default constructor called"
		<< std::endl;
	this->index = 0;
	for (unsigned int iter = 0; iter < MAX_IDEAS; iter++)
		this->ideas[iter] = "Schizophrenia :v ";
}

Brain::Brain(std::string _idea)
{
	std::cout << C << "Brain: " << E << "Idea constructor called" << std::endl;
	this->index = 0;
	this->ideas[0] = _idea;
	for (unsigned int iter = 1; iter < MAX_IDEAS; iter++)
		this->ideas[iter] = "Schizophrenia :v ";
}

Brain::Brain(const Brain &obj)
{
	std::cout << C << "Brain: " << E << "Copy constructor called" << std::endl;
	for (unsigned int iter = 0; iter < MAX_IDEAS; iter++)
		this->ideas[iter] = obj.ideas[iter];
	this->index = obj.index;
}

Brain	&Brain::operator=(const Brain &obj)
{
	std::cout << C << "Brain: " << E << "Assignation operator called"
		<< std::endl;
	if (this != &obj)
	{
		for (unsigned int iter = 0; iter < MAX_IDEAS; iter++)
			this->ideas[iter] = obj.ideas[iter];
		this->index = obj.index;
	}
	return (*this);	
}

Brain::~Brain(void)
{
	std::cout << C << "Brain: " << E << "Destructor called" << std::endl;
}

/*
 * Set Methods
*/
void	Brain::setIdea(std::string _idea)
{
	if (this->index < MAX_IDEAS)
		this->ideas[this->index++] = _idea;
}

/*
 * Get Methods
*/
std::string	Brain::getIdea(unsigned int _index) const
{
	if (_index >= MAX_IDEAS)
	{
		std::cout << R << "Error: " << E << "index out of range" << std::endl;
		std::cout << "The maximum index is 99" << std::endl;
		return ("idea out of range");
	}
	return (this->ideas[_index]);	
}
unsigned int	Brain::getIndex(void) const
{
	return (this->index);
}

std::ostream &operator<<(std::ostream &os, const Brain &obj)
{
	for (unsigned int iter = 0; iter < MAX_IDEAS; iter++)
		os << C << "Idea: " << E << obj.getIdea(iter);
	return (os);
}

std::ostream &operator<<(std::ostream &os, const Brain *obj)
{
	if (obj)
	{
		for (unsigned int iter = 0; iter < MAX_IDEAS; iter++)
			os << C << "Idea: " << E << obj->getIdea(iter);
	}
	return (os);
}
