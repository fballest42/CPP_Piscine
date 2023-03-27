#include"BitcoinExchange.hpp"


int main(int argc, char** argv)
{
    std::string     file_imput;
    
    //Check the number of arguments
    if (argc != 2)
    {
        std::cout << "Invalid arguments" << std::endl;
        return (-1);
    }
    //Charge the name of the file to file_imput string
    file_imput = std::string(argv[1]);

    //Different test that make the same but with different type of constructors
    std::cout << "\n\nTEST WHEN IT USE A DEFAULT CONSTRUCTOR\n";
    BitcoinExchange btc;
    btc.getMovements(file_imput);
    // std::cout << "\n\nTESTING GETTERS\n";
    // std::cout << "THE FILE WITH QUOTES IS: " << btc.getFile() << std::endl;
    // std::cout << "THE VECTOR IS\n";
    // std::vector<std::pair<int, float> >::iterator ite = btc.getPrices().end();
    // for(std::vector<std::pair<int, float> >::iterator it = btc.getPrices().begin(); it != ite; it++)
    //     std::cout << it->first << "<--->" << it->second << std::endl;

    // std::cout << "\n\nTEST WHEN IT USE A NORMAL CONSTRUCTOR\n";
    // BitcoinExchange btc2(file_imput);

    // std::cout << "\n\nTEST WHEN IT USE A COPY CONSTRUCTOR\n";
    // BitcoinExchange btc3(btc);
    // btc3.getMovements(file_imput);

    // std::cout << "\n\nTEST WHEN IT USE AN ASSIGNMENT CONSTRUCTOR\n";
    // BitcoinExchange btc4 = btc2;
    // btc4.getMovements(file_imput);

    return 0;
}
