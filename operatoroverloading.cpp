#include<iostream>

using namespace std;


class comp
{
private:
    int a,b;
public:
    void setdata(int x ,int y)
    {a=x;
     b=y;}
    comp operator+(comp c)
    {
        comp temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    void display(comp z)
    {
        cout<<"the value of z3 is"<<z.a<<z.b;
    }

};


int main()
{
    int x1,y1,x2,y2;
comp z1,z2,z3;
    cout<<"enter value for z1 and z2 to sum";
    cin>>x1>>y1>>x2>>y2;
    z1.setdata(x1,y1);
    z2.setdata(x2,y2);
    z3=z1.operator+(z2);
    z1.display(z1);
    z2.display(z2);
    z3.display(z3);
}
