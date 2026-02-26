// You are using GCC
#include <iostream>
using namespace std;
main()
{
    int a,b,c,y,u,v,i,j,k,x,z;
    cin>>a>>b>>c;
    cin>>v>>u;
    cin>>i>>j>>k;
    x= a+b*5/4+c%3*5;
    if(u>v) { y=u; }
    else { y=v; }
    z= ++i && ++j && ++k;
    cout<<"x = "<<x<<"\ny = "<<y<<"\nz = "<<z;
}
