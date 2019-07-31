#include<iostream>
using namespace std;

int main()
{
    int n,btt[10],wtt[10],att[10],tat[10],avt=0,atat=0,i,j;
    cout<<"enter no of process";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"p["<<i+1<<"]"<<"\n";
        cin>>btt[i];
        cin>>att[i];
    }
    wtt[0]=0;

    for(i=1;i<n;i++)
    {
        wtt[i]=0;
        for(j=0;j<i;j++)
        {
        wtt[i]+=btt[j];
        }
        wtt[i]=wtt[i]-att[i];
    }
        cout<<"ProcessId\t"<<"BurstTime\t"<<"ArivalTime\t"<<"WaitingTime\t"<<"TurnATime\n";

    for(i=0;i<n;i++)
    {

            tat[i]=btt[i]+wtt[i];
            avt+=wtt[i];
            atat+=tat[i];
            cout<<"P"<<i+1<<"\t\t"<<btt[i]<<"\t\t"<<att[i]<<"\t\t"<<wtt[i]<<"\t\t"<<tat[i]<<"\n";
    }
    avt=avt/i;
    atat=atat/i;
    cout<<avt<<"\t"<<atat<<"\n"<<endl;

    for(i=0;i<n;i++)
    {
     cout<<"P"<<i<<"\t";
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<btt[i]+wtt[i]<<"\t";
    }
}
