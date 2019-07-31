#include<iostream>
#include<string.h>

using namespace std;

int fun(int a,int b)
{
    int c=a+b;
    return c;
}

int main()
{
    int x,y,z;
    cout<<"HI WELCOME TO CPP\n";
    cout<<"Enter values of x and y for Addition:";
    cin>>x>>y;
    z=fun(x,y);
    cout<<"The sum is : "<<z;
}

