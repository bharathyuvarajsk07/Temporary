#include <iostream>
using namespace std;
main()
{
    int a=0,s,n;
    cin>>s>>n;
    while(1)
    {
        if((a*a)>n)
        {
            a--;
            break;
        }
        a++;
    }
    a=a*a*s*s;
    cout<<"Area of thelargest possible square is"<<a<<"sqcm.";
}
