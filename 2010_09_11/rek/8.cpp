// 8. Napisi rekurzivnu funkciju koja ce izracunati zbroj prvih n prirodnih brojeva.
#include <iostream>
using namespace std;

unsigned int zn(int n){
  if(n==1){ return 1; }
  return (n+1)*(n/2);
}

int main(){
  int n;
  cout<<"n: "; cin>>n;
  cout<<zn(n)<<endl;

  return 0;
}
