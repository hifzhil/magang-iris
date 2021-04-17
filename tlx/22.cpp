#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main(){    
    int i, j;
    cin>>i;
    if(i>=1&&i<=50){
    for(j=1;j<=i;j++){
        if(j%10==0){
            continue;
        } 
        else if(j<42){
            cout<<""<<j<<endl;
        }
        else{cout<<"ERROR\n";break;}
    }}
}
