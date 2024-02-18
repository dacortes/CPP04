/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:26:10 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/18 17:00:40 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP


/******************************************************************************/
/*                            INCLUDES                                        */
/******************************************************************************/

#include "WrongAnimal.hpp"

/******************************************************************************/
/*                            CLASS                                           */
/******************************************************************************/

class WrongCat: public WrongAnimal
{
	public:
		/*
		 * Orthodox Canonical Form
		*/
		WrongCat(void);
		WrongCat(const WrongCat &obj);
		WrongCat &operator=(const WrongCat &obj);
		~WrongCat(void);
		/*
		 * Membert Funtions
		*/
		virtual void	makeSound(void) const;
};
#endif
