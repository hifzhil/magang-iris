#include<cstdio>
#include<iostream>
using namespace std;
class LuasBidang{
public:
    int a, b;
    int luas(){
        return a*b;
    }
};

int main(){
    LuasBidang pl;
    cout<<"Masukkan panjang bidang : "; cin>>pl.a;  //proses input class (manual)
    cout<<"Masukkan lebar bidang : "; cin>>pl.b;                               
    cout<<"Luas bidang = "<<pl.luas()<<endl;
return 0;
}
