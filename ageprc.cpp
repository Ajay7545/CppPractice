#include <iostream>

using namespace std;

class date
{public:
    int dd;
    int mm;
    int yy;
};
int main()
{
    date d,d1,d2;
cout<<"enter date1";
cin>>d1.dd>>d1.mm>>d1.yy;
cout<<"enter date2";
cin>>d2.dd>>d2.mm>>d2.yy;
d.dd=d2.dd-d1.dd;
d.mm=d2.mm-d1.mm;
d.yy=d2.yy-d1.yy;

cout<<"YOU ARE"<< d.yy<<" YEAR"<<d.mm<<"MONTHS"<<d.dd<<"DAYS OLD";
return 0;
}
