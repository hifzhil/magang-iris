#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main (){
    float n;
    int a, b;
    scanf("%f", &n);
    a=ceil(n);
    b=floor(n);
    printf("%d %d", b, a);
}
