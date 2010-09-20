// 2. Izracunaj zbroj svakog treceg od prvih n prirodnih brojeva.
#include <iostream>
using namespace std;

int main(){
  int i=1, c, n; cin>>n;
  do { c+=i; i+=3; } while (i<=n);
  cout<<c<<endl;

  return 0;
}
