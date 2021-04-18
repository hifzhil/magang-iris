#include<cstdio>
#include<iostream>
using namespace std;
void tukar_nilai(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b=temp;
}
int main(){
    int num1,num2;
    cout<<"Masukkan nilai a dan nilai b :"<<endl;
    cin>>num1>>num2;
    cout<<"Sebelum ditukar a = "<<num1<<" dan b = "<<num2<<endl;
    
    tukar_nilai(&num1, &num2); //proses swap nilai
    cout<<"Setelah ditukar a = "<<num1<<" dan b = "<<num2<<endl;
return 0;
}
