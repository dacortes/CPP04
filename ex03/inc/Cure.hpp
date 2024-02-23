/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:08:34 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/22 17:16:09 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

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
