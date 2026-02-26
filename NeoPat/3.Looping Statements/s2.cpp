// You are using GCC
#include <iostream>
using namespace std;
main()
{
    int ip,s=0;
    cin>>ip;
    while(ip!=0)
    {
        ++s;
        ip=ip/10;
    }
    cout<<s;
}
