#include<cstdio>
#include<cmath>
#include<iostream>
#include<string>
using namespace std;
//permutasi tlx toki
void tulis(int kedalaman){
    int N=3;
    int catat[10];
    //int catat[10];
    if(kedalaman>=N){
        for(int i=0;i<N;i++){
            printf("%d", catat[i]);
        }
    cout<<"\n";
    }
    else{
        for(int i=1;i<=N;i++){
            catat[kedalaman]=i;
            tulis(kedalaman+1);
        }
    }
}
int main(){
    int N=0;
    tulis(N);
}
