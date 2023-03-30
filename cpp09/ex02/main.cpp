#include"PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Error: Invalid arguments.\n";
        return -1; 
    }
    int i = 1;
    std::string  num;

    while (argv[i])
    {
        num += argv[i];
        num += " ";
        i++;
    }
    PmergeMe pm(num);
    return 0;
}