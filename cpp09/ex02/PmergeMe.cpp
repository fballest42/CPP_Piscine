#include"PmergeMe.hpp"
// #include<unistd.h>

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(std::string const numbers)
{

	this->lista_time = 0;
	this->cola_time = 0;
	gettimeofday(&this->start, 0);
	std::cout << std::setw(10) << std::left << "Before: " << numbers << std::endl;
	this->setLista(numbers);
	this->setQueue(numbers);
}

PmergeMe::PmergeMe(PmergeMe const &copy): lista_time(copy.lista_time), cola_time(copy.cola_time), cola(copy.cola), lista(copy.lista)
{
	gettimeofday(&this->start, 0);
}

PmergeMe &PmergeMe::operator=(PmergeMe const &equal)
{
	this->lista_time = 0;
	this->cola_time = 0;
	gettimeofday(&this->start, 0);
	this->lista = equal.lista;
	this->cola = equal.cola;
	return *this;
}

PmergeMe::~PmergeMe()
{
	this->lista.erase(lista.begin(), lista.end());
	while (!this->cola.empty())
		this->cola.pop();
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
    	else if (token.length() > 0)
		{
			std::string::iterator it = token.begin();
			while (it != token.end())
			{
				if (!std::isdigit(*it))
				{
					std::cout << "Error: please use only digits." << std::endl;
					this->lista.erase(lista.begin(), lista.end());
					return ;
				}
				++it;
			}
			number = std::atol(token.c_str());
			if (number >= 0 && number <= INT_MAX)
				this->lista.push_back(int(std::atoi(token.c_str())));
			else
			{
				std::cout << "Error: Invalid arguments, numbers out of range." << std::endl;
				this->lista.erase(lista.begin(), lista.end());
				return ;
			}	
		}
	}
	if (this->lista.size() > 0)
		this->sorter_function(this->lista);
}

std::list<int>  PmergeMe::getLista(void) const
{
	return this->lista;
}

void            PmergeMe::setQueue(std::string const numbers)
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
			std::string::iterator it = token.begin();
			while (it != token.end())
			{
				if (!std::isdigit(*it))
				{
					std::cout << "Error: please use only digits." << std::endl;
					return ;
				}
				++it;
			}
			number = std::atol(token.c_str());
			if (number >= 0 && number <= INT_MAX)
				this->cola.push(int(std::atoi(token.c_str())));
			else
			{
				std::cout << "Error: Invalid arguments, numbers out of range." << std::endl;
				return ;
			}	
		}
	}
	if (this->cola.size() > 0)
		this->sorter_function(this->cola);
}

std::queue<int> PmergeMe::getQueue(void) const
{
	return this->cola;
}

std::list<int>          PmergeMe::sorter_function(std::list<int> &qol)
{
	long double 	elap;
	long			seconds, microseconds, size;
	std::string		numbers;
	
	size = qol.size();
	this->merge_insert(qol);
	std::cout << std::setw(10) << std::left << "After:";
	for (std::list<int>::iterator it = qol.begin(); it != qol.end(); ++it)
	{
		numbers += std::to_string(qol.front()) + " ";
		qol.pop_front();
	}
	std::cout << numbers << std::endl;
	gettimeofday(&this->end, 0);
	seconds = this->end.tv_sec - this->start.tv_sec;
	microseconds = this->end.tv_usec - this->start.tv_usec;
	elap = seconds + microseconds * 1e-6; 
	if (elap < 1.0)
		std::cout << "Time to process a range of: " << size << " elements with std::list  : " << std::fixed << std::setprecision(5) << elap << " microseconds." << std::endl;
	else
		std::cout << "Time to process a range of: " << size << " elements with std::list  : " << std::fixed << std::setprecision(5) << elap << " seconds." << std::endl;
	return qol;
}

std::queue<int>         PmergeMe::sorter_function(std::queue<int> &qol)
{
	long double 	elap;
	long			seconds, microseconds, size;
	
	size = qol.size();
	this->merge_insert(qol);
	// while (!qol.empty())
	// {
	// 	std::cout << " " << qol.front();
	// 	qol.pop();
	// }
	// std::cout << std::endl;
	gettimeofday(&this->end, 0);
	seconds = this->end.tv_sec - this->start.tv_sec;
	microseconds = this->end.tv_usec - this->start.tv_usec;
	elap = seconds + microseconds * 1e-6;
	if (elap < 1.0)
		std::cout << "Time to process a range of: " << size << " elements with std::queue : " << std::fixed << std::setprecision(5) << elap << " microseconds." << std::endl;
	else
		std::cout << "Time to process a range of: " << size << " elements with std::queue : " << std::fixed << std::setprecision(5) << elap << " seconds." << std::endl;
	return qol;
}

std::queue<int>         PmergeMe::merge_insert(std::queue<int> &qol)
{
	std::queue<int> qol_a, qol_b;
	int				middle;

	if (qol.size() <= 1)
		return qol;
    middle = qol.size() / 2;
    for (int i = 0; i < middle; i++)
		qol_a = push_pop(qol_a, qol);
	qol_b = push_pop_bucle(qol_b, qol);
    merge_insert(qol_a);
    merge_insert(qol_b);
	while (!qol_a.empty() && !qol_b.empty())
	{
        if (qol_a.front() <= qol_b.front())
			qol = push_pop(qol, qol_a);
		else
			qol = push_pop(qol, qol_b);
    }
	qol = push_pop_bucle(qol, qol_a);
	qol = push_pop_bucle(qol, qol_b);
	return qol;
}

std::list<int>          PmergeMe::merge_insert(std::list<int> &qol)
{
	std::list<int> qol_a, qol_b;
	int				middle;

	if (qol.size() <= 1)
		return qol;
    middle = qol.size() / 2;
    for (int i = 0; i < middle; i++)
		qol_a = push_pop(qol_a, qol);
	qol_b = push_pop_bucle(qol_b, qol);
    merge_insert(qol_a);
    merge_insert(qol_b);
	while (!qol_a.empty() && !qol_b.empty())
	{
        if (qol_a.front() <= qol_b.front())
			qol = push_pop(qol, qol_a);
		else
			qol = push_pop(qol, qol_b);
    }
	qol = push_pop_bucle(qol, qol_a);
	qol = push_pop_bucle(qol, qol_b);
	return qol;
}


std::queue<int>         PmergeMe::push_pop_bucle(std::queue<int> &dest, std::queue<int> &orig)
{
	while (!orig.empty())
		dest = push_pop(dest, orig);
	return dest;
}

std::list<int>          PmergeMe::push_pop_bucle(std::list<int> &dest, std::list<int> &orig)
{
	while (!orig.empty())
		dest = push_pop(dest, orig);
	return dest;
}

std::queue<int>         PmergeMe::push_pop(std::queue<int> &dest, std::queue<int> &orig)
{
    dest.push(orig.front());
    orig.pop();
	return dest;
}


std::list<int>          PmergeMe::push_pop(std::list<int> &dest, std::list<int> &orig)
{
    dest.push_back(orig.front());
    orig.pop_front();
	return dest;
}
