#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <utility>
# include <vector>

class BitcoinExchange
{
	private:
		std::vector<std::pair<int, float> > prices;

	public:
		BitcoinExchange();
		BitcoinExchange(const std::string file);
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &equal);
		~BitcoinExchange();

		int     getDate(void) const;
		float   getValue(void) const;
		void    checkDate(int dat);
		void    checkValue(float val);
		void    setPriceVector(std::string file);
};    		

#endif