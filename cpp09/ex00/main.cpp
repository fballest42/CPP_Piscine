#include"BitcoinExchange.hpp"


int main(int argc, char** argv)
{
    std::string     file_imput;
    if (argc != 2)
    {
        std::cout << "Invalid arguments" << std::endl;
        return (-1);
    }
    file_imput = std::string(argv[1]);
    std::cout << "\n\nWHEN USE A DEFAULT CONSTRUCTOR\n";
    BitcoinExchange btc;
    btc.getMovements(file_imput);
    std::cout << "\n\nWHEN USE A NORMAL CONSTRUCTOR\n";
    BitcoinExchange btc2(file_imput);
    // //WHEN USE A COPY CONSTRUCTOR
    // BitcoinExchange btc3(btc);
    // btc3.getMovements(file_imput);
    // //WHEN USE AN EQUALATION CONSTRUCTOR
    // BitcoinExchange btc4 = btc2;
    return 0;
}
