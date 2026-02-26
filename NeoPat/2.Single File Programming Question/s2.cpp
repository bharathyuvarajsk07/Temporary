// You are using GCC
#include <iostream>
using namespace std;
main()
{
    int age,g;
    cin>>age>>g;
    if(g==1)
    {
        if(age<25)
        {
            cout<<"The person belongs to Group 1.";
        }
        else if(age <=45)
        {
            cout<<"The person belongs to Group 3.";
        }
        else
        {
            cout<<"The person belongs to group 5.";
        }
    }
    else if(g==2)
    {
        if(age<25)
        {
            cout<<"The person belongs to Group 2.";
        }
        else if(age <=45)
        {
            cout<<"The person belongs to Group 4.";
        }
        else
        {
            cout<<"The person belongs to group 5.";
        }
    }
    else
    {
        cout<<"Invalid";
    }
}
