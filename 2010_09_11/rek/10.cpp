// 10. Napisi rekurzivnu funkciju koja ce izracunati umnozak parnih prirodnih brojeva do prirodnog broja n.
#include <iostream>
using namespace std;

unsigned int umn(int n){
  if(n==0 || n==1) return 0; else if(n==2) return 2;
  else return (n>=2)?((n%2==0)?n*umn(n-2):umn(n-1)):0;
}

int main(){
  int n; cin>>n;
  cout<<umn(n)<<endl;

  return 0;
}
