/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:21 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 13:23:27 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* not_cat = new WrongCat;
	std::cout << not_cat->getType() << " " << std::endl;
	not_cat->makeSound();
	wrong_animal->makeSound();

	delete meta;
	delete j;
	delete i;
	delete not_cat;
	delete wrong_animal;
	return (0);
}