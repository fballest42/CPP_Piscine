#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <utility>
# include <vector>

class BitcoinExchange
{
	private:
		std::string 						file;
		std::vector<std::pair<int, float> > prices;

	public:
		BitcoinExchange();
		BitcoinExchange(const std::string file_imput);
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &equal);
		~BitcoinExchange();

		std::vector<std::pair<int, float> >     getPrices(void) const;
		std::string   							getFile(void) const;
		bool	checkDateImputFile(std::string date) const;
		bool	checkValueImputFile(float value) const;
		void	getMovements(std::string imput_file);
		void	setPriceVector(std::string file);
};    		

#endif