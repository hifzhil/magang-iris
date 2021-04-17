#include<cstdio>
#include<cmath>
int main(){
    int a,b,c,d,g;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    g=abs(a-c)+abs(b-d);
    printf("%d", g);
    
}
