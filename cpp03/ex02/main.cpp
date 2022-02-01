/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:18:39 by fballest          #+#    #+#             */
/*   Updated: 2022/02/01 11:27:54 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int     main(void)
{
	ClapTrap	attackerA;
	ClapTrap	attackerB("Stupid");
	ClapTrap	attackerD(attackerA);
	ClapTrap	attackerC("Genuine");
	
	attackerC = attackerB;

	std::cout << std::endl;
	attackerA.attack("Stupid");
	attackerB.takeDamage(4);
	std::cout << std::endl;
	attackerB.attack(attackerC.getName());
	attackerC.takeDamage(10);
	attackerC.beRepaired(3);
	std::cout << std::endl;
	attackerD.attack(attackerC.getName());
	attackerC.takeDamage(105);
	attackerC.takeDamage(10);
	std::cout << std::endl;
	attackerD.attack(attackerA.getName());
	attackerA.takeDamage(29);
	attackerA.beRepaired(8);
	std::cout << std::endl;
	attackerA.attack(attackerC.getName());
	attackerC.beRepaired(75);
	std::cout << std::endl;

	ScavTrap	sicarioA;
	ScavTrap	sicarioB("SiKario");
	ScavTrap	sicarioC(sicarioA);
	ScavTrap	sicarioD("NoKario");

	sicarioD = sicarioB;
	std::cout << std::endl;
	std::cout << "Los sicarios se crearion con:" << std::endl << "HIT POINTS = " << sicarioA.ClapTrap::getHitpoint() << std::endl;
	std::cout << "Los sicarios se crearion con:" << std::endl << "ENERGY POINTS = " << sicarioA.ClapTrap::getEnergy() << std::endl;
	std::cout << "Los sicarios se crearion con:" << std::endl << "ATTACK POINTS = " << sicarioA.ClapTrap::getDamage() << std::endl;
	sicarioA.attack(sicarioC.ClapTrap::getName());
	sicarioC.ClapTrap::takeDamage(43);
	sicarioC.ClapTrap::beRepaired(16);
	std::cout << std::endl;
	sicarioA.attack(sicarioB.ClapTrap::getName());
	sicarioB.ClapTrap::takeDamage(32);
	sicarioB.ClapTrap::beRepaired(12);
	std::cout << std::endl;
	sicarioD.ClapTrap::attack(sicarioD.ClapTrap::getName());
	sicarioD.ClapTrap::takeDamage(25);
	sicarioD.ClapTrap::attack(sicarioD.ClapTrap::getName());
	sicarioD.ClapTrap::takeDamage(5000);
	sicarioD.ClapTrap::takeDamage(25);
	std::cout << std::endl;
	
	return (0);
}