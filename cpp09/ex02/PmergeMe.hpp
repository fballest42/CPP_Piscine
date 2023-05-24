#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <string>
# include <utility>
# include <queue>
# include <sys/time.h>
# include <iomanip>
# include <list>

class PmergeMe
{
    private:
        unsigned int        lista_time;
        unsigned int        cola_time;
        struct timeval      start;
        struct timeval      end;
        std::queue<int>     cola;
        std::list<int>      lista;
        PmergeMe();

    public:
        PmergeMe(std::string const numbers);
        PmergeMe(PmergeMe const &copy);
        PmergeMe &operator=(PmergeMe const &equal);
        ~PmergeMe();

        void                    setLista(std::string const numbers);
        std::list<int>          getLista(void) const;
        void                    setQueue(std::string const numbers);
        std::queue<int>         getQueue(void) const;
        std::queue<int>         sorter_function(std::queue<int> &qol);
        std::list<int>          sorter_function(std::list<int> &qol);
        std::queue<int>         merge_insert(std::queue<int> &qol);
        std::list<int>          merge_insert(std::list<int> &qol);
        std::queue<int>         push_pop_bucle(std::queue<int> &dest, std::queue<int> &orig);
        std::list<int>          push_pop_bucle(std::list<int> &dest, std::list<int> &orig);
        std::queue<int>         push_pop(std::queue<int> &dest, std::queue<int> &orig);
        std::list<int>          push_pop(std::list<int> &dest, std::list<int> &orig);
};

#endif
