//Matematostenes i funkcje trygonometryczne

//Rafał Majewski
//Kuba Żeligowski

#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>

long double factorial(unsigned int n)
{
    if (n == 0)
       return 1;
    return n * factorial(n - 1);
}

long double sn(long double n)
{
    long double k=0;
    for (unsigned char i=0; i<4; ++i)
    {
        k+=pow(-1,i)*pow(n,1+2*i)/factorial(1+2*i);
    }
    return k;
}

long double cs(long double n)
{
    long double k=0;
    for (unsigned char i=0; i<4; ++i)
    {
        k+=pow(-1,i)*pow(n,2*i)/factorial(2*i);
    }
    return k;
}

long double tngs(long double n)
{
    long double k=n;
    k+=n*n*n/3;
    k+=2*n*n*n*n*n/15;
    k+=17*n*n*n*n*n*n*n/315;
    return k;
}
long double ctngns(long double n)
{
    long double k=1/n;
    k-=n/3;
    k-=n*n*n/45;
    k-=2*n*n*n*n*n/945;
    k-=n*n*n*n*n*n*n/4725;
    return k;
}

int main()
{
    unsigned long long n;
    std::cin>>n;
    for (unsigned long long i=0; i<n; ++i)
    {
        long double l;
        std::cin>>l;
        l=l*3.1415926/180;
        std::cout<<std::fixed<<std::setprecision(2)<<sn(l)<<' '<<cs(l)<<' '<<tngs(l)<<' '<<ctngns(l)<<std::endl;
    }
}
