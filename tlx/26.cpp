#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

int main(){
    int n,m,i,j;
    scanf("%d %d", &n, &m);
    int x[100][100];
        for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &x[i][j]);
        }
        }
        
        for(i=0;i<m;i++){
        for(j=n-1;j>=0;j--){
            printf("%d", x[j][i]);
        
        if(j>0){
            printf(" ");
        }
        else{
            printf("\n"); 
        }}}
        return 0;
        }
