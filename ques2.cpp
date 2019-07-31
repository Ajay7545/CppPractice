#include<iostream>
using namespace std;

struct player
{
    char name[30];
    int goals;
    int club;
    int age;
    int exp;
}p[5];
int main()
{
    struct player p[5];
    int i,j,temp;

    for(i=0;i<5;i++)
    {
        cin>>p[i].name;
        cin>>p[i].goals;
        cin>>p[i].club;
        cin>>p[i].age;
        cin>>p[i].exp;
    }

    for(i=0;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
           if(p[j].exp>p[j+1].exp)
           {
               temp=p[j].exp;
               p[j].exp=p[j+1].exp;
               p[j+1].exp=temp;
           }
        }
    }

    for(i=0;i<5;i++)
    {
        cout<<p[i].name;
        cout<<p[i].goals;
        cout<<p[i].club;
        cout<<p[i].age;
        cout<<p[i].exp;
    }

}
