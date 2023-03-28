#include<string>
#include<utility>
#include"RPN.hpp"

rpn::rpn() {}

rpn::rpn(std::string const notat): s_notat(notat)
{
    this->setNotation(this->s_notat);
    this->operate_notat(this->s_notat, 0);
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

void rpn::setNotation(std::string notat)
{
    int i = 0;
    int j = notat.length();

    for (i = 0; i < j; i++)
    {
        while (notat[i] == ' ')
            i++;
        while (notat[i] >= '0' && notat[i] <= '9')
        {
            this->numbers.push(notat[i] - 48);
            i++;
        }
        if ((notat[i] == '+' || notat[i] == '-'
            || notat[i] == '*' || notat[i] == '/') && (this->numbers.size() >= 2 && this->numbers.size() <= 3))
        {
            this->res = operate_notat(notat, i);
            i++;
        }
        else
        {
            std::cout << "Error\n";
            return;
        }
    }
    // for(i = 0; i <= (j = notation.size()); i++)
    // {
    //     std::cout << notation.top() << "\n";
    //     notation.pop();
    // }
}

std::string  rpn::getNotation(void) const
{
    return this->s_notat;
}

int   rpn::operate_notat(std::string const notat, int i)
{
    float x;
    float y;

    x = this->numbers.top();
    this->numbers.pop();
    y = this->numbers.top();
    this->numbers.pop();
    std::cout << "X= " << x << " -- Y= " << y << "\n";
    if (notat[i] == '+')
        this->numbers.push(x + y);
    else if (notat[i] == '-')
        this->numbers.push(x - y);
    else if (notat[i] == '*')
        this->numbers.push(x * y);
    else if (notat[i] == '/')
        this->numbers.push(x / y);
    std::cout << "RESULT= " << this->numbers.top() << std::endl;
    return this->numbers.top();
}
