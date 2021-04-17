#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main(){ 
    int y=0;
    int x[100];
    while (scanf("%d", &x[y]) != EOF){
        y++;
    }
    for(int i=y-1;i>=0;i--){
        cout<<x[i]<<endl;
    }
return 0;
}
