#include<cmath>
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int kasur_rusak(string kata){
    int len = kata.size();
    int a = len-1;
    int b = false;
    if(len==1){
        return b=2;
    }
    else if(len==2){
        if(kata[0]==kata[1]){
            return b=2;
        }
        else{
            return b=0;
        }
    }
    else{
        for(int i=0;i<=a;i++){
        if(kata[i]==kata[a]){
            b++;
            a--;
        }
    }return b;
    }
}
int main(){
    string kata;
    getline(cin,kata);
    cout<<kasur_rusak(kata);
    if(kasur_rusak(kata)<=1)
        cout<<"BUKAN\n";
    else
        cout<<"YA\n";
}
