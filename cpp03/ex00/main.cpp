/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:18:39 by fballest          #+#    #+#             */
/*   Updated: 2022/02/02 10:47:56 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int     main(void)
{
	ClapTrap	attackerA;
	ClapTrap	attackerB("Stupid");
	ClapTrap	attackerD(attackerA);
	ClapTrap	attackerC("Genuine");
	
	attackerC = attackerB;

	attackerA.attack("Stupid");
	attackerB.takeDamage(4);
	attackerB.attack(attackerC.getName());
	attackerC.takeDamage(10);
	attackerC.beRepaired(3);
	attackerD.attack(attackerC.getName());
	attackerC.takeDamage(9);
	attackerC.takeDamage(10);
	attackerD.attack(attackerA.getName());
	attackerA.takeDamage(5);
	attackerA.beRepaired(8);
	attackerA.attack(attackerC.getName());
	attackerC.beRepaired(5);
	
	return (0);
}