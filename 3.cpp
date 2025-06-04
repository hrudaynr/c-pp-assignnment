#include<iostream>
using namespace std;
class Time{
    int hr;
    int min;
    public:
    void set(int a,int b){
        hr=a;
        min=b;
    }
    void sum(Time T1){
        hr=this->hr+T1.hr;
        min=this->min+T1.min;

        hr=hr+min/60;
        min=min % 60;
    }

    void get(){
        cout<<"the time is "<<endl;
        cout<<hr<<':'<<min<<endl;
    }
};

int main(){
    Time t1,t2;
    t1.set(20,300);
    t2.set(60,800);
    t1.sum(t2);
    t1.get();
     
    return 0;
}