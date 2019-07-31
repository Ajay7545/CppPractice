#include<iostream>

using namespace std;

class comp
{
//private:
   // int x,y;
public:
    int x,y;
    void setvalue(int a,int b)
    {
        x=a;
        y=b;
    }
    void display(comp z)
    {
        cout<<"The complex no is: "<<z.x<<z.y;
    }
/*comp operator+(comp z)
{
    comp z3;
    z3.x=x+z.x;
    z3.y=y+z.y;
    return z3;
}*/
};
comp operator+(comp z1,comp z2)
{
    comp z3;
    z3.x=z1.x+z2.x;
    z3.y=z1.y+z2.y;
    return z3;
}

int main()
{
    comp z1,z2,z3;
    int x1,y1,x2,y2;
    cout<<"enter values:";
    cin>>x1>>y1>>x2>>y2;
    z1.setvalue(x1,y1);
    z2.setvalue(x2,y2);
    z1.display(z1);
    z2.display(z2);
   z3=z1+z2;
    //z3=z1.operator+(z2);
    z3.display(z3);
}
