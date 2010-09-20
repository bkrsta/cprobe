// 3. Napisi program koji ce ucitati n brojeva i ispisati najveci od njih.
#include <iostream>
using namespace std;

int main(){
  int n, t, m=0; cout<<"n: "; cin>>n;
  for(int i=0; i<n; ++i){ cin>>t; if(t>m) m=t; }
  cout<<"max.: "<<m<<endl;

  return 0;
}
