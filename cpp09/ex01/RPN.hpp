#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <string>
# include <utility>
# include <stack>

class rpn
{
    private:
        std::string                 s_notat; 
        std::stack<float>           numbers;
        rpn();

    public:
        rpn(std::string const notat);
        rpn(const rpn &copy);
        rpn &operator=(const rpn &equal);
        ~rpn();

        void            setNotation(std::string const notat);
        std::string     getNotation(void) const;
        void            operate_notat(std::string const notat, int i);
};

#endif