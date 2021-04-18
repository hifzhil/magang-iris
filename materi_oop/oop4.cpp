#include<cstdio>
#include<iostream>
using namespace std;
class Complex_op{
public:
    int a,b,c,d;
    Complex_op(int m, int n, int o, int p){
        a=m;b=n;c=o;d=p;
    }
    int real_op(){
    return a+c;
    }
    int imaginer_op(){
    return b+d;
    }
    void disp(){
    cout<<"\nBagian real = "<<real_op()<<"\nBagian Imaginer = "<<imaginer_op()<<endl;
    if(imaginer_op()>=0){
        cout<<""<<real_op()<<" + "<<imaginer_op()<<"i"<<endl;
    }
    else{
        cout<<""<<real_op()<<" - "<<-1*imaginer_op()<<"i"<<endl;
    }
    }
};

int main(){
    int a,b,c,d;
    cout<<"Bilangan Kompleks 1\nBagian real : ";cin>>a; cout<<"Bagian imaginer : "; cin>>b;
    cout<<"Bilangan Kompleks 2\nBagian real : ";cin>>c; cout<<"Bagian imaginer : "; cin>>d;
    cout<<"\nHasil operasi penjumlahan : ";
    Complex_op op_komplek1(a,b,c,d);
    op_komplek1.disp();
return 0;    
}
