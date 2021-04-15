#include <cstdio>

void (int *arr)
{
    for(int i=0;i<5;i++){
        printf("%d", *(arr+i));
    }
    // ...
}

int main()
{
    int num[5] = {1, 2, 3, 4, 5}, i;
    printArr(num);
    return 0;
}
