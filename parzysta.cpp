//Parzysta parzystość

//Rafał Majewski
//Kuba Żeligowski

#include <iostream>

void check(std::string number)
{
    for (unsigned short i=0; i<number.size(); ++i)
    {
        if ((number[i]-'0')%2 == 0)
        {
            std::cout<<"TAK";
            return;
        }
    }
    std::cout<<"NIE";
}

int main()
{
    std::string number;
    std::cin>>number;
    check(number);
}
