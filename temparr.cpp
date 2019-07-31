#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int ,4> arr;
    array <int,4> arr1;
    arr1.fill(5);

    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<4;i++)
    {
        cout<<arr1[i];
    }
    cout<<"\n";
    for(int i=0;i<4;i++)
    {cout<<arr[i];}
cout<<"\n";
    arr.swap(arr1);


    for(int i=0;i<4;i++)
    {cout<<arr1[i];}
cout<<"\n";
    for(int i=0;i<4;i++)
    {cout<<arr[i];}
cout<<"\n";
cout<<arr.at(2);
cout<<arr.front();
cout<<arr.back();
cout<<arr.size();


}
