#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int i, n, min, max;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    max=a[0];
    for(i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("%d %d", max,min);
}
