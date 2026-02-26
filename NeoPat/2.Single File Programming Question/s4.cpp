// You are using GCC
//9w,9blk,1red
#include <iostream>
using namespace std;
main()
{
    int c,points;
    char r;
    cin>>c>>r;
    if(c<1 || c>9)
    {
        cout<<"Invalid Input";
    }
    else
    {
        points=c;
        if(r=='y')
        {
            points=points+5;
        }
        cout<<points;
    }
}
