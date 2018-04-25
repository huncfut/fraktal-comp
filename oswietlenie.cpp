//Oświetlenie

//Rafał Majewski
//Kuba Żeligowski

#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>

int main()
{
    unsigned long long n,m;
    std::cin>>n>>m;
    std::vector<unsigned int> st, la;
    for (unsigned long long i=0; i<n; ++i)
    {
        unsigned int l;
        std::cin>>l;
        st.push_back(l);
    }
    for (unsigned long long i=0; i<m; ++i)
    {
        unsigned int l;
        std::cin>>l;
        la.push_back(l);
    }
    int ile=0, ilo;
    for (unsigned long long i=0; i<m; ++i)
    {
        int left, right;
        for (unsigned long long i2=0; i2<n-1; ++i2)
        {
            if (st[i2] <= la[i] && st[i2+1] >= la[i])
            {
                 left=st[i2];
                  right=st[i2+1];
                  break;
            }
        }
        ilo=std::max(abs(left-la[i]),abs(right-la[i]));
        if (ilo>ile) ile=ilo;
    }
    std::cout<<ile;
}
