#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=a;i>=1;i--){
        if(a%i==0){
            cout<<""<<i;
            cout<<"\n";
        }
    }
}
