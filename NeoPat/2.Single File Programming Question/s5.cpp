// You are using GCC
#include <iostream>
using namespace std;
main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b+c)==180)
    {
        if(a==b && b==c)
        {
            cout<<"Prize 3";
        }
        else if(a==90 || b==90 || c==90)
        {
            cout<<"Prize 2";
        }
        else
        {
            cout<<"Prize 1";
        }
    }
    else
    {
        cout<<"No Prize";
    }
}
