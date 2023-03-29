#include"PmergeMe.hpp"
#include<unistd.h>

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(std::string const numbers)
{
	std::cout << "HERE IS THE ARGUMENTS RECEIVED ==> " << numbers << std::endl;
	this->lista_time = 0;
	this->cola_time = 0;
	this->setLista(numbers);
	this->setQueue(numbers);
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
	this->lista.erase(lista.begin(), lista.end());
	while (!this->cola.empty())
		this->cola.pop();
	std::cout << "Bye\n";
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
		this->orderLista();
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
		this->orderQueue();
}

std::queue<int> PmergeMe::getQueue(void) const
{
	return this->cola;
}

void            PmergeMe::orderLista(void)
{
	time_t	start;
	time_t  end;
	double seconds;
	std::list<int> 	list;
	
	time(&start);
	// list.assign(this->lista.begin(), this->lista.end());
	this->merge_insert(this->lista);
	std::cout << "HERE IS THE LIST SORTED ==>";
	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
	{
		std::cout << " " << list.front();
		list.pop_front();
	}
	time(&end);
	seconds = std::difftime(end, start);
	std::cout << ". And SORTed it delayed: " << std::fixed << std::setprecision(4) << seconds << " microseconds." << std::endl;
}

void            PmergeMe::orderQueue(void)
{

	// std::clock_t	start;	
	// start = std::chrono::high_resolution_clock::now()
	// HERE THE SORT ALGORITHM
	this->merge_insert(this->cola);
	std::cout << "HERE IS THE QUEUE SORTED ==>";
	while (!this->cola.empty())
	{
		std::cout << " " << this->cola.front();
		this->cola.pop();
	}
	// end = std::chrono::now();
	// std::chrono::duration<double, std::milli>(end - start).count();
	std::cout << ". And SORTed it delayed: " << std::fixed << std::setprecision(3) << "TIEMPO_A_CALCULAR" << " miliseconds." << std::endl;
}

template<typename Container> Container PmergeMe::merge_insert(Container &qol)
{
	Container qol_a, qol_b;
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


template<typename Container> Container PmergeMe::push_pop_bucle(Container &dest, Container &orig)
{
	while (!orig.empty())
		dest = push_pop(dest, orig);
	return dest;
}

template<typename Container> Container PmergeMe::push_pop(Container &dest, Container &orig)
{
    dest.push(orig.front());
    orig.pop();
	return dest;
}

template<typename Container> Container PmergeMe::push_pop(Container &dest, Container &orig)
{
    dest.push_back(orig.front());
    orig.pop_back();
	return dest;
}
