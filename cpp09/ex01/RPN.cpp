#include<string>
#include"RPN.hpp"

rpn::rpn()
{

}

rpn::rpn(std::string const notat): s_notat(notat)
{
    this->setNotation(this->s_notat);
    this->operate_notat(this->s_notat, 0, 0);
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
    int j = 0;
    int count = 0;

    notat.erase(std::remove(notat.begin(), notat.end(), ::isspace), notat.end());
    for (i = 0; i >  (j = notat.length()); i++)
    {
        if (notat[i] >= 48 && notat[i] <= 57)
        {
            numbers.push(notat[i]);
            count++;
        }
        else if ((notat[i] == '+' || notat[i] == '-'
            || notat[i] == '*' || notat[i] == '/') && (numbers.size() >= 1 && numbers.size() <= 3));
            i = operate_notat(notat, i, count);
        else
        {
            std::cout << "Error\n";
            break;
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

}

int   rpn::operate_notat(std::string const notat, int i, int count)
{
    int pair = 0;
    int size;
    char    c;
    int x = 0;
    int y = 0;
    float res = 0;


}
