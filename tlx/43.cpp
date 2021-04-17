#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
using namespace std;
//caesar cipher
int main(){
    char kata[101];
    int k;
    scanf("%s", &kata); cin>>k;
    if(k>=1&&k<=25){
    for(int i=0;i<strlen(kata);i++){
            if(kata[i]>=97&&kata[i]<=122){
            kata[i] += k;
            if(kata[i]>=123){
                kata[i]-=26;
            }}
    }}
    cout<<kata<<endl;
}
/*#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char buff[111];
int N;

int main() {
  scanf("%s", buff);
  scanf("%d", &N);

  int len = strlen(buff);
  for (int i = 0; i < len; i++) {
    int ord = (buff[i] + N); //cout<<ord<<endl;
    if(ord>=123){ord=ord-26;}
    //int encrypted = (ord + 1) % 26;
    buff[i] = ord;
  }

  printf("%s\n", buff);
}*/
