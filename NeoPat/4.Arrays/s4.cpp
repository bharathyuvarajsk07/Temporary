// You are using GCC
#include <iostream>
using namespace std;
main()
{
    int size;
    cin>>size;
    int array[size]={};
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int count=0;
    for(int j=0;j<size;j++)
    {
        bool flag=true;
        for(int k=j+1;k<size;k++)
        {
            if(array[j]<array[k])
            {
                flag=false;
                break;
            }
        }
        if(flag) count++;
    }
    cout<<count;
}
