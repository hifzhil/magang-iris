#include <cstdio>
#include <iostream>
using namespace std;
void reverse(int *arr, int n){
    int j=0;
    for(i=n-1;i>=0;i--){
        *(arr+i)= *(arr+j);
        j++;
    }
}
int main(){
int arr[5]={1,2,3,4,5};
reverse(arr, 5);
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}
