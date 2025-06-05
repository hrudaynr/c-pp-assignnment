#include<iostream>
using namespace std;
void array_check(int a[],int n,int i){
    try{

        if(i>0 && i<=n){
            cout<<"the poistion at "<< i <<" is "<< a[i] <<endl;
        }
        else{
            throw i;
        }
    }catch(int a){
        cout<<"the postion is out of bounded "<<endl;
    }

}

int main() {
    int a[20],n,i;
    cout<<"enter the number of array elements "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the position to check"<<endl;
    cin>>i;
    array_check(a,n,i);
    
    
    return 0;
}