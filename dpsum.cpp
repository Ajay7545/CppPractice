#include<iostream>

using namespace std;

int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
int s=0,e=0,summax=0,sumtill=0;
    for(i=0;i<n;i++)
    {
        summax+=a[i];
    if(sumtill<summax)
        {
        sumtill=summax;
        s=s;
        e=i;
        }
    if(summax<0)
    {summax=0;
    s++;
    }

    }
cout<<s<<endl;
cout<<e<<endl;
cout<<sumtill;
}
