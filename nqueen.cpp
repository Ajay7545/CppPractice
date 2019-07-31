#include<iostream>

using namespace std;
#define n 4

bool isSafe(int a[n][n],int row,int col)
{   int i,j;
    for(i=0;i<col;i++)
        if(a[row][i])
            return false;
    for(i=row,j=col;i>=0 && j>=0;i--,j--)
        if(a[i][j])
            return false;
    for(i=row,j=col;i<n && j>=0;i++,j--)
        if(a[i][j])
            return false;

    return true;
}

bool nqueen(int a[n][n],int col)
{
    if(col == n)
        return true;

    for(int i=0;i<n;i++)
    {

    if(isSafe(a,i,col)==true)
    {
     a[i][col]=1;
     if(nqueen(a,col+1))
            return true;

    a[i][col]=0; //backtrack
    }

    }

}

int main()
{
    int a[n][n]={{0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}};

    if(nqueen(a,0)==false)
    {
        cout<<"solution not possible";
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

}
