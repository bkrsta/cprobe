#include <iostream>
using namespace std;

int n(int x, int i){
  return (i==1)?x:(x*n(x-1,i-1));
}

int main(){
  int x;
  cin>>x;
  cout<<n(x,x)<<endl;

  return 0;
}


