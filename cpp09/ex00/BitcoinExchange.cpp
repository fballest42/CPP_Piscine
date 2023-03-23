#include<filesystem>
#include<string>
#include<sstream>
#include<fstream>
#include<time.h>
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() 
{
	this->setPriceVector(this->file);
}

BitcoinExchange::BitcoinExchange(const std::string file_imput)
{
	this->setPriceVector(this->file);
	this->getMovements(file_imput);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &equal)
{

}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "Destorying BitcoinExchange Class" << std::endl;
}

int     BitcoinExchange::getDate(void) const
{

}

float   BitcoinExchange::getValue(void) const
{

}

void	BitcoinExchange::getMovements(std::string imput_file)
{
	std::string			line;
	std::string			date;
	std::string			value;
	std::ifstream 		imputf(imput_file);
	if (!imputf.fail())
	{
		getline(imputf, line);
		while (getline(imputf, line))
		{
			std::stringstream lin(line);
			getline(lin, date, '|');
			getline(lin, value, '\n');
			//Chequear que fecha es válida
			//Chequear que valor es válido
			//Si ambos son correctos hacer lo que viene a continuación
			date.erase(std::remove(date.begin(), date.end(), '-'), date.end());
			//Comparar fecha con las del vector quedandose con el valor por debajo
			//Hacer los cálculos con el valor anteriormente optenido
			//Imprimir y dar formato a la salida
		}
	}
}

void    BitcoinExchange::setPriceVector(std::string file)
{
	std::string			line;
	std::string			date;
	std::string			value;
	std::ifstream 		pricef(file);
	int n = 0;
	if (!pricef.fail())
	{
		getline(pricef, line);
		while (getline(pricef, line))
		{
			std::stringstream lin(line);
			getline(lin, date, ',');
			getline(lin, value, '\n');
			date.erase(std::remove(date.begin(), date.end(), '-'), date.end());
			this->prices.push_back(std::make_pair(std::atoi(date.c_str()), std::strtof(value.c_str(), NULL)));
			n++;
		}
	}
	else
		std::cerr << "File not available." << std::endl;
	for (int i = 0; i < n - 1; i++)
	 	std::cout << this->prices[i].first << " -- " << std::fixed << std::setprecision(2) << this->prices[i].second << std::endl;
	std::cout << this->prices[0].first << " -- " << std::fixed << std::setprecision(2) << this->prices[0].second << std::endl;
}
