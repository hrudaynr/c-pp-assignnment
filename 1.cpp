#include<iostream>
#include<math.h>
using namespace std;
void claculate(int a[],int n){
    int sum=0;
    float mean,std,var=0;

    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    mean=(sum)/n;

    for(int i=0;i<n;i++){
        var+=pow(a[i]-mean,2);
    }

    std=sqrt(var);

    cout<<"the mean of the array is "<<mean<<endl;
    cout<<"the variouns of the array is "<<var<<endl;
    cout<<"the standard deviation of the array is"<<std<<endl;

}

int main() {
    int x[20],n;
    cout<<"enter the no elements "<<endl;
    cin>>n;
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    claculate(x,n);
    return 0;
}