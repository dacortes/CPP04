/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:58:57 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/21 17:07:00 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP


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

#ifndef MAX_IDES
# define MAX_IDEAS 100
#endif

class Brain
{
	private:
		std::string		ideas[MAX_IDEAS];
		unsigned int	index;
	public:
		/*
		 * Orthodox Canonical Form
		*/
		Brain(void);
		Brain(std::string _idea);
		Brain(const Brain &obj);
		Brain &operator=(const  Brain &obj);
		~Brain(void);
		/*
		 * Set Methods
		*/
		void	setIdea(std::string _idea);
		/*
		 * Get Methods
		*/
		std::string 	getIdea(unsigned int _index) const;
		unsigned int	getIndex(void) const;
};

std::ostream &operator<<(std::ostream &os, const Brain &obj);
std::ostream &operator<<(std::ostream &os, const Brain *obj);
#endif

