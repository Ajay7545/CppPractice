#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1= {1,5,3,4,8};
    vector<float>v2;
    vector<int>v3(3,7);
    vector<string>v4(5,"Ajay");
    cout<<v4[0]<<endl;
    cout<<v4[1]<<endl;

    for(int i=0;i<5;i++)
       {
        cout<<v1[i]<<endl;
        cout<<v4[i]<<endl;
       cout<<v3[i]<<"this is v3:"<<endl;
       }
for(int i=0;i<10;i++)
    v2.push_back(10*(i+1));
cout<<"The capacity is:"<<v2.capacity()<<endl;
cout<<"The element size is:"<<v2.size()<<endl;

for(int i=0;i<10;i++)
    cout<<v2[i]<<endl;
v2.pop_back();
cout<<"The capacity is:"<<v2.capacity()<<endl;
cout<<"The element size is:"<<v2.size()<<endl;
v2.pop_back();
cout<<"The capacity is:"<<v2.capacity()<<endl;
cout<<"The element size is:"<<v2.size()<<endl;

cout<<"vale at index 5 is: "<<v2.at(5)<<endl;
cout<<"value at first is"<<v2.front()<<endl;
cout<<"value at last is"<<v2.back()<<endl;
//v2.clear();
cout<<"The capacity is:"<<v2.capacity()<<endl;
cout<<"The element size is:"<<v2.size()<<"\n\n\n";

vector <float>:: iterator it=v2.begin();
v2.insert(it+2,1000);
for(int i=0;i<10;i++)
    cout<<v2[i]<<endl;
}
