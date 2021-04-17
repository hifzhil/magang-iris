#include<iostream>
#include<cstdio>
using namespace std;
int main (){	
    int n;
    cin>>n;
    if(n>=0&&n<10){
    cout<<"satuan";
    }
    else if(n<100&&n>=10){
    cout<<"puluhan";
    }
    else if(n<1000&&n>=100){
    cout<<"ratusan";
    }
    
    else if(n<10000&&n>=1000){
    cout<<"ribuan";
    }
    
    else if(n<100000&&n>=10000){
    cout<<"puluhribuan";
    }
    
}

