/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:13:10 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/23 18:17:30 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "Interface.h"

class AMateria
{
	protected:
		std::string type;
	public:
		/*
		 * Orthodox Canonical Form
		*/
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(const AMateria &obj);
		AMateria &operator=(const AMateria &obj);
		~AMateria(void);
		/*
		 * Get Methods
		*/
		std::string const &getType(void) const;
		/*
		 * Membert Funtions
		*/
		//virtual AMateria* clone(void) const = 0;
		//virtual void use(ICharacter &target);
};

#endif
