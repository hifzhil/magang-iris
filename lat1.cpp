#include <cstdio>
#include <iostream>
using namespace std;
void tambah(int a,int b,int *c){
    *c=a+b;
    
}
int main(){
    int a,b,c; cin>>a>>b;
    tambah(a,b, &c);
    printf("%d", c);
}
