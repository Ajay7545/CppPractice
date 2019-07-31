#include<iostream>

using namespace std;

void push(int a[],int n,int top)
{
    cout<<"Enter value for push";
    int i,t;
    cin>>t;

    top++;
    a[n++]=t;
    cout<<"the value is pushed"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"The top is"<<top<<endl;
}


void pop(int a[],int n,int top)
{   int i;
    top--;
    n--;
for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"The top is"<<top;
}

int main()
{
    int n;
    cout<<"enter no of array";
    cin>>n;

    int i,ar[n],top=-1;
    for(i=0;i<n;i++)
    {
        top++;
        cin>>ar[i];
    }

   push(ar,n,top);
   pop(ar,n,top);


}
