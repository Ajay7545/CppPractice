#include<iostream>

using namespace std;

int main()
{
    int a[6][7]={{1,0,0,1,1,0,0},{1,1,1,0,0,0,0},{1,0,1,1,0,1,0},{1,0,1,0,0,1,1},{1,0,0,0,0,1,1},{1,0,0,0,1,0,0}};
    int i ,co=0,j;
    int k[6]={0,0,0,0,0,0};

    for(i=0;i<6;i++)
    {
        for(j=0;j<7;j++)
        {
            if(a[i][j]==1)
                k[i]=k[i]+1; //when time 1 it will inc to k array
        }
    }

    for(i=0;i<6;i++)
    {
        for(j=0;j<7;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
        for(j=0;j<6;j++)
        {
                cout<<k[i]<<endl;
        }


}
