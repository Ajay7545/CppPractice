#include<iostream>
using namespace std;

int inter(int a[],int n,int e);

int main()
{
    int i,x,e,res;
    cout<<"enter value for no of array:";
    cin>>x;
    int a[x];
    for(i=0;i<x;i++)
        cin>>a[i];
    cout<<"Enter the element for search";
    cin>>e;
    res=inter(a,x,e);
    cout<<"the ans is:"<<res;
}

int inter(int a[],int n,int e)
{
    int i,pos,start=0,endd=n-1;
    while(e>=a[start]&& e<a[endd]&&start<=endd)
    {
        pos=(((double)(endd-start)/(a[endd]-a[start]))*(e-a[start]));
        if(e>=a[pos])
            start=pos+1;
        if(e<a[pos])
            endd=pos-1;
        if(a[pos]==e)
            return pos;


    }
}
