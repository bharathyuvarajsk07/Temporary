#include <iostream>
using namespace std;
main()
{
    int n1,n2;
    cin>>n1>>n2;
    if(n2>n1)
    {
        for(int i=n1;i<n2;i+=60)
        cout<<"All positions change in year"<<i<<endl;
    }
}
