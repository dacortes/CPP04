/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:42:40 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/23 18:17:29 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Interface.h"

class Character
{
	private:
		std::string name;
	public:
		/*
		 * Orthodox Canonical Form
		*/
		Character(void);
		Character(const Character &obj);
		Character &operator=(const Character &Obj);
		~Character(void);

		Character(std::string name);
		/*
		 * Get Methods
		*/
		std::string getName(void) const;
};
#endif
