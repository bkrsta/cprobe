// 9. Napisi rekurzivnu funkciju koja ce izracunati zbroj neparnih prirodnih brojeva do ucitanog broja n.
#include <iostream>
using namespace std;

int z(int n){
  if(n==0){ return 0; }
  if(n==1 || n==1){ return 1; }
  if(n%2==0){ n--; }
  int c=1;
  while(n>2){ c+=n; n-=2; }
  return c;
}

int main(){
  int n;
  cout<<"n: "; cin>>n;
  cout<<z(n)<<endl;

  return 0;
}
