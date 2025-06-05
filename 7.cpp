#include<iostream>
#include<fstream>
using namespace std;


int main() {
    ofstream f1("sample.txt",ios::out);
    if(!f1){
        cout<<"error in creating the file"<<endl;
        return 0;
    }
    f1<<"ABCD";
    f1.close();

    ifstream f2("sample.txt",ios::in);
    if(!f2){
        cout<<"error in opening the file"<<endl;
        return 0;
    }
    string st;
    while(!f2.eof()){
        f2>>st;
        cout<<st<<endl;
    }

    
    
    return 0;
}