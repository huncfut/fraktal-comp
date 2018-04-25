//Dopasuj hasło

//Rafał Majewski
//Kuba Żeligowski

#include <iostream>

bool check(std::string s1, std::string s2)
{
    if (s1.size() != s2.size()) return false;
    for (unsigned long long i=0; i<s1.size(); ++i)
    {
        if (s2[i] != '*')
        {
            if (s2[i] != s1[i]) return false;
        }
    }
    return true;
}

int main()
{
    unsigned long long count;
    std::cin>>count;
    for (unsigned long long i=0; i<count; ++i)
    {
        std::string s1, s2;
        std::cin>>s1;
        std::cin>>s2;
        check(s1, s2) ? std::cout<<"ok"<<std::endl : std::cout<<"error"<<std::endl;
    }
}
