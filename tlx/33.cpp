#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
//komposisi fungsi
int fungsi_komposisi(int a, int b, int n, int k){
    int x;
    if (k==1)
        return abs(a*n+b);
    else 
        return abs(a*fungsi_komposisi(a, b, n, k-1)+b);
        
}
int main(){
    int a,b,k,n; cin>>a>>b>>k>>n;
    if(a>=-5&&a<=5&&b>=-5&&b<=5&&n>=-5&&n<=5&&k>=1&&k<=5) {
        //ini untuk batas  -5<=(a,b,n)<=5 dan 1<=k<=5
        cout<<fungsi_komposisi(a,b,n,k);
}
return 0;}
