#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
//perkalian matriks
int main(){
int m,n,p;
int x[100][100];
int y[100][100];
int z[100][100];
    cin>>m>>n>>p;
    int i,j,k;    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &x[i][j]);
        }
        }
        for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            scanf("%d", &y[i][j]);
        }
        }
        //true
int temp=0;
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            for(k=0;k<n;k++){
            temp=temp + x[i][k]*y[k][j];
        }
        z[i][j]=temp;
        temp=0;
      }
    }
        for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            cout<<z[i][j];
            if(j<p-1){
                cout<<" ";
            }
            else{
                cout<<"\n";
            }
        }}

return 0;
}
