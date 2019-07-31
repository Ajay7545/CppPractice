#include<iostream>

using namespace std;

void divmerge(int a[],int s,int m,int e,int t)
{
    int k,n1,n2;
    n1=m-s;
    n2=e-m;
    k=s;

    if(a[m]-a[s]!=t)
        cout<<"the missing is"<<a[s]+t;
    if(a[e]-a[m]!=t)
        cout<<"the missing is"<<a[m]+t;





}

void divide(int a[],int s,int e,int t)
{
    int k,i;
    int m=(s+e)/2;
    divide(a,s,m,t);
    divide(a,m+1,e,t);

    divmerge(a,s,m,e,t);


}


int main()
{
    int i,j,n,k,t[2];

    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i=0;

    t[0]=a[i+1]-a[i];
    i++;
    t[1]=a[i+1]-a[i];
    while(t[0]!=t[1])
{
    i++;
    t[0]=a[i+1]-a[i];
    t[1]=a[i+1]-a[i];
}
k=t[0];

    cout<<"the diference in sequence is:"<<k;
    divide(a,0,n-1,k);


}
