#include<iostream>

using namespace std;

void isort(int a[],int n);
int main()
{
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    isort(a,n);

    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
void isort(int a[],int n)
{
    int i,k,j=0;
    for(i=1;i<n;i++)
    {
        j=i-1;
        k=a[i];

            while(j>=0 && a[i]>k)
            {
                a[j]=k;
                j--;
            }

    }
}
