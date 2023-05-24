#include"RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: Invalid arguments.\n";
        return -1; 
    }
    std::string     calculo = std::string(argv[1]);
    // std::cout << "\n\nTEST EXPLICIT CONSTRUCTOR\n";
    rpn    rpn1(calculo);
    // std::cout << "\n\nTEST COPY CONSTRUCTOR\n";
    // rpn    rpn_copy(rpn1);
    // std::cout << "\n\nTEST ASSIGNMENT CONSTRUCTOR\n";
    // rpn    rpn_assig = rpn1;

    // std::cout << "\n\nTEST DEL SUBJECT\n";
    // std::cout << "8 9 * 9 - 9 - 9 - 4 - 1 +\n";
    // rpn    rpn2("8 9 * 9 - 9 - 9 - 4 - 1 +");
    // std::cout << "7 7 * 7 -\n";
    // rpn    rpn3("7 7 * 7 -");
    // std::cout << "1 2 * 2 / 2 * 2 4 - +\n";
    // rpn    rpn4("1 2 * 2 / 2 * 2 4 - +");
    // std::cout << "(1 + 1)\n";
    // rpn    rpn5("(1 + 1)");
    
    // std::cout << "\n\nTEST DE ERROR\n";
    // std::cout << "8 9 * 9 - 9 - 9 - 4 - 1 +\n";
    // rpn    rpn2("8 9 * 9 - 9 - 9 - 4 - 1 +");

    // std::cout << "\n\nTEST DIV BY ZERO\n";
    // std::cout << "1 2 * 0 / 2 * 2 4 - +\n";
    // rpn    rpn6("1 2 * 0 / 2 * 2 4 - +");

    return 0;
}