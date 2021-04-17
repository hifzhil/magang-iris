#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
//bilangan prima
bool prime(int n)
{
    if (n == 1)  
        return false;

    for (int i=2;i*i<=n;i++)
        if (n%i == 0)
            return false;
    return true;
}
int main(){
    int x,n;cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            prime(x)? cout<<"YA\n":cout<<"BUKAN\n";
        }
return 0; 
}
