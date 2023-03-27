#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>

class rpn
{
    private:
        std::string                 s_notat; 
        std::stack<float>           numbers;

    public:
        rpn();
        rpn(std::string const notat);
        rpn(const rpn &copy);
        rpn &operator=(const rpn &equal);
        ~rpn();

        void setNotation(std::string const notat);
        std::string  getNotation(void) const;
        int   operate_notat(std::string const notat, int i, int count);
};

#endif