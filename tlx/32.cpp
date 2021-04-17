#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
//faktorial ganjil-genap
int faktorial(int a){
    if (a==1)
        return 1;
    else 
        return a*faktorial(a-1);
}

int faktorial_gg(int n, int a){
    int b,c=0;
    for(int i=1;i<=n;i++){
        if(i%2==0)
        c++;
    }
    for(int i=1;i<=c;i++){
        a=a/2;
    }
    return a;
}

int main(){
    int n; cin>>n; int a=0;
    int hasil=faktorial_gg(n, faktorial(n));
    cout<<hasil<<endl;
return 0;
}
