#include"BitcoinExchange.hpp"


int main(int argc, char** argv)
{
    std::string     file;
    if (argc != 2)
    {
        std::cout << "Invalid arguments" << std::endl;
        return (-1);
    }
    file = std::string(argv[1]);
    BitcoinExchange btc(file);
    return 0;
}