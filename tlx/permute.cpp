#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
using namespace std;
int permute(string num, int k, int l){
    //int count[m];
    //int i=0;
    if(k==l)
        cout<<num<<endl;
    else
        for(int i=k;i<=l;i++){
            
            //swap
            swap(num[k],num[i]);
           
            //recurcion            
            permute(num, k+1, l);

            //backtrack
            swap(num[k],num[i]);
        }
    //return count;
}//function true
int factorial(int n){
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}
int string(string a, int n){
    return a.push_back(n);
}
int main(){
    int n; cin>>n;
    string num[n];
    //int m=factorial(n);
    for(int i=0;i<n;i++){
        num[i]='i+1';
    }
    //permute(num,1,n,m);*/
    //string a="123";
    permute(num,0,2);
    return 0;
}
