/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:04:29 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/23 11:03:41 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	AAnimal	*deep_copy;
	Brain	*brain;
	
	AAnimal	*farm[20];

	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
			farm[i] = new Cat();
		if (i >= 10)
			farm[i] = new Dog();
	}

	brain = farm[3]->getBrain();
	brain->ideas[0] = "This ball of wool is so funny";
	brain->ideas[1] = "Do not disturb me humans, i'm sleeping";
	brain->ideas[2] = "It can't see me";
	brain->ideas[3] = "What was that sound?";
	brain->ideas[4] = "Do not touch my paws";

	deep_copy = farm[3];
	std::cout << "Deep copied animal is a " << deep_copy->getType() << std::endl;

	std::cout << "This are its ideas" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << deep_copy->getBrain()->ideas[i] << std::endl;

	for (int i = 0; i < 20; i++)
		delete farm[i];
	return 0;
}
