/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:32:08 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/23 12:41:54 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria
{
	protected:
		std::string type;
	public:
		/*
		 * Orthodox Canonical Form
		*/
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &obj);
		AMateria &operator=(const AMateria &obj);
		/*
		 * Get Methods
		*/
		std::string const & getType(void) const;
		/*
		 * Membert Funtions
		*/
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif
