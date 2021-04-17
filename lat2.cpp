#include <cstdio>
#include <iostream>
using namespace std;
class MyClass {    
  public:           
    MyClass(int a, int b) {  
          cout<<a+b<<"\n";
    }};

int main() {
  int a,b; cin>>a>>b;
  MyClass myObj(a, b); 
  return 0;
}
