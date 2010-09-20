// 3. Napisi program koji ce od zadanog cijelog broja, ako je on paran, ispisati njegov sljedbenik, a ako je neparan njegov prethodnik.
#include <iostream>
using namespace std;

int main(){
  int n; cin>>n;
  cout<<(
    (n%2==0)?n+1:n-1
  )<<endl;

  return 0;
}
