#include<cstdio>
#include<cmath>
#include<iostream>
//bilangan agak prima
using namespace std;
bool prime(int n)
{
int b=0;
    if (n <= 1)  
        return true;

    for (int i=2;i*i<=n;i++)
        if (n%i == 0)
            b++;
if(b<2)
    return true;
else
    return false;
}
int main(){
    int x,n;cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            prime(x)? cout<<"YA\n":cout<<"BUKAN\n";
        }
return 0; 
}
