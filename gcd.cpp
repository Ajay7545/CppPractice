#include<iostream>
using namespace std;

int gcd(int x,int y)
{
    if(x==y)
        return x;
    if(x%y==0)
        return y;
    if(y%x==0)
        return x;
    if(x>y)
        gcd(x%y,y);
    else
        gcd(x,y%x);
}
int main()
{
 int k,l,h;
 cout<<"enter: ";
 cin>>k>>l;
 h=gcd(k,l);
 cout<<"\n"<<h;
}
