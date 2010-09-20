// 13. Napisi program koji ce ucitati dva 1d polja i na osnovi njh formirati trece polje tako da je i-ti element treceg polja jednak vecem od i-tih  elemenata ucitanih polja. Ako su i-ti elementi prvog i drugog polja jednaki, i-ti element novodobivenog polja treba poprimiti vrijednost 17.
#include <iostream>
using namespace std;
#define F for(int i=0; i<n; ++i)

int main(){
  int n; cout<<"n: "; cin>>n; int a[n], b[n], r[n];
  F{ cout<<"a["<<i<<"]="; cin>>a[i]; }
  F{ cout<<"b["<<i<<"]="; cin>>b[i]; }
  F{ r[i]=(a[i]==b[i])?17:(max(a[i], b[i])); }

  cout<<"Rezult. polje:"<<endl;
  F{ cout<<r[i]<<" "; } cout<<endl;

  return 0;
}
