#include<iostream>
using namespace std;

int main(){
    int x[20],n,temp;
    cout<<"enter the number of array elememts"<<endl;
    cin>>n;

    cout<<"ente the array elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if((x[j+1]%10) < (x[j]%10)){
                temp=x[j+1];
                x[j+1]=x[j];
                x[j]=temp;

            }
        }
    }

    cout<<"array elemtents after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<x[i]<<"\t";
    }

    
    return 0;
}