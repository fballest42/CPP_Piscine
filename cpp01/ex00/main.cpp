/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:22:51 by fballest          #+#    #+#             */
/*   Updated: 2022/01/20 12:45:51 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main()
{
	Zombie		new_heap_zom("Zombi_Normal");
	Zombie		*new_stack_zom;

	new_stack_zom = newZombie("Zombi_Stack");
	randomChump("Zombi_Heap");
	delete new_stack_zom;
	return (0);
}