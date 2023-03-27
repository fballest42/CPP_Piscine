#include<filesystem>
#include<string>
#include<sstream>
#include<fstream>
#include<ctime>
#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(): file("./data.csv")
{
	this->setPriceVector(this->file);
}

BitcoinExchange::BitcoinExchange(const std::string file_imput): file("./data.csv")
{
	this->setPriceVector(this->file);
	this->getMovements(file_imput);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy): file("./data.csv"), prices(copy.prices) {std::cout << "AQUIIIIIIII\n";}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &equal)
{
	this->file = equal.file;
	std::vector<std::pair<int, float> >::iterator ite = this->prices.end();
	for (std::vector<std::pair<int, float> >::iterator it = this->prices.begin(); it != ite; ++it)
	{
		this->prices.push_back(std::make_pair(it->first, it->second));
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
	this->prices.clear();
}

std::vector<std::pair<int, float> >     BitcoinExchange::getPrices(void) const
{
	return this->prices;
}

std::string		BitcoinExchange::getFile(void) const
{
	return this->file;
}

bool	BitcoinExchange::checkDateImputFile(std::string date) const
{
	int		year = 0, month = 0, day = 0;
	tm time_date;
	time_t uni_time;
	std::string m_date = date;

	memset(&time_date, 0, sizeof(tm));
	strptime(date.c_str(),"%Y-%m-%d", &time_date);
	uni_time = mktime(&time_date);
	time_date = *localtime(&uni_time);
	year = std::atoi(std::strtok(const_cast<char *>(m_date.c_str()), "-"));
	month = std::atoi(std::strtok(NULL, "-"));
	day = std::atoi(std::strtok(NULL, "-"));
 	if ((time_date.tm_year + 1900 == year) && (time_date.tm_mon + 1 == month) && (time_date.tm_mday == day))
		return true;
	std::cout << "Error: bad imput => " << date << std::endl;
	return false;
}

bool	BitcoinExchange::checkValueImputFile(float const value) const
{
	if (value < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	else if (value > 1000)
	{
		std::cout << "Error: number too large." << std::endl;
		return false;
	}
	return true;
}

void	BitcoinExchange::getMovements(std::string imput_file)
{
	std::string			line;
	std::string			date;
	std::string			u_time;
	std::string			value;
	std::ifstream 		imputf(imput_file);
	int					n;

	if (!imputf.fail())
	{
		getline(imputf, line);
		while (getline(imputf, line))
		{
			std::stringstream lin(line);
			getline(lin, date, '|');
			getline(lin, value, '\n');
			float val = std::strtof(value.c_str(), NULL);
			if (checkDateImputFile(date) && checkValueImputFile(val))
			{
				u_time = date.substr(0, 10);
				date.erase(std::remove(date.begin(), date.end(), '-'), date.end());
				std::vector<std::pair<int, float> >::iterator it = this->prices.begin();
				n = 0;
				while (it->first <= strtof(date.c_str(), NULL))
				{
					it++;
					n++;
				}
				if (n > 0)
					std::cout << u_time << " => " << val << " = " << this->prices[n - 1].second * val << std::endl;
				else
					std::cout << "Date is lower than any date in the file data.csv." << std::endl;
			}
		}
	}
}

void    BitcoinExchange::setPriceVector(std::string file)
{
	std::string			line;
	std::string			date;
	std::string			value;
	std::ifstream 		pricef(file);

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
		}
	}
	else
		std::cerr << "File not available." << std::endl;
	// // Only usefull to print which data has charged the funtion you will need a "n" counter initialize to 0.
	// for (int i = 0; i <= n - 1; i++)
	//  	std::cout << this->prices[i].first << " -- " << std::fixed << std::setprecision(2) << this->prices[i].second << std::endl;
}
