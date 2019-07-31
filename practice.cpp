#include<iostream>
using namespace std;
class sd
{
private :
    int x,y;
public:
    ft(){};
    int value(int s,int t)
    {
        x=s; y=t;
    }
    ft(int x);
    ft(int x,int y)
    {
    int area;
    area=x*y;
    cout<<"area of Double parameter is"<<area;
    }
};
sd:: ft(int x)
{   int area;
    area=x*x;
    cout<<"area of single parameter is"<<area;

}

int main()
{
    sd s;
int a=3;
int b=4;

s.value(a,b);
s.ft(a);
s.ft(a,b);
return 0;
}
