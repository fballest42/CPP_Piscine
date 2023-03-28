#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>

class rpn
{
    private:
        std::string                 s_notat; 
        std::stack<float>           numbers;
        float                       res;
        rpn();

    public:
        rpn(std::string const notat);
        rpn(const rpn &copy);
        rpn &operator=(const rpn &equal);
        ~rpn();

        void         setNotation(std::string notat);
        std::string  getNotation(void) const;
        int          operate_notat(std::string const notat, int i);
};

#endif