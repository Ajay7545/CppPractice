#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,i,a=1,b=2,count=0;
    cin>>t;
    int as[t],bs[t];
    for(i=0;i<t;i++)
        cin>>as[i],bs[i];

    for(i=0;i<t;i++)
    {
        while(as[i]==0 && bs[i]==0)
        {
            if(as[i]==1 && bs[i]==1);
            {//a+b a*b
            return 2}

            as[i]--;
            bs[i]--;

        }

    }


    return 0;
}
