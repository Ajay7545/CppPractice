#include<iostream>

using namespace std;

int mergee(int a[],int s,int m,int e)
{
    int i,j,k,n1,n2;
    n1=m-s+1;
    n2=e-m;
    int dl[n1] ,dr[n2];
    for(i=0;i<n1;i++)
    {
        dl[i]=a[s+i];
    }
    for(j=0;j<n2;j++)
    {
        dr[j]=a[m+1+j];
    }

    i=0;
    j=0;
    k=s;
    while(i<n1 && j<n2)
    {
        if(dl[i]<=dr[j])
        {
            a[k]=dl[i];
            i++;

        }
        else
            {a[k]=dr[j];
            j++;
            }
    k++;
    }
    while(i<n1)
    {
        a[k]=dl[i];
        i++;
        k++;
    }
    while(j<n2)
    {
    a[k]=dr[j];
    j++;
    k++;
    }

}

void mergesort(int a[],int s,int e)
{
    if(e>s)
    {
    int mid;
    mid=(s+e)/2;
    mergesort(a,s,mid);
    mergesort(a,mid+1,e);

    mergee(a,s,mid,e);
    }
}
void printar(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<a[i];
}
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array before Sort"<<endl;
    printar(a,n);

    mergesort(a,0,n-1);

    cout<<"Array after Sorting"<<endl;
    printar(a,n);

return 0;
}
