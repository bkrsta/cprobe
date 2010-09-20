// 4. Upisi tezine za n ucenika, te ispisi prosjecnu tezinu. Ipsisi koliko je ucenika cija je tezina manja od 65kg.
#include <iostream>
using namespace std;
#define F for(int i=0; i<n; ++i)

int main(){
  int n, c=0; cout<<"n: "; cin>>n;
  double z=0; int u[n];
  F cin>>u[i];
  F z+=u[i]; z/=n;
  cout<<"avg.: "<<z<<endl;
  F if(u[i]<65) c++;
  cout<<"< 65: "<<c<<endl;

  return 0;
}
