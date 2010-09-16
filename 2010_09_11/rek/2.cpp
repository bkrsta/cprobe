// 2. Napisi rekurzivnu funkciju koja ce za prirodne brojeve n i m izracunati n^m.
#include <iostream>
using namespace std;

int pot (int x, int n){
  if(n == 0) return 1;
  if(n == 1) return x;
  if(n%2 == 0){
    int b=pot(x, n/2);
    return (b * b)%100000;
  } else return (x * pot (x, n - 1))%100000;
}

int main (){
  int x,y; cin>>x>>y;
  cout<<pot(x,y)<<endl;
  return 0;
}
