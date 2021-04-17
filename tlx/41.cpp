#include<cmath>
#include<iostream>
#include<string>
using namespace std;
//membalik yang terbalik
int reverse(int n){
int fin=0;
    while(n>0){
        fin=fin*10+(n%10);
        n=n/10;
    }
    return fin;
    
}
int main(){
    int n,p;cin>>n>>p;
    int hasil=reverse(n)+reverse(p);
    hasil=reverse(hasil);
    cout<<hasil<<endl;
}
