// 1. Uz pomoc petlje while izracunaj zbroj neparnih brojeva od 1 do 100.
#include <iostream>
using namespace std;

int main(){
  int i=1, c=0;
  while(i<=100){
    if(i%2) c+=i;
    i++;
  }
  cout<<c<<endl;

  return 0;
}
