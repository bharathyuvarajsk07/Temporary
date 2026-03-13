#include<iostream>
using namespace std;
int fact(int n)
{
    if(n<=0 || n>100)
    {
        cout << "Invalid";
        return 0;
    }
    int fct = 1;
    for(int i = 1; i <=n; ++i)
    {
        fct *= i;
    }
    cout << "Factorial:" << fct;
}
int main()
{
    int num;
    cin >> num;
    fact(num);
    return 0;
}
