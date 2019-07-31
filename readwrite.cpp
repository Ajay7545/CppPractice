  #include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fread;
    fread.open("file1.txt"); //should exist in folder by name file1 with data
    int t;

    fread>>t;
    cout<<"Reading 1 line from file "<<t<<endl;
    //fread>>t;
    //cout<<"Readin 2 line from file "<<t<<endl;

    ofstream fwrite;
    fwrite.open("file2.txt");
    fwrite<<"this is 1 line"<<endl;
    fwrite<<"this is 2 line"<<endl;
    fwrite.close();

}
