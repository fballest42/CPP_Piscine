/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:30:37 by fballest          #+#    #+#             */
/*   Updated: 2022/03/23 14:47:59 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <list>

class Things
{
	private:
		std::string _name;
	public:
		Things(std::string name) : _name(name){}
		~Things() {}
		void	setName(std::string name)
		{
			this->_name = name;
		}
		std::string getName(void) const
		{
			return (this->_name);
		}
};

std::ostream &operator<<(std::ostream &out, Things const &op)
{
	out << op.getName();
	return (out);
}

int main()
{
	std::cout << "***BEGINING THE SUBJECT TESTS***" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	std::cout << std::endl;
	std::cout << "*****BEGINING MY OWN TESTS*****" << std::endl;
	MutantStack<Things> cosas;
	cosas.push(Things("Taza"));
	cosas.push(Things("Tetera"));
	cosas.push(Things("Cuchara"));
	cosas.push(Things("Cucharon"));
	MutantStack<Things>::iterator start = cosas.begin();
	MutantStack<Things>::iterator finish = cosas.end();
	std::cout << "Las cosas de la Cocina son:" << std::endl;
	while (start != finish)
	{
		std::cout << *start << std::endl;
		start++;
	}
	MutantStack<Things> cosas2(cosas);
	MutantStack<Things>::iterator start2 = cosas2.begin();
	MutantStack<Things>::iterator finish2 = cosas2.end();
	std::cout << std::endl;
	std::cout << "Las cosas de la Salon son:" << std::endl;
	while (start2 != finish2)
	{
		std::cout << *start2 << std::endl;
		start2++;
	}
	return 0;
}

// int main()
// {
//    std::list<int> mstack;

//    mstack.push_back(5);
//    mstack.push_back(17);

//    std::cout << mstack.back() << std::endl;

//    mstack.pop_back();

//    std::cout << mstack.size() << std::endl;

//    mstack.push_back(3);
//    mstack.push_back(5);
//    mstack.push_back(737);
//    //[...]
//    mstack.push_back(0);

//    std::list<int>::iterator it = mstack.begin();
//    std::list<int>::iterator ite = mstack.end();

//    ++it;
//    --it;

//    while (it != ite)
//    {
//        std::cout << *it << std::endl;
//        ++it;
//    }
//    std::list<int> s(mstack);
//    return 0;
// }
