#include<iostream>
using namespace std;
class Data{
    public:
    int opr1;
    int opr2;
    Data(int a, int b){
        opr1=a;
        opr2=b;
    }
};

class Calculate :public Data{
    char opr;
    float ans;
    bool value;
    public:
    Calculate(int a,int b,char c):Data(a,b){
        opr=c;
    }

    void operation(){
        switch(opr){
            case '+':ans=opr1+opr2;
                     break;
            case '-':ans=opr1-opr2;
                     break;
            case '*':ans=opr1*opr2;
                     break;
            case '/':try{
                        if(opr2!=0){
                            ans=opr1/opr2;
                            value=true;
                        }
                        else{
                            value=false;
                            throw opr2;
                        }

                     }catch(int a){
                        cout<<"DIVISON BY ZERO ERROR"<<endl;
                     }
                     break;
            default: cout<<"invalid operator"<<endl;
        }
    }

    void display(){
        if(value==true){
            cout<<"RESULT"<<endl;
            cout<<opr1<<opr<<opr2<<'='<<ans;
        }
        else{
            return ;
        }
    }
};

int main() {
    Calculate c1(2,0,'/');
    c1.operation();
    c1.display();

    
    
    return 0;
}