// 6. Zadan je kompleksni broj. Izracunaj njegov mogul.
#include <iostream>
#include <math.h>
using namespace std;
#define kv(x) pow(x, 2)

int main(){
  // char* in;
  int a,b; cin>>a>>b;
  cout<<(sqrt(kv(a)+kv(b)))<<endl;

  return 0;
}
