/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:00:57 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/23 09:41:08 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICHACTER_HPP
# define ICHACTER_HPP

class ICharacter
{
	public:
		/*
		 * Destructor
		*/
		virtual ~ICharacter(void) {}
		/*
		 * Get Methods
		*/
		virtual std::string const & getName(void) const = 0;
		/*
		 * Member Funtions
		*/
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif

