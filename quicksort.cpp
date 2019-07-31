#include<iostream>

using namespace std;

int main()
{
    int i;
    int a[]={1,2,5,7,4,6};
    int n=sizeof(a[])/sizeof(a[0]);

    for(i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
}
