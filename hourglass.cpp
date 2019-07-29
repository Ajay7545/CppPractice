#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()
{
    int i,j;
    int a[6][6]={
    {1 ,1 ,1 ,0 ,0 ,0},
    {0 ,1 ,0 ,0 ,0 ,0},
    {1 ,1 ,1 ,0 ,0 ,0},
    {0 ,0 ,2 ,4 ,4 ,0},
    {0 ,0 ,0 ,2 ,0 ,0},
    {0 ,0 ,1 ,2 ,4 ,0}
    };
    /*for(int i = 0;i< 6;i++)
    {
        for(int j = 0;j < 6;j++)
        {cin >> a[i][j];}
    }
*/

    int k,t,temp,sum[16];
     for(k=0;k<16;k++)
     {
     sum[k]=0;
     }
for(k=0;k<4;k++)
{
    for(i=k,j=k+2 ;i<k+3;i++)
     {
         sum[k]=sum[k]+a[k][i]+a[j][i];
     }
  sum[k]=sum[k]+a[k+1][k+1];
}
     int max1=0;
     for(k=0;k<6;k++)
     {
        if(sum[k]>max1)
            max1=sum[k];
     }
     cout<<max1;
    return 0;

}

