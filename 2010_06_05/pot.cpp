#include <iostream>
using namespace std;

int pot (int x, int n){
  if (n == 0) return 1;
  if (n == 1) return x;

  if (n % 2 == 0){
    int b = pot (x, n / 2);
    return (b * b)%10000;
  } else return (x * pot (x, n - 1))%10000;
}

int main (){
  int x,y; cin>>x>>y;
  cout<<pot (x, y)<<endl;
  return 0;
}
