/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:21 by fballest          #+#    #+#             */
/*   Updated: 2022/03/04 14:30:43 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal	*deep_copy;
	Brain	*brain = NULL;
	Animal	*alot[10];
	
	std::cout << "                  A LOT OF ANIMALS" << std::endl;
	int i = 0;
	while (i < 10)
	{
		if (i % 2)
			alot[i] = new Cat();
		else
			alot[i] = new Dog();
		i++;
	}
	i = 0;
	while (i < 10)
	{
		std::cout << alot[i]->getType() << " is my type" << std::endl;
		alot[i]->makeSound();
		i++;
	}
	std::cout << "                     SETTING BRAINS AND IDEAS TO A CONCRETE ANIMALS" << std::endl;
	brain = alot[4]->getBrain();
	brain->idea[0] = "I'm the faster animal in the world";
	brain->idea[1] = "I'm the best human friend";
	brain->idea[2] = "I'm soo smart";
	brain->idea[3] = "I must remeber my age is 5";
	brain->idea[4] = "I like to play with the ball";
	brain->idea[5] = "Maybe I'm the faster animal in the world";
	brain->idea[6] = "Maybe I'm the best human friend";
	brain->idea[7] = "Maybe I'm soo smart";
	brain->idea[8] = "Maybe I must remeber my age is 5";
	brain->idea[9] = "Maybe I like to play with the ball";
	std::cout << "The Animal choose to be deep copied is a " << alot[4]->getType() << std::endl;
	deep_copy = alot[4];
	std::cout << "Deep copied animal is a " << deep_copy->getType() << std::endl;


	std::cout << "                     HERE ARE THE DEEP COPY IDEAS" << std::endl;
	i = 0;
	while (i < 10)
		std::cout << deep_copy->getBrain()->idea[i++] << std::endl;
	std::cout << "                     DESTRUCTION OF A LOT OF ANIMALS, BRAINS AND TYPES" << std::endl;
	i = 0;
	while (i < 10)
		delete alot[i++];
	return 0;
}