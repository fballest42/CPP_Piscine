#include"RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: Invalid arguments.\n";
        return -1; 
    }
    std::string     calculo = std::string(argv[1]);
    rpn    rpn1(calculo);
    return 0;
}