/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 08:45:38 by dacortes          #+#    #+#             */
/*   Updated: 2024/02/22 09:50:40 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/******************************************************************************/
/*                            INCLUDES                                        */
/******************************************************************************/

#include "../inc/AAnimal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"

void	test_init_Animal(AAnimal *_basic, AAnimal *_Cat, AAnimal *_Dog)
{
	std::cout << C << "----------------------------------\n" << E;
	std::cout << C << "Test init: Animal" << E << std::endl; 
	std::cout << _basic << std::endl;
	std::cout << _Cat << std::endl;
	std::cout << _Dog << std::endl;
	std::cout << C << "Test idea: Animal" << E << std::endl; 
	std::cout << dynamic_cast<Cat*>(_Cat) << std::endl;
	std::cout << dynamic_cast<Dog*>(_Dog) << std::endl;
	std::cout << _Dog << std::endl;
	std::cout << C << "----------------------------------\n" << E;
}

void	test_sound_animal(AAnimal *_basic, AAnimal *_Cat, AAnimal *_Dog)
{
	std::cout << C << "Test sound: Animal" << E << std::endl;
	_basic->makeSound();
	_Cat->makeSound();
	_Dog->makeSound();
	std::cout << C << "----------------------------------\n" << E;
}

void	test_getType_animal(AAnimal *_basic, AAnimal *_Cat, AAnimal *_Dog)
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

bool	msg_error(std::string error)
{
	std::cout << R << "Error: " << E << error << std::endl;
	return (EXIT_FAILURE);
}

bool	delete_animals(AAnimal **basic, unsigned int num)
{
	std::cout << T << "----------------------------------\n" << E;
	std::cout << T << "Clear Animals" << E << std::endl;
	std::cout << T << "----------------------------------\n" << E;
	for (unsigned int rm = 0; rm < num; rm++)
		delete basic[rm];
	delete[] basic;
	return (EXIT_SUCCESS);
}

unsigned int animal_allocation(AAnimal **basic, unsigned int num)
{
	std::cout << T << "----------------------------------\n" << E;
	std::cout << T << "Init Animals" << E << std::endl;
	std::cout << T << "----------------------------------\n" << E;
	unsigned int _new;
	for (_new = 0; _new < num; _new++)
	{
		if (!(_new % 2))
		{
			basic[_new] = new Cat();
			if (basic[_new] == nullptr)
				return (msg_error("memory allocation") + _new);
		}
		else
		{
			basic[_new] = new Dog();
			if (basic[_new] == nullptr)
				return (msg_error("memory allocation") + _new);
		}
	}
	return (_new);
}

void	print_ideas(AAnimal **basic, unsigned int num)
{
	for (unsigned int idea = 0; idea < num; idea++)
	{
		if (!(idea % 2))
			std::cout << B << "default: " << E
				<< dynamic_cast<Cat*>(basic[idea])->getIdea(0)
				<< basic[idea]->getType() << std::endl;
			
		else
			std::cout << B << "default: " << E
				<< dynamic_cast<Dog*>(basic[idea])->getIdea(0) << std::endl;
	}
}

void	set_ideas(AAnimal **basic, unsigned int num)
{
	std::cout << T << "----------------------------------\n" << E;
	std::cout << T << "Test: set ideas" << E << std::endl;
	std::cout << T << "----------------------------------\n" << E;
	std::cout << T << "ideas: default" << E << std::endl;
	print_ideas(basic, num);
	std::cout << T << "set: ideas" << E << std::endl;
	for (unsigned int idea = 0; idea < num; idea++)
	{
		if (!(idea % 2))
			dynamic_cast<Cat*>(basic[idea])->setIdea("conquer the world");
		else
			dynamic_cast<Dog*>(basic[idea])->setIdea("meal");
	}
	print_ideas(basic, num);
}

bool	become_aware(unsigned int num)
{
	if (num > 200)
		return (msg_error("The maximum number of animals is 200"));
	AAnimal **basic = new AAnimal*[num];
	unsigned int del = 0;

	if (basic == nullptr)
		return (msg_error("memory allocation"));
	del = animal_allocation(basic, num);
	set_ideas(basic, del);
	delete_animals(basic, del);
	return (EXIT_SUCCESS);
}

int	main(void)
{
	AAnimal *_basic = new AAnimal();
	AAnimal *_Cat = new Cat();
	AAnimal *_Dog = new Dog();
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
	 * Free memory: class AAnimal
	*/
	delete _basic;
	delete _Cat;
	delete _Dog;
	/*
	 * Free memory: class WrongAAnimal
	*/
	delete fooBasic;
	delete fooCat;
	become_aware(4);
	return (EXIT_SUCCESS);
}
