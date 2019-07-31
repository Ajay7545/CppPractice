#include<iostream>

using namespace std;

int main()
{
    int i,t,b,n;
    cin>>n;
    int k=0;
    int a[100];
b=n;
    for(i=1;i<=n+10;i++)
    {t=0;

        if(i%2==0 && i%3==0 || i%5==0)
            t++;

    if(t==1 || i<7)
        {
        cout<<i<<" ";
        a[k]=i;
        k++;
        }

    }
    cout<<a[b];



}
