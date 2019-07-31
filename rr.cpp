#include<iostream>
using namespace std;

int main()
{
    int i,j,n,att[10],btt[10],tat[10],atat=0,avt=0;
    int timeq,remain,time=0,temp,rtt[10];
    cout<<"enter no of process:";
    cin>>n;
    cout<<"enter time quantum";
    cin>>timeq;
    for(i=0;i<n;i++)
    {
        cout<<"P"<<i+1;
        cin>>btt[i]>>att[i];
        rtt[i]=btt[i];
    }
    remain=n;

    for(i=0,time=0;remain!=0;)
    {
        if(btt[i]==0)
            remain--;
        if(btt[i]<=timeq && btt[i]>0)
        {

        }
    }

}
