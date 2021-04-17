#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(a>0&&b>0&&b<=a&&a<=100){
    
    for(int i=1;i<=a;i++){
        if(i%b==0){
            cout<<"*";
        }
        else{
            cout<<""<<i;
        }
        if(i<a){
            cout<<" ";
        }

        else{
            cout<<"\n";
        }
    }
    }
}
