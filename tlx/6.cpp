#include<cstdio>
using namespace std;
int main(){
	int a[3][3]={};
    int i, j;
    scanf("%d %d %d", &a[0][0], &a[0][1], &a[0][2]); 
    scanf("%d %d %d", &a[1][0], &a[1][1], &a[1][2]);
    scanf("%d %d %d", &a[2][0], &a[2][1], &a[2][2]);
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

