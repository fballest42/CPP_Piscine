#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <string>
# include <utility>
# include <queue>
# include <ctime>
# include <thread>
# include <iomanip>
# include <list>

class PmergeMe
{
    private:
        unsigned int        lista_time;
        unsigned int        cola_time;
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
        void                    orderLista(void);
        void                    orderQueue(void);
        // template<class T> T     merge_insert_sort(T sor);
};

#endif
