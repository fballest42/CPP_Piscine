/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:18:39 by fballest          #+#    #+#             */
/*   Updated: 2022/01/31 14:36:30 by fballest         ###   ########.fr       */
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
	std::cout << "Los sicarios se crearion con:" << std::endl << "HIT POINTS = " << sicarioA.getHitpoint() << std::endl;
	std::cout << "Los sicarios se crearion con:" << std::endl << "ENERGY POINTS = " << sicarioA.getEnergy() << std::endl;
	std::cout << "Los sicarios se crearion con:" << std::endl << "ATTACK POINTS = " << sicarioA.getDamage() << std::endl;
	sicarioA.attack(sicarioC.ClapTrap::getName());
	sicarioC.takeDamage(43);
	sicarioC.beRepaired(16);
	std::cout << std::endl;
	sicarioA.attack(sicarioB.getName());
	sicarioB.takeDamage(32);
	sicarioB.beRepaired(12);
	std::cout << std::endl;
	attackerC.ClapTrap::attack(sicarioA.getName());
	sicarioA.takeDamage(25);
	std::cout << std::endl;
	
	return (0);
}