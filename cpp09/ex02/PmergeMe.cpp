#include"PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(std::string const numbers)
{
	std::cout << "HERE IS THE ARGUMENTS RECEIVED ==> " << numbers << std::endl;
	this->lista_time = 0;
	this->cola_time = 0;
	this->setLista(numbers);
	this->setQueue(numbers);
	this->orderLista();
	this->orderQueue();
}

PmergeMe::PmergeMe(PmergeMe const &copy): lista_time(copy.lista_time), cola_time(copy.cola_time), cola(copy.cola), lista(copy.lista) {}

PmergeMe &PmergeMe::operator=(PmergeMe const &equal)
{
	this->lista_time = 0;
	this->cola_time = 0;
	this->lista = equal.lista;
	this->cola = equal.cola;
	return *this;
}

PmergeMe::~PmergeMe()
{

}

void            PmergeMe::setLista(std::string const numbers)
{
	size_t pos = 0;
	std::string token;
	std::string delimeter = " ";
	std::string	num;
	long 	number;

	num = numbers;
	while ((pos = num.find(delimeter)) != std::string::npos)
	{
    	token = num.substr(0, pos);
		num.erase(0, pos + delimeter.length());
		if (token.length() == 0)
			continue;
    	if (token.length() > 0)
		{
			std::cout << "TOKEN = " << token << std::endl;
			//COMPROBAR SI SON DIGITOS
			number = std::atol(token.c_str());
			if (number >= 0 && number <= INT_MAX)
				this->lista.push_back(int(std::atoi(token.c_str())));
			else
			{
				std::cout << "Error: Invalid arguments, numbers out of range." << std::endl;
				return ;
			}	
		}
	}
}

std::list<int>  PmergeMe::getLista(void) const
{
	return this->lista;
}

void            PmergeMe::setQueue(std::string const numbers)
{
	std::cout << numbers << std::endl;
}

std::queue<int> PmergeMe::getQueue(void) const
{
	return this->cola;
}

void            PmergeMe::orderLista(void)
{
	std::cout << "HOLA" << std::endl;
}

void            PmergeMe::orderQueue(void)
{
	std::cout << "HOLA" << std::endl;
}
