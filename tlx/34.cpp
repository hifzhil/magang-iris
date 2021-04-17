#include<cstdio>
#include<cmath>
#include<iostream>
#include<string>
using namespace std;
//bahasa dengklek
//int bahasa_dengklek()
int main(){
    string kata;
    getline(cin,kata);
    for(int i=0;i<kata.size();i++){
        if(kata[i]<=90&&kata[i]>=65){
            kata[i] += 32;
        }
        else if(kata[i]<=122&&kata[i]>=97){
            kata[i] -= 32;
        }

    }
    cout<<kata<<endl;
}
