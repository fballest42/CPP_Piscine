/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:18:39 by fballest          #+#    #+#             */
/*   Updated: 2022/02/02 15:27:27 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"
#include"DiamondTrap.hpp"

int     main(void)
{
	std::cout << "---------------------ClapTrap-----------------------" << std::endl;

	ClapTrap	attackerA;
	ClapTrap	attackerB("Stupid");
	ClapTrap	attackerD(attackerA);
	ClapTrap	attackerC("Genuine");
	
	attackerC = attackerB;
	std::cout << "Genuine ahora se llama ---> " << attackerC.getName() << std::endl;

	std::cout << std::endl;

	std::cout << "Los claptraps se crearon con: NAME = " << attackerA.getName() << std::endl;
	std::cout << "Los claptraps se crearon con: HIT POINTS = " << attackerA.getHitpoint() << std::endl;
	std::cout << "Los claptraps se crearon con: ENERGY POINTS = " << attackerA.getEnergy() << std::endl;
	std::cout << "Los claptraps se crearon con: ATTACK POINTS = " << attackerA.getDamage() << std::endl;
	std::cout << "Los claptraps se crearon con: NAME = " << attackerB.getName() << std::endl;
	std::cout << "Los claptraps se crearon con: HIT POINTS = " << attackerB.getHitpoint() << std::endl;
	std::cout << "Los claptraps se crearon con: ENERGY POINTS = " << attackerB.getEnergy() << std::endl;
	std::cout << "Los claptraps se crearon con: ATTACK POINTS = " << attackerB.getDamage() << std::endl;
	std::cout << "Los claptraps se crearon con: NAME = " << attackerC.getName() << std::endl;
	std::cout << "Los claptraps se crearon con: HIT POINTS = " << attackerC.getHitpoint() << std::endl;
	std::cout << "Los claptraps se crearon con: ENERGY POINTS = " << attackerC.getEnergy() << std::endl;
	std::cout << "Los claptraps se crearon con: ATTACK POINTS = " << attackerC.getDamage() << std::endl;
	std::cout << "Los claptraps se crearon con: NAME = " << attackerD.getName() << std::endl;
	std::cout << "Los claptraps se crearon con: HIT POINTS = " << attackerD.getHitpoint() << std::endl;
	std::cout << "Los claptraps se crearon con: ENERGY POINTS = " << attackerD.getEnergy() << std::endl;
	std::cout << "Los claptraps se crearon con: ATTACK POINTS = " << attackerD.getDamage() << std::endl;

	attackerA.attack("Stupid");
	attackerB.takeDamage(4);
	std::cout << std::endl;
	attackerB.attack(attackerC.getName());
	attackerC.takeDamage(10);
	attackerC.beRepaired(3);
	std::cout << std::endl;
	attackerD.attack(attackerC.getName());
	attackerC.takeDamage(15);
	attackerC.takeDamage(10);
	attackerC.beRepaired(7);
	std::cout << std::endl;
	attackerD.attack(attackerA.getName());
	attackerA.takeDamage(12);
	attackerA.beRepaired(8);
	std::cout << std::endl;

	std::cout << "---------------------ScavTrap-----------------------" << std::endl;
	ScavTrap	sicarioA;
	ScavTrap	sicarioB("SiKario");
	ScavTrap	sicarioC(sicarioA);
	ScavTrap	sicarioD("NoKario");

	sicarioD = sicarioB;
	std::cout << "Nokario ahora se llama ---> " << sicarioD.getName() << std::endl; 
	
	std::cout << std::endl;
	std::cout << "Los scavtraps se crearon con: NAME = " << sicarioA.getName() << std::endl;
	std::cout << "Los scavtraps se crearon con: HIT POINTS = " << sicarioA.getHitpoint() << std::endl;
	std::cout << "Los scavtraps se crearon con: ENERGY POINTS = " << sicarioA.getEnergy() << std::endl;
	std::cout << "Los scavtraps se crearon con: ATTACK POINTS = " << sicarioA.getDamage() << std::endl;
	std::cout << "Los scavtraps se crearon con: NAME = " << sicarioB.getName() << std::endl;
	std::cout << "Los scavtraps se crearon con: HIT POINTS = " << sicarioB.getHitpoint() << std::endl;
	std::cout << "Los scavtraps se crearon con: ENERGY POINTS = " << sicarioB.getEnergy() << std::endl;
	std::cout << "Los scavtraps se crearon con: ATTACK POINTS = " << sicarioB.getDamage() << std::endl;
	std::cout << "Los scavtraps se crearon con: NAME = " << sicarioC.getName() << std::endl;
	std::cout << "Los scavtraps se crearon con: HIT POINTS = " << sicarioC.getHitpoint() << std::endl;
	std::cout << "Los scavtraps se crearon con: ENERGY POINTS = " << sicarioC.getEnergy() << std::endl;
	std::cout << "Los scavtraps se crearon con: ATTACK POINTS = " << sicarioC.getDamage() << std::endl;
	std::cout << "Los scavtraps se crearon con: NAME = " << sicarioD.getName() << std::endl;
	std::cout << "Los scavtraps se crearon con: HIT POINTS = " << sicarioD.getHitpoint() << std::endl;
	std::cout << "Los scavtraps se crearon con: ENERGY POINTS = " << sicarioD.getEnergy() << std::endl;
	std::cout << "Los scavtraps se crearon con: ATTACK POINTS = " << sicarioD.getDamage() << std::endl;
	
	std::cout << std::endl;
	attackerB.attack("Stupid");
	sicarioB.takeDamage(4);
	std::cout << std::endl;
	sicarioB.attack(attackerC.getName());
	attackerC.takeDamage(10);
	attackerC.beRepaired(3);
	std::cout << std::endl;
	sicarioD.attack(sicarioC.getName());
	sicarioC.takeDamage(65);
	sicarioC.takeDamage(10);
	std::cout << std::endl;
	attackerD.attack(sicarioA.getName());
	sicarioA.takeDamage(29);
	sicarioA.beRepaired(8);
	std::cout << std::endl;
	sicarioA.attack(sicarioC.getName());
	sicarioC.beRepaired(75);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "---------------------FragTrap-----------------------" << std::endl;

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

	sicarioA.attack("Stupid");
	attackerB.takeDamage(4);
	std::cout << std::endl;
	GivemeB.attack(attackerC.getName());
	attackerC.takeDamage(10);
	attackerC.beRepaired(3);
	std::cout << std::endl;
	sicarioD.attack(GivemeC.getName());
	GivemeC.takeDamage(65);
	GivemeC.takeDamage(10);
	std::cout << std::endl;
	attackerD.attack(GivemeA.getName());
	GivemeA.takeDamage(29);
	GivemeA.beRepaired(8);
	std::cout << std::endl;
	GivemeA.attack(sicarioC.getName());
	GivemeC.beRepaired(75);
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl;
	GivemeA.highFivesGuys();
	GivemeB.highFivesGuys();
	GivemeC.highFivesGuys();
	GivemeD.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "---------------------DiamondTrap-----------------------" << std::endl;

	DiamondTrap	DiamondA;
	DiamondTrap	DiamondB("Zafiro");
	DiamondTrap	DiamondC(DiamondA);
	DiamondTrap	DiamondD("Esmeralda");

	DiamondD = DiamondB;
	std::cout << "Esmeralda ahora se llama " << GivemeD.getName() << std::endl << std::endl;

	std::cout << "Los DiamondTraps se crearon con: NAME = " << DiamondA.getName() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: HIT POINTS = " << DiamondA.getHitpoint() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: ENERGY POINTS = " << DiamondA.getEnergy() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: ATTACK POINTS = " << DiamondA.getDamage() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: NAME = " << DiamondB.getName() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: HIT POINTS = " << DiamondB.getHitpoint() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: ENERGY POINTS = " << DiamondB.getEnergy() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: ATTACK POINTS = " << DiamondB.getDamage() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: NAME = " << DiamondC.getName() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: HIT POINTS = " << DiamondC.getHitpoint() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: ENERGY POINTS = " << DiamondC.getEnergy() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: ATTACK POINTS = " << DiamondC.getDamage() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: NAME = " << DiamondD.getName() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: HIT POINTS = " << DiamondD.getHitpoint() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: ENERGY POINTS = " << DiamondD.getEnergy() << std::endl;
	std::cout << "Los DiamondTraps se crearon con: ATTACK POINTS = " << DiamondD.getDamage() << std::endl;

	DiamondA.attack(attackerA.getName());
	attackerB.takeDamage(4);
	std::cout << std::endl;
	GivemeB.attack(attackerC.getName());
	attackerC.takeDamage(10);
	attackerC.beRepaired(3);
	std::cout << std::endl;
	sicarioD.attack(DiamondC.getName());
	DiamondC.takeDamage(65);
	DiamondC.takeDamage(10);
	std::cout << std::endl;
	attackerD.attack(DiamondA.getName());
	DiamondA.takeDamage(29);
	DiamondA.beRepaired(8);
	std::cout << std::endl;
	DiamondA.attack(sicarioC.getName());
	sicarioC.takeDamage(11);
	sicarioC.beRepaired(15);
	std::cout << std::endl;
	DiamondA.attack(GivemeC.getName());
	GivemeC.takeDamage(7);
	GivemeC.beRepaired(11);
	std::cout << std::endl;

	std::cout << std::endl;
	DiamondA.highFivesGuys();
	DiamondB.highFivesGuys();
	DiamondC.highFivesGuys();
	DiamondD.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;

	DiamondA.whoAmI();
	DiamondB.whoAmI();
	DiamondC.whoAmI();
	DiamondD.whoAmI();
	std::cout << std::endl;
	
	std::cout << "--------------------TESTED FINISHED--------------------";

	
	return (0);
}