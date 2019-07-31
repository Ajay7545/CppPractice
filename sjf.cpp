#include<iostream>
using namespace std;

int main()
{
 int n,t,btt[10],att[10],p[10],wtt[10],tat[10],avt=0,atat=0,i,j,temp;

 cout<<"enter no of process";
 cin>>n;
 for(i=0;i<n;i++)
 {
     cout<<"P"<<i+1<<endl;
     cin>>btt[i];
     cin>>att[i];

    p[i]=i+1;
 }

 for(i=0;i<n;i++)
 {
     t=i;
     for(j=i+1;j<n;j++)
     {
       if(btt[t]>btt[j])
       {
           t=j;
       }
     }


     temp=btt[i];
     btt[i]=btt[t];
     btt[t]=temp;

     temp=p[i];
     p[i]=p[t];
     p[t]=temp;

     temp=att[i];
     att[i]=att[t];
     att[t]=temp;
 }
 wtt[0]=0;

 for(i=1;i<n;i++)
 {
     wtt[i]=0;
     for(j=0;j<i;j++)
        wtt[i]+=btt[j];

    wtt[i]=wtt[i]-att[i];
 }


 cout<<"Process"<<"\t"<<"BurstTime"<<"\t"<<"ArivalTime"<<"\t"<<"WaitingTime"<<"\t"<<"TurnATime"<<endl;

 for(i=0;i<n;i++)
 {
     tat[i]=btt[i]+wtt[i];
    cout<<"P"<<p[i]<<"\t\t"<<btt[i]<<"\t\t"<<att[i]<<"\t\t"<<wtt[i]<<"\t\t"<<tat[i]<<endl;
 }


  for(i=0;i<n;i++)
    {
     cout<<"P"<<p[i]<<"\t";
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<btt[i]+wtt[i]<<"\t";
    }
}
