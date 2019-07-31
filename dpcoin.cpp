#include <bits/stdc++.h>

using namespace std;
int maxx(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
            return a;
        else
            return c;
    }
    else
    {
        if(b>c)
            return b;
        else
            return c;
    }
}


int getWays(int val,int c[],int n)
{ int k=0;
 int i,j;
 int a[n][n],b[n][n];
 a[0][0]=1;
 for(i=1;i<n;i++)
     a[0][j]=0;
 for(i=1;i<n;i++)
     b[i][0]=0;

 int sum=0;
 for(i=1;i<n;i++)
     for(j=1;j<val;j++)
     {
         if(i>j)
         {
             a[i][j]=a[i-1][j];
         }
         else
         {
             a[i][j]= maxx(a[i-1][j-1],a[i-1][1],a[i][j-1])+1;
         }
     }

return a[i][j];
}

int main() {
    int n,n1;
    int m,m1;
    cin >> n1 >> m1;
    if(n1>=1 && n1<=250 && m1>=1 && m1<=50)
    {n=n1;
    m=m1;}
    int c[m];
    for(int i=0;i<m;i++)
        cin>>c[i];
    int ways=getWays(n,c,m);
    cout<<ways;
    return 0;
}
