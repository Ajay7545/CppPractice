#include<iostream>

using namespace std;

template <class S,class R>
R fbig(S a,R b)
{
 if(a>b)
        return a;
 else
    return b;
}
int main()
{
    cout<<fbig(8,9);
    cout<<fbig(5.5,8.2);
    cout<<fbig('D','d');
    cout<<fbig(5,4.5);
    cout<<fbig(100,'c');
}
