#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
//konversi biner
void biner(int a);
int main(){
    int n; cin>>n;
    biner(n);
    return 0;
}
void biner(int a){
    int b[30];
    int i=0;
    while(a>0){
        b[i]=a%2;
        a=a/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
       cout<<b[j];
    }
    cout<<endl;
}
