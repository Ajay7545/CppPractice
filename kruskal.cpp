#include<iostream>

using namespace std;

struct edge
{
    int id;
    int w;
};

int main()
{
    int n,i,k;
    cin>>n;
    struct edge e[n];
    struct edge s[n];
    for(i=0 ,k=0;i<n;i++ ,k++)
    {
        e[i].id=k;
        cin>>e[i].w;
        s[i].id=e[i].id;
        s[i].w=e[i].w;

    }




}
