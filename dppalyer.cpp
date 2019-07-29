#include<iostream>

using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    int sum=0,sumt=0,s=0,e=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sumt<sum)
        {
            sumt=sum;
            s=s;
            e=i;
        }
        if(sum<0)
        {
            sum=0;
        s++;
        }
    }
    cout<<s<<" "<<e<<" "<<sumt;
}
