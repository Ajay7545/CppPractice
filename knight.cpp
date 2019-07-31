#include<iostream>
#define n 8
using namespace std;

bool checkknight(int x,int y,int imove,int a[n][n])
{
//    int xstep[8]={2,2,-2,-2,1,-1,1,-1};
  //  int ystep[8]={1,-1,1,-1,2,2,-2,-2};


    int xstep[8] = {  2, 1, -1, -2, -2, -1,  1,  2 };
    int ystep[8] = {  1, 2,  2,  1, -1, -2, -2, -1 };

    if(imove==n*n)
    {
        return true;
    }
else{

for(int k=0;k<n;k++)
    {
    int xnext,ynext;
    xnext=x+xstep[k];
    ynext=y+ystep[k];

        if(x>=0 && y>=0 && a[xnext][ynext]==-1 && x<n && y<n)
        {
            a[xnext][ynext]=imove;
         //checkknight(xnext,ynext,imove+1,a);
         if(checkknight(xnext,ynext,imove+1,a)==true)
            return true;
        }
        else
        {
            a[xnext][ynext]=-1;
        }
    }
}
return false;

}

int main()
{
    int a[n][n],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=-1;
        }
    }

    a[0][0]=0;

    int imove=1,k;

    if(checkknight(0,0,1,a)==false)
        {
            cout<<"not possible";
        }
    else
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {cout<<a[i][j]<<" ";
                }
                cout<<"\n";
            }
        }
}
