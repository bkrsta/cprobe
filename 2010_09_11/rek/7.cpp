// 7. Napisi rekurzivnu funkciju koja ce izracunavati umnozak znamenki prirodnog broja.
#include <iostream>
using namespace std;

unsigned int umzn(int n){
  unsigned int c=1;
  if(n<10) return n;
  while(n>1){
    c=c*(n%10);
    n/=10;
  }
  return c;
}

int main(){
  int n;
  cout<<"n: "; cin>>n;
  cout<<"Umn. znam.: "<<umzn(n)<<endl;

  return 0;
}
