#include<iostream>
using namespace std;
template <class X>
class array
{
private:
    struct cblock
    {
        int capa;
        X *arrptr;
    };
    cblock *s;
public:
    array(int capacity)
    {
        s=new cblock;
        s->capa=capacity;
        s->arrptr=new X[s->capa];
    }
    void addelement(int index,X data)
    {
        if(index>=0&&index<=s->capa-1)
            s->arrptr[index]=data;
        else
            cout<<"array is not valid";
    }
    void viewelement(int index,X &data)
    {
        if(index>=0&&index<=s->capa-1)
        data=s->arrptr[index];
    }
    void viewlist()
    {   int i;
        for(i=0;i<=s->capa-1;i++)
            cout<<" "<<s->arrptr[i];
    }
};
int main()
{
    array <float>a1(4);
    a1.addelement(0,5.2);
    a1.addelement(1,8.1);
    a1.addelement(2,3.5);
    a1.addelement(3,4.3);
    a1.viewlist();

}
