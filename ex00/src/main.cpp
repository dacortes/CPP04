/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 08:45:38 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/18 18:05:05 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/******************************************************************************/
/*                            INCLUDES                                        */
/******************************************************************************/

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"

void	test_init_Animal(Animal *_basic, Animal *_Cat, Animal *_Dog)
{
	std::cout << C << "----------------------------------\n" << E;
	std::cout << C << "Test init: Animal" << E << std::endl; 
	std::cout << _basic << std::endl;
	std::cout << _Cat << std::endl;
	std::cout << _Dog << std::endl;
	std::cout << C << "----------------------------------\n" << E;
}

void	test_sound_animal(Animal *_basic, Animal *_Cat, Animal *_Dog)
{
	std::cout << C << "Test sound: Animal" << E << std::endl;
	_basic->makeSound();
	_Cat->makeSound();
	_Dog->makeSound();
	std::cout << C << "----------------------------------\n" << E;
}

void	test_getType_animal(Animal *_basic, Animal *_Cat, Animal *_Dog)
{
	std::cout << C << "Test getType: Animal" << E << std::endl;
	std::cout << _basic->getType() << " " << std::endl;
	std::cout << _Cat->getType() << " " << std::endl;
	std::cout << _Dog->getType() << " " << std::endl;
	std::cout << C << "----------------------------------\n" << E;
}

void	test_init_WrongAnimal(WrongAnimal *fooBasic, WrongAnimal *fooCat)
{
	std::cout << Y << "----------------------------------\n" << E;
	std::cout << Y << "Test init: WrongAnimal" << E << std::endl; 
	std::cout << fooBasic << std::endl;
	std::cout << fooCat << std::endl;
	std::cout << Y << "----------------------------------\n" << E;
}

void	test_sound_WrongAnimal(WrongAnimal *fooBasic, WrongAnimal *fooCat)
{
	std::cout << Y << "Test sound: WrongAnimal" << E << std::endl;
	fooBasic->makeSound();
	fooCat->makeSound();
	std::cout << Y << "----------------------------------\n" << E;
}

void	test_getType_WrongAnimal(WrongAnimal *fooBasic, WrongAnimal *fooCat)
{
	std::cout << Y << "Test getType: WrongAnimal" << E << std::endl;
	std::cout << fooBasic->getType() << std::endl;
	std::cout << fooCat->getType() << std::endl;
	std::cout << Y << "----------------------------------\n" << E;
}

int	main(void)
{
	Animal *_basic = new Animal();
	Animal *_Cat = new Cat();
	Animal *_Dog = new Dog();
	WrongAnimal *fooBasic = new WrongAnimal();
	WrongAnimal *fooCat = new WrongCat();

	/*
	 * Test Animal
	*/
	test_init_Animal(_basic, _Cat, _Dog);
	test_sound_animal(_basic, _Cat, _Dog);
	test_getType_animal(_basic, _Cat, _Dog);
	/*
	 * Test WrongAnimal
	*/
	test_init_WrongAnimal(fooBasic, fooCat);
	test_sound_WrongAnimal(fooBasic, fooCat);
	test_getType_WrongAnimal(fooBasic, fooCat);
	/*
	 * Free memory: class Animal
	*/
	delete _basic;
	delete _Cat;
	delete _Dog;
	/*
	 * Free memory: class WrongAnimal
	*/
	delete fooBasic;
	delete fooCat;
	return (EXIT_SUCCESS);
}

//int main()
//{
//	const Animal* meta = new Animal();
//	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//	std::cout << j->getType() << " " << std::endl;
//	std::cout << i->getType() << " " << std::endl;
//	i->makeSound();
//	j->makeSound();
//	meta->makeSound();
//	delete meta;
//	delete j;
//	delete i;
//	return (0);
//}
