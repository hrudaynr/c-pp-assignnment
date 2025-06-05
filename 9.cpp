#include<iostream>
using namespace std;
void devision(int a,int b){
    if(b!=0){
        cout<<"result="<<a/b;
    }
    else{
        throw b;
    }
}

int main() {
    try{
        int a,b;
        cout<<"enter the two numbers "<<endl;
        cin>>a>>b;
        devision(a,b);
    }catch(int a){
        cout<<"divison by zero error"<<endl;
    }
    
    
    return 0;
}