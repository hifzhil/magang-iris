#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void rendez(int* t, int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(*t+i<*t+j){
                int temp = *t+i;
                *t+i = *t+j;
                *t+j = temp;
            }
        }
    }
}

int main(){

    setlocale(LC_ALL,"");

    int t[10] = {2,3,4,5,6,7,8,9,10,11};

    rendez(&t,sizeof(t)); 

    printf("\n");
    system("pause");
}
