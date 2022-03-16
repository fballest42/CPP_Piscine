/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:10:21 by fballest          #+#    #+#             */
/*   Updated: 2022/03/16 10:34:35 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main(void)
{
	try
	{
		Bureaucrat      tester("Simon", 125);
		std::cout << tester << std::endl;
		tester.gradeLower(1);
		std::cout << tester << std::endl;
		tester.gradeUpper(11);
		std::cout << tester << std::endl;
		tester.gradeUpper(2);
		std::cout << tester << std::endl;
		tester.gradeUpper(120);
		std::cout << tester << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}