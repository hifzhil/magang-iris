#include<cmath>
#include<iostream>
#include<string>
using namespace std;
//modus terbesar
int main(){
    int n;cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(x[j]>x[j+1]){
            swap(x[j],x[j+1]);
        }
        }
    }
    //cout<<x[3]<<endl;
    //bubble sort true
    int count[n];
    for(int i=0;i<n;i++){
        count[i]=0;
        for(int j=0;j<n;j++){
        if(x[i]==x[j]){
            count[i]++;
        }
        }
    }
    int modus=count[0]; int temp;
    for(int i=0;i<n;i++){
        if(modus>count[i]){
            modus=count[i];
            temp=i;
        }
        else{temp=i;}
    }
    //cout<<modus<<endl;
    cout<<x[temp]<<endl;
    return 0;
}
