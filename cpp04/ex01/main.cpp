/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:21 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 15:19:10 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	Animal	*deep_copy;
	Brain	*brain;
	
	Animal	*farm[20];

	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
			farm[i] = new Cat();
		if (i >= 10)
			farm[i] = new Dog();
	}

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();

	delete i;
	delete j;

	brain = farm[3]->getBrain();
	brain->_ideas[0] = "I'm the faster animal in the world";
	brain->_ideas[1] = "I'm the best human friend";
	brain->_ideas[2] = "I'm soo smart";
	brain->_ideas[3] = "I must remeber my age is 18";
	brain->_ideas[4] = "I like to play padel";

	deep_copy = farm[3];
	std::cout << "Deep copied animal is a " << deep_copy->getType() << std::endl;

	std::cout << "This are its ideas" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << deep_copy->getBrain()->ideas[i] << std::endl;

	for (int i = 0; i < 20; i++)
		delete farm[i];
	return 0;
}