#include<cstdio>
#include<cmath>
#include<iostream>
#include<string>
using namespace std;
//pegunungan
void pegunungan (int n){
    if(n==1){
        cout<<"*"<<endl;}
    else{
        pegunungan(n-1);
        for(int i=1;i<=n;i++){
            cout<<"*";
            }
        cout<<endl;
        pegunungan(n-1);
        }
}
int main(){
    int a;cin>>a;
    pegunungan(a);
}
