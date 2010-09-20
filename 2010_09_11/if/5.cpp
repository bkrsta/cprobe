// 5. Napisi program koji ce za zadani broje ispisati -1, ako je broj negativan, 0 ako je zadani broj nula, odnosno 1, ako je zadani brij veci od nule.
#include <iostream>
using namespace std;

int main(){
  int n; cin>>n;
  if      (n<0) cout<<-1;
  else if (n==0) cout<<0;
  else if (n>0)  cout<<1;
  cout<<endl;

  return 0;
}
