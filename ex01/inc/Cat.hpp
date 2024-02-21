/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:48:54 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/21 13:46:02 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

/******************************************************************************/
/*                            INCLUDES                                        */
/******************************************************************************/

# include "Animal.hpp"
# include "Brain.hpp"

/******************************************************************************/
/*                            CLASS                                           */
/******************************************************************************/

class Cat: public Animal
{
	private:
		Brain	*brain;
	public:
		/*
		 * Orthodox Canonical Form
		*/
		Cat(void);
		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);
		~Cat(void);
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

std::ostream &operator<<(std::ostream &os, const Cat &obj);
std::ostream &operator<<(std::ostream &os, const Cat *obj);
#endif
