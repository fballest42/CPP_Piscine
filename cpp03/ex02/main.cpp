/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:18:39 by fballest          #+#    #+#             */
/*   Updated: 2022/03/01 13:13:28 by fballest         ###   ########.fr       */
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

	std::cout << "Los ClapTrap se crearon con: NAME = " << attackerA.getName() << std::endl;
	std::cout << "Los ClapTrap se crearon con: HIT POINTS = " << attackerA.getHitpoint() << std::endl;
	std::cout << "Los ClapTrap se crearon con: ENERGY POINTS = " << attackerA.getEnergy() << std::endl;
	std::cout << "Los ClapTrap se crearon con: ATTACK POINTS = " << attackerA.getDamage() << std::endl;
	std::cout << "Los ClapTrap se crearon con: NAME = " << attackerB.getName() << std::endl;
	std::cout << "Los ClapTrap se crearon con: HIT POINTS = " << attackerB.getHitpoint() << std::endl;
	std::cout << "Los ClapTrap se crearon con: ENERGY POINTS = " << attackerB.getEnergy() << std::endl;
	std::cout << "Los ClapTrap se crearon con: ATTACK POINTS = " << attackerB.getDamage() << std::endl;
	std::cout << "Los ClapTrap se crearon con: NAME = " << attackerC.getName() << std::endl;
	std::cout << "Los ClapTrap se crearon con: HIT POINTS = " << attackerC.getHitpoint() << std::endl;
	std::cout << "Los ClapTrap se crearon con: ENERGY POINTS = " << attackerC.getEnergy() << std::endl;
	std::cout << "Los ClapTrap se crearon con: ATTACK POINTS = " << attackerC.getDamage() << std::endl;
	std::cout << "Los ClapTrap se crearon con: NAME = " << attackerD.getName() << std::endl;
	std::cout << "Los ClapTrap se crearon con: HIT POINTS = " << attackerD.getHitpoint() << std::endl;
	std::cout << "Los ClapTrap se crearon con: ENERGY POINTS = " << attackerD.getEnergy() << std::endl;
	std::cout << "Los ClapTrap se crearon con: ATTACK POINTS = " << attackerD.getDamage() << std::endl;

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
	std::cout << "Nokario ahora se llama ---> " << sicarioD.getName() << std::endl; 
	
	std::cout << std::endl;
	std::cout << "Los ScavTrap se crearon con: NAME = " << sicarioA.getName() << std::endl;
	std::cout << "Los ScavTrap se crearon con: HIT POINTS = " << sicarioA.getHitpoint() << std::endl;
	std::cout << "Los ScavTrap se crearon con: ENERGY POINTS = " << sicarioA.getEnergy() << std::endl;
	std::cout << "Los ScavTrap se crearon con: ATTACK POINTS = " << sicarioA.getDamage() << std::endl;
	std::cout << "Los ScavTrap se crearon con: NAME = " << sicarioB.getName() << std::endl;
	std::cout << "Los ScavTrap se crearon con: HIT POINTS = " << sicarioB.getHitpoint() << std::endl;
	std::cout << "Los ScavTrap se crearon con: ENERGY POINTS = " << sicarioB.getEnergy() << std::endl;
	std::cout << "Los ScavTrap se crearon con: ATTACK POINTS = " << sicarioB.getDamage() << std::endl;
	std::cout << "Los ScavTrap se crearon con: NAME = " << sicarioC.getName() << std::endl;
	std::cout << "Los ScavTrap se crearon con: HIT POINTS = " << sicarioC.getHitpoint() << std::endl;
	std::cout << "Los ScavTrap se crearon con: ENERGY POINTS = " << sicarioC.getEnergy() << std::endl;
	std::cout << "Los ScavTrap se crearon con: ATTACK POINTS = " << sicarioC.getDamage() << std::endl;
	std::cout << "Los ScavTrap se crearon con: NAME = " << sicarioD.getName() << std::endl;
	std::cout << "Los ScavTrap se crearon con: HIT POINTS = " << sicarioD.getHitpoint() << std::endl;
	std::cout << "Los ScavTrap se crearon con: ENERGY POINTS = " << sicarioD.getEnergy() << std::endl;
	std::cout << "Los ScavTrap se crearon con: ATTACK POINTS = " << sicarioD.getDamage() << std::endl;
	std::cout << std::endl;
	sicarioA.attack(sicarioC.getName());
	sicarioC.takeDamage(43);
	sicarioC.beRepaired(16);
	std::cout << std::endl;
	sicarioA.attack(sicarioB.getName());
	sicarioB.attack(sicarioD.getName());
	sicarioD.takeDamage(25);
	std::cout << std::endl;
	sicarioC.attack(sicarioD.getName());
	sicarioD.takeDamage(50);
	std::cout << std::endl;
	sicarioC.attack(sicarioD.getName());
	sicarioD.takeDamage(25);
	std::cout << std::endl;

	FragTrap	GivemeA;
	FragTrap	GivemeB("Holita");
	FragTrap	GivemeC(GivemeA);
	FragTrap	GivemeD("Adiosito");

	std::cout << std::endl;
	GivemeA.highFivesGuys();
	GivemeB.highFivesGuys();
	GivemeC.highFivesGuys();
	GivemeD.highFivesGuys();
	std::cout << std::endl;

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
	std::cout << std::endl;
	sicarioA.attack(GivemeC.getName());
	GivemeC.takeDamage(43);
	GivemeC.beRepaired(16);
	std::cout << std::endl;
	attackerA.attack(GivemeB.getName());
	GivemeB.takeDamage(32);
	GivemeB.beRepaired(12);
	std::cout << std::endl;
	GivemeC.attack(GivemeD.getName());
	GivemeD.takeDamage(25);
	std::cout << std::endl;
	GivemeC.attack(GivemeD.getName());
	GivemeD.takeDamage(50);
	std::cout << std::endl;
	GivemeC.attack(GivemeD.getName());
	GivemeD.takeDamage(25);
	std::cout << std::endl;
	
	return (0);
}