/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:11:32 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/21 13:46:06 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

/******************************************************************************/
/*                            INCLUDES                                        */
/******************************************************************************/

# include "Animal.hpp"
# include "Brain.hpp"

/******************************************************************************/
/*                            CLASS                                           */
/******************************************************************************/

class Dog: public Animal
{
	private:
		Brain	*brain;
	public:
		/*
		 * Orthodox Canonical Form
		*/
		Dog(void);
		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);
		~Dog(void);
		/*
		 * Set Methods
		*/
		void	setIdea(std::string idea);
		/*
		 * Get Methods
		*/
		std::string 	getIdea(unsigned int index) const;
		unsigned int	getIndex(void) const;
		/*
		 * Membert Funtions
		*/
		virtual void	makeSound(void) const;
		std::ostream 	&coutBrain(std::ostream &os) const;
};

std::ostream &operator<<(std::ostream &os, const Dog &obj);
std::ostream &operator<<(std::ostream &os, const Dog *obj);
#endif
