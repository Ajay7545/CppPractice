#include<iostream>
#include<tuple>
using namespace std;
class student
{   int age;
    string name;
public:
    void setstudent(int ag,string nm)
    {
        age=ag;
        name=nm;
    }
    void showstudent()
    {
        cout<<"\n Name:"<<name;
        cout<<"\n Age:"<<age;
    }
};
class book
{   string name;
    int page;
public:
    setbook(string st,int p)
    {
        name =st;
        page=p;
    }
     void showbook()
    {
        cout<<"\n Name:"<<name;
        cout<<"\n Page:"<<page;
    }
};
int main()
{
    pair<int,float> p0;
    p0=make_pair(5,6.2);
    cout<<p0.first<<" "<<p0.second<<"\n";

    tuple<int,float,string,string>t1;
    t1=make_tuple(7,5.6,"Ajay","Kumar");
    cout<<get<0>(t1)<<"  ";
    cout<<get<1>(t1)<<"  ";
    cout<<get<2>(t1)<<"  ";
    cout<<get<3>(t1)<<"\n\n\n";


pair <string,int>p1;
pair<string,string>p2;
pair<string,float>p3;
pair<student,book>p4;
p1=make_pair("ajay",21);
p2=make_pair("amit","sumit");
p3=make_pair("sdcsd",5.3);

student s1;
book b1;
s1.setstudent(15,"amitdkumar");
b1.setbook("oxford",400);
p4=make_pair(s1,b1);

cout<<"pair 1:\n"<<p1.first<<"  "<<p1.second<<"\n";
cout<<"pair 2:"<<p2.first<<p2.second<<"\n";
cout<<"pair 3:"<<p3.first<<p3.second<<"\n";
cout<<"pair 4:";
student s2=p4.first;
s2.showstudent();
book b2=p4.second;
b2.showbook();
/*
if(pair p1==pair p2)
    cout<<"p1 p2 are equal"<<"\n";
else
    cout<<"p1 p2 are unequal"<<"\n";
*/

}

