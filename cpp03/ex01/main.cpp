/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:18:39 by fballest          #+#    #+#             */
/*   Updated: 2022/01/31 12:00:44 by fballest         ###   ########.fr       */
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
	attackerC.takeDamage(105);
	attackerC.takeDamage(10);
	attackerD.attack(attackerA.getName());
	attackerA.takeDamage(29);
	attackerA.beRepaired(8);
	attackerA.attack(attackerC.getName());
	attackerC.beRepaired(75);
	
	return (0);
}