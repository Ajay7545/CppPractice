#include<iostream>

using namespace std;
class B;

class A
{
    private:
        int x;
    public:
        void setd(int s)
        {
            x=s;
        }
        friend void fun(A,B);
};

class B
{    private:
        int y;
    public:
        void setd(int s)
        {
            y=s;
        }
        friend void fun(A,B);
};

void fun(A x1,B y1)
{
    cout<<"The sum is:"<<x1.x+y1.y;
}

int main()
{
    A a1;
    B b1;
    a1.setd(5);
    b1.setd(7);
    fun(a1,b1);


}
