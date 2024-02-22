/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 08:47:31 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/22 11:36:09 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AANIMAL_HPP
# define AANIMAL_HPP

/******************************************************************************/
/*                            INCLUDES                                        */
/******************************************************************************/

# include <string>
# include <cstdlib>
# include <iostream>

/******************************************************************************/
/*                            COLORS                                          */
/******************************************************************************/

# define E "\033[m"                 //end
# define R "\033[1m\033[1;31m"      //red
# define G "\033[1m\033[1;32m"      //green
# define Y "\033[1m\033[1;33m"      //yellow
# define B "\033[1;34m"             //blue
# define T "\033[1m\033[1;35m"      //Turquesa
# define C "\033[1;36m"             //Cyan
# define O "\033[1m\033[38;5;208m"  //orange
# define F "\033[1m\033[38;5;128m"  //purple

/******************************************************************************/
/*                            CLASS                                           */
/******************************************************************************/

class AAnimal
{
	protected:
		std::string	type;
	public:
		/*
		 * Orthodox Canonical Form
		*/
		AAnimal(void);
		AAnimal(std::string _type);
		AAnimal(const AAnimal &obj);
		AAnimal &operator=(const AAnimal &obj);
		virtual ~AAnimal(void);
		/*
		 * Set idea
		*/
		//virtual void setIdea(std::string _idea) = 0;
		/*
		 * Get Methods
		*/
		std::string	getType(void) const; 
		/*
		 * Membert Funtions
		*/
		virtual void	makeSound(void) const = 0;
};

std::ostream &operator<<(std::ostream &os, const AAnimal &obj);
std::ostream &operator<<(std::ostream &os, const AAnimal *obj);
#endif
