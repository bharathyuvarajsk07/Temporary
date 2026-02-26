// You are using GCC
#include <iostream>
using namespace std;
main()
{
    int n1,n2,res;
    char op;
    cin>>n1>>n2;
    cin>>op;
    switch(op)
    {
        case '+':
        {
            res=n1+n2;
            cout<<"The addition of the given numbers is "<<res<<'.';
            break;
        }
        case '-':
        {
            res=n1-n2;
            cout<<"The subtraction of the given numbers is "<<res<<'.';
            break;
        }
        case '*':
        {
            res=n1*n2;
            cout<<"The multiplication of the given numbers is "<<res<<'.';
            break;
        }
        case '/':
        {
            float res1;
            res1=float(n1)/float(n2);
            cout<<"The division of the given numbers is "<<res1<<'.';
            break;
        }
        default:
        {
            cout<<"Invalid Operation";
            break;
        }
    }
}
