#include<cstdio>
#include<iostream>
using namespace std;
void tukar_nilai(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b=temp;
}
void membalik_array(int* num, int* n){
    for(int i=0;i<=*n/2;i++){
        tukar_nilai(num[i], num[n-i]);  //panggil fungsi tukar_nilai
    }
}
int main(){
    int n; cout<<"Masukkan panjang array : "; cin>>n;
    int arr[n]; cout<<"Masukkan integer pada array : " ;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    cout<<"Nilai array sebelum di balik : "; 
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if(i<n-1)
            cout<<",";
    } cout<<endl;
    
    membalik_array(&arr, &n);   //proses membalik array
 
    cout<<"Nilai array setelah di balik : "; 
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if(i<n-1)
            cout<<",";
    } cout<<endl;    
    
return 0;
}
