/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 08:47:31 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/17 09:11:48 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

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
# define F "\033[38;5;128m"         //purple

/******************************************************************************/
/*                            CLASS                                           */
/******************************************************************************/

class Animal
{
	proted:
		std::string	type;
	public:
		/*
		 * Orthodox Canonical Form
		*/
		Animal(void);
		Animal(const Animal &obj);
		Animal(const Dog &obj);
		Animal(const Cat &obj);
		Animal operator=(const Animal &obj);
		Animal operator=(const Dog &obj);
		Animal operator=(const Cat &obj);
		~Animal(void);
};

#endif
