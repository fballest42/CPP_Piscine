#include"RPN.hpp"

rpn::rpn() {}

rpn::rpn(std::string const notat): s_notat(notat)
{
    this->setNotation(this->s_notat);
}

rpn::rpn(const rpn &copy): s_notat(copy.s_notat)
{
    this->setNotation(this->s_notat);
}

rpn &rpn::operator=(const rpn &equal)
{
    this->s_notat = equal.s_notat;
    this->numbers = equal.numbers;
    return *this;
}

rpn::~rpn() {}

void rpn::setNotation(std::string const notat)
{
    int i = 0;
    int j = notat.length();

    while (i < j)
    {
        if (notat[i] == ' ')
            i++;
        if (notat[i] >= '0' && notat[i] <= '9')
            this->numbers.push(notat[i] - 48);
        else if ((notat[i] == '+' || notat[i] == '-'
            || notat[i] == '*' || notat[i] == '/') && (this->numbers.size() >= 2))
            operate_notat(notat, i);
        else
            break;
        i++;
    }
    if(i == j && this->numbers.size() == 1)
    {
        std::cout << this->numbers.top() << std::endl;
        return;
    }
    else if ((i != j) || (i == j && this->numbers.size() > 1) || (i == j && (notat[i] == '+' || notat[i] == '-'
        || notat[i] == '*' || notat[i] == '/') && (this->numbers.size() == 1)))
    {
        std::cout << "Error\n";
        return;
    }
}

std::string  rpn::getNotation(void) const
{
    return this->s_notat;
}

float   rpn::operate_notat(std::string const notat, int i)
{
    float x;
    float y;
    
    x = this->numbers.top();
    this->numbers.pop();
    y = this->numbers.top();
    this->numbers.pop();
    if (notat[i] == '+')
        this->numbers.push(y + x);
    else if (notat[i] == '-')
        this->numbers.push(y - x);
    else if (notat[i] == '*')
        this->numbers.push(y * x);
    else if (notat[i] == '/' && x != 0)
        this->numbers.push(y / x);
    else if (notat[i] == '/' && x == 0)
    {
        std::cout << "Error" << std::endl;
        return ;
    }
    return this->numbers.top();
}
