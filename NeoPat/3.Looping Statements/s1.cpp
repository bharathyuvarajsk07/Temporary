// You are using GCC
#include <iostream>
using namespace std;
main()
{
    int ip,temp,even=0,odd=0;
    cin>>ip;
    while(ip>0)
    {
        temp=ip%10;
        if(temp%2==0) 
        {
            even=even+temp;
        }
        else
        {
            odd=odd+temp;
        }
        ip=ip/10;
    }
    cout<<odd<<" "<<even;
}
