#include <bits/stdc++.h>
#include <vector>
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int n, i;
    cin>>n;
    int x=0;
    int y=0;
    int z[n];
    for (i=0;i<n;i++) {
        cin>>z[i];
    }
    int max=z[0];
    int min=z[0];
    for (i=0;i<n;i++) {
        if(max<z[i]){
            max=z[i];
            x++;
        }
        if(min>z[i]){
            min=z[i];
            y++;
        }                
    }
    cout<<x<<" "<<y<<endl;

    return 0;
}
