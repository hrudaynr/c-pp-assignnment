#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdio>

using namespace std;
#define FILE_NAME "time.dat"

void write(int h,int m,int s){
    char str[10];
    fstream f1(FILE_NAME,ios::out|ios::binary);
    if(!f1){
        cout<<"error in opening the file"<<endl;
        return;
    }
    sprintf(str,"%02d:%02d:%02d",h,m,s);
    f1.write(str,sizeof(str));

    f1.close();
}

void read(int *h,int *m,int *s){
    char str[10];
    fstream f2(FILE_NAME,ios::in|ios::binary);
    if(!f2){
        cout<<"error in opening the file"<<endl;
        return;
    }
    if(f2.read((char*)str,sizeof(str))){
        int inH,inM,inS;
        sscanf(str,"%02d:%02d:%02d",&inH,&inM,&inS);
        *h=inH;
        *m=inM;
        *s=inS;
    }
    f2.close();
}

int main(){
    int h,m,s;
    cout<<"enter the time "<<endl;
    cin>>h>>m>>s;
    write(h,m,s);
    h=m=s=0;

    read(&h,&m,&s);
    cout<<"the time is "<<endl;
    cout<<setfill('0')<<h<<setw(2)<<':'<<setfill('0')<<m<<setw(0)<<':'<<setfill('0')<<s<<setw(2)<<endl;
    
    return 0;
}