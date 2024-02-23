/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:16:29 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/23 13:15:57 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "Interface.h" 

class Ice
{
	public:
		/*
		 * Orthodox Canonical Form
		*/
		Ice(void);
		Ice(const Ice &obj);
		Ice &operator=(const Ice &obj);
		~Ice(void);
		/*
		 * Membert Funtions
		*/
		AMateria	*clone(void)const;
		void		use(ICharacter& target);
};
#endif
