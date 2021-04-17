#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int a; cin>>a;
    int b=0;
    int c=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<=b;j++){
            cout<<c;
            c++;
            if(c==10){
                c=0;
            }
        }
        b++;
        cout<<endl;
    }
}
