//Wzrost i spadek wysokości

//Rafał Majewski
//Kuba Żeligowski

#include <iostream>
#include <math.h>
#include <iomanip>

int main()
{
    unsigned long long count;
    std::cin>>count;
    long double totalDown=0, totalUp=0;
    for (unsigned long long i=0; i<count; ++i)
    {
        long double a, b;
        std::cin>>a>>b;
        if (a<0)
        {
            totalDown+=b*sin(a*3.1415926/180);
        }
        else if (a>0)
        {
            totalUp+=b*sin(a*3.1415926/180);
        }

    }
    std::cout<<std::fixed<<std::setprecision(2)<<fabs(totalDown)<<' '<<totalUp;
}
