#include<iostream>
#include<array>

using namespace std;

//template<class X,class Y>

int main()
{

    array <int,5> arr1={11,22,33,44,55};
    array <int ,5> arr2={1,2,3,4,5};
    //for(int i=0;i<5;i++)
    //cout<<arr[i];
cout<<arr1.at(4)<<"\n";
cout<<arr1.front()<<"\n";
cout<<arr1.back()<<"\n";
arr1.fill(10);
arr1.swap(arr2);
cout<<"size is"<<arr1.size();
    for(int i=0;i<5;i++)
    cout<<arr1[i]<<" ";
    cout<<"\n";
    for(int i=0;i<5;i++)
    cout<<arr2[i]<<" ";

}
