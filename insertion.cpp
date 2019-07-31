#include<iostream>

using namespace std;

void isort(int a[],int n)
{ int i,j,temp;
    for(i=1;i<=n-1;i++)
{
    temp=a[i];

   for(j=i-1;j>=0&&a[j]>temp;j--)
   {
       a[j+1]=a[j];
   }
a[j+1]=temp;
}
for(i=1;i<=n-1;i++)
    cout<<a[i];

}

int main()
{
 int a[]={5,6,8,4,9,2};
int i;
isort(a,6);
}
