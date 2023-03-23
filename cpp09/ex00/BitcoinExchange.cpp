#include<filesystem>
#include<string>
#include<sstream>
#include<fstream>
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() 
{

}

BitcoinExchange::BitcoinExchange(const std::string file)
{
	this->setPriceVector(file);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{

}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &equal)
{

}

BitcoinExchange::~BitcoinExchange()
{

}

int     BitcoinExchange::getDate(void) const
{

}

float   BitcoinExchange::getValue(void) const
{

}

void    BitcoinExchange::checkDate(int dat)
{

}

void    BitcoinExchange::checkValue(float val)
{

}

void    BitcoinExchange::setPriceVector(std::string file)
{
	std::string			line;
	std::string			date;
	std::string			value;
	std::ifstream 		pricef(file);
	if (!pricef.fail())
		while (getline(pricef, line))
		{
			std::stringstream lin(line);
			getline(lin, date, ',');
			getline(lin, value);
			date.erase(std::remove(date.begin(), date.end(), '-'), date.end());
			this->prices.push_back(std::make_pair(std::atoi(date.c_str()), std::atof(value.c_str())));
		}
	else
		std::cerr << "File not available." << std::endl;
}
