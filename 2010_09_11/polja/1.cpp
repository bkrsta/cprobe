// 1. Napisi program koji ce ucitati niz od  n brojeva, ispisati najveci clan niza, aritmeticku sredinu niza, a zatim ispisati cijeli niz.
#include <iostream>
using namespace std;

#define F  for(int i=0; i<n; ++i)
#define FL for(int i=0; i<n-1; ++i)

int main(){
  int n; cout<<"n: "; cin>>n;
  int z[n], max=0; double zbr=0;
  F { cout<<i+1<<".: "; cin>>z[i]; zbr+=z[i]; }
  F { if(z[i]>max) max=z[i]; }

  cout<<"Najveci clan: "<<max<<endl;
  cout<<"Aritm. sred.: "; printf("%.2f\n", zbr/n);
  cout<<"Niz:"<<endl;
  FL {cout<<z[i]<<", ";} cout<<z[n-1]<<endl;

  return 0;
}
