#include<cstdio>
#include<iostream>
using namespace std;
class Sum_bil{
public:
    int jumlah;
    Sum_bil(int a, int b){   //konstruktor
        jumlah = a + b;
    }
    void dis(){
        cout<<jumlah<<endl;
    }
};

int main(){
    cout<<"Masukkan 2 bilangan : ";
    int a,b; cin>>a>>b;
    cout<<"Hasil penjumlahan = ";
    Sum_bil Sum1(a, b);    //otomatis menginput ke class
    Sum1.dis();           //memanggil fungsu display    
return 0;
}
