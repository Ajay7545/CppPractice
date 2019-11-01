#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {int a,b,c;
     cin>>a>>b>>c;
     long long int k=1;
     while(b--)
     { k=(k*a)%c;}

     cout<<k<<endl;
     }
}
