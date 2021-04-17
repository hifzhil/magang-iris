#include<cstdio>
#include<iostream>
using namespace std;
void printArr(int* arr, int* n)
{
    // Pointer to arr[size - 1]
    int * arrEnd = (arr + size - 1);

    /* Loop till last array element */
    while(arr <= arrEnd)
    {
        printf("%d, ", *arr);

        // Move pointer to next array element.
        arr++;
    }
}
int main(){
        printArr(arr, size);

}
