/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:08:34 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/23 13:15:58 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "Interface.h" 

class Cure
{
	public:
		/*
		 * Orthodox Canonical Form
		*/
		Cure(void);
		Cure(const Cure &obj);
		Cure &operator=(const Cure &obj);
		~Cure(void);
		/*
		 * Membert Funtions
		*/
		AMateria	*clone(void)const;
		void		use(ICharacter& target);
};

#endif
