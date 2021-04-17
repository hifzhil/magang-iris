#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
using namespace std;
//camel-case sneak-case
int dengklek(char kata){
    if(kata>=65&&kata<=90){
        return 1;
    }
    else if(kata<=122&&kata>=97){
        return 2;
    }
}
//function true
int main(){
    string kata;
    getline(cin,kata);
    for(int i=0;i<kata.size();i++){
        if(kata[i]=='_'&&dengklek(kata[i+i])==2){
            //kata[i+1] += 32;
            kata[i+1] += 32;
        }
        else if(dengklek(kata[i])==2&&dengklek(kata[i+1])==1){
            kata[]
            kata[i+1] -= 32;}
        else{
            printf("%c", kata[i]);
            }
        }
return 0;
}
