/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:06:34 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/23 18:18:02 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Interface.h"

int	main(void)
{
	AMateria ffoo("dacortes");
	AMateria foo = ffoo;

	std::cout << B << "Tes get AMateria: " << E << foo.getType() << std::endl;
	return (EXIT_SUCCESS);
}
