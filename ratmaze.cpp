#include<iostream>
define n 4
using namespace std;

int main()
{
    int k=0;

    int a[n][n]={1,0,0,0};
                {1,1,0,1};
                {0,1,0,0};
                {1,1,1,1};
    int i=0,j=0;
    while(i<n && j<n)
    {
        i=i+1;
        j=j+1;
            if(a[i][j]==1)
            {
                k++;

                i++;
                j++;

            }

    }

    if(a[i][j]==a[n-1][n-1])
}
