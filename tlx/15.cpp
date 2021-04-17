#include<cstdio>
#include<cmath>
#include<iostream>
int main(){
    int a[100];
    int i=0;
    int sum = 0;
    while (scanf("%d", &a[i])!=EOF&&i<100){
    sum += a[i];
    i++;
    }
    printf("%d", sum);
}

