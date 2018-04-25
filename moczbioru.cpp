//Moc zbioru

//Rafał Majewski
//Kuba Żeligowski

#include <iostream>
#include <math.h>
#include <iomanip>

int NWD(int a, int b)
{
    while(a!=b)
       if(a>b)
           a-=b; //lub a = a - b;
       else
           b-=a; //lub b = b-a
    return a; // lub b - obie zmienne przechowują wynik NWD(a,b)
}

int main()
{
    unsigned long long count;
    std::cin>>count;
    for (unsigned long long i=0; i<count; ++i)
    {
        unsigned long long number, co=0;;
        std::cin>>number;
        for (unsigned long long i2=1; i2<=number; ++i2)
        {
            for (unsigned long long i3=i2+1; i3<=number; ++i3)
            {
            if (NWD(i2,i3) == 1) ++co;
            }
        }
        std::cout<<co<<std::endl;
    }
}
