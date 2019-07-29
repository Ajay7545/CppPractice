#include<iostream>

using namespace std;

class circle
{
private:
    int rad;
public:
    void area(int x);
    void display();
};
void circle:: area(int x)
{
    rad=x;
    float  area;
    area=3.14*rad*rad;
}
void circle:: display()
{
    cout<<"The area of cicle is"<<3.14*rad*rad;
}

int main()
{
    int r;
    circle c1;
    cout<<"Enter radius:";
    cin>>r;

    c1.area(r);
    c1.display();
}
