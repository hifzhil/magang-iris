#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
    float n;
    scanf("%f", &n);    
    while(n>=2){
        n=n/2;
    }
    if(n==1){
        printf("ya\n");
    }
    else{
        printf("bukan\n");
    }
    
}
