/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:18:39 by fballest          #+#    #+#             */
/*   Updated: 2022/02/02 11:18:13 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"

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
	std::cout << "Nokario ahora se llama ---> " << sicarioD.ClapTrap::getName() << std::endl; 
	
	std::cout << std::endl;
	std::cout << "Los sicarios se crearon con: NAME = " << sicarioA.ClapTrap::getName() << std::endl;
	std::cout << "Los sicarios se crearon con: HIT POINTS = " << sicarioA.ClapTrap::getHitpoint() << std::endl;
	std::cout << "Los sicarios se crearon con: ENERGY POINTS = " << sicarioA.ClapTrap::getEnergy() << std::endl;
	std::cout << "Los sicarios se crearon con: ATTACK POINTS = " << sicarioA.ClapTrap::getDamage() << std::endl;
	std::cout << "Los sicarios se crearon con: NAME = " << sicarioB.ClapTrap::getName() << std::endl;
	std::cout << "Los sicarios se crearon con: HIT POINTS = " << sicarioB.ClapTrap::getHitpoint() << std::endl;
	std::cout << "Los sicarios se crearon con: ENERGY POINTS = " << sicarioB.ClapTrap::getEnergy() << std::endl;
	std::cout << "Los sicarios se crearon con: ATTACK POINTS = " << sicarioB.ClapTrap::getDamage() << std::endl;
	std::cout << "Los sicarios se crearon con: NAME = " << sicarioC.ClapTrap::getName() << std::endl;
	std::cout << "Los sicarios se crearon con: HIT POINTS = " << sicarioC.ClapTrap::getHitpoint() << std::endl;
	std::cout << "Los sicarios se crearon con: ENERGY POINTS = " << sicarioC.ClapTrap::getEnergy() << std::endl;
	std::cout << "Los sicarios se crearon con: ATTACK POINTS = " << sicarioC.ClapTrap::getDamage() << std::endl;
	std::cout << "Los sicarios se crearon con: NAME = " << sicarioD.ClapTrap::getName() << std::endl;
	std::cout << "Los sicarios se crearon con: HIT POINTS = " << sicarioD.ClapTrap::getHitpoint() << std::endl;
	std::cout << "Los sicarios se crearon con: ENERGY POINTS = " << sicarioD.ClapTrap::getEnergy() << std::endl;
	std::cout << "Los sicarios se crearon con: ATTACK POINTS = " << sicarioD.ClapTrap::getDamage() << std::endl;
	std::cout << std::endl;
	sicarioA.attack(sicarioC.ClapTrap::getName());
	sicarioC.ClapTrap::takeDamage(43);
	sicarioC.ClapTrap::beRepaired(16);
	std::cout << std::endl;
	sicarioA.attack(sicarioB.ClapTrap::getName());
	sicarioB.ClapTrap::takeDamage(32);
	sicarioB.ClapTrap::beRepaired(12);
	std::cout << std::endl;
	sicarioC.ClapTrap::attack(sicarioD.ClapTrap::getName());
	sicarioD.ClapTrap::takeDamage(25);
	std::cout << std::endl;
	sicarioC.ClapTrap::attack(sicarioD.ClapTrap::getName());
	sicarioD.ClapTrap::takeDamage(50);
	std::cout << std::endl;
	sicarioC.ClapTrap::attack(sicarioD.ClapTrap::getName());
	sicarioD.ClapTrap::takeDamage(25);
	std::cout << std::endl;

	FragTrap	GivemeA;
	FragTrap	GivemeB("Holita");
	FragTrap	GivemeC(GivemeA);
	FragTrap	GivemeD("Adiosito");

	GivemeD = GivemeB;
	std::cout << "Adiosito ahora se llama " << GivemeD.getName() << std::endl << std::endl;

	std::cout << "Los FragTrap se crearon con: NAME = " << GivemeA.getName() << std::endl;
	std::cout << "Los FragTrap se crearon con: HIT POINTS = " << GivemeA.getHitpoint() << std::endl;
	std::cout << "Los FragTrap se crearon con: ENERGY POINTS = " << GivemeA.getEnergy() << std::endl;
	std::cout << "Los FragTrap se crearon con: ATTACK POINTS = " << GivemeA.getDamage() << std::endl;
	std::cout << "Los FragTrap se crearon con: NAME = " << GivemeB.getName() << std::endl;
	std::cout << "Los FragTrap se crearon con: HIT POINTS = " << GivemeB.getHitpoint() << std::endl;
	std::cout << "Los FragTrap se crearon con: ENERGY POINTS = " << GivemeB.getEnergy() << std::endl;
	std::cout << "Los FragTrap se crearon con: ATTACK POINTS = " << GivemeB.getDamage() << std::endl;
	std::cout << "Los FragTrap se crearon con: NAME = " << GivemeC.getName() << std::endl;
	std::cout << "Los FragTrap se crearon con: HIT POINTS = " << GivemeC.getHitpoint() << std::endl;
	std::cout << "Los FragTrap se crearon con: ENERGY POINTS = " << GivemeC.getEnergy() << std::endl;
	std::cout << "Los FragTrap se crearon con: ATTACK POINTS = " << GivemeC.getDamage() << std::endl;
	std::cout << "Los FragTrap se crearon con: NAME = " << GivemeD.getName() << std::endl;
	std::cout << "Los FragTrap se crearon con: HIT POINTS = " << GivemeD.getHitpoint() << std::endl;
	std::cout << "Los FragTrap se crearon con: ENERGY POINTS = " << GivemeD.getEnergy() << std::endl;
	std::cout << "Los FragTrap se crearon con: ATTACK POINTS = " << GivemeD.getDamage() << std::endl;
	
	std::cout << std::endl;
	GivemeA.highFivesGuys();
	GivemeB.highFivesGuys();
	GivemeC.highFivesGuys();
	GivemeD.highFivesGuys();
	std::cout << std::endl;
	
	return (0);
}