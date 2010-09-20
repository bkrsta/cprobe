// 3. Napisi program koji ce ucitati uspjeh n ucenika, izracunati i ispisati prosjecni uspjeh, te broj odlicnih, vrlo dobroih, dobrih i dovoljnih i nedovoljnih ucenika.
#include <iostream>
using namespace std;

int main(){
  int n, t, o[6]={0}; cout<<"n: "; cin>>n;
  for(int i=0; i<n; ++i){ cin>>t; if(t>=1 && t<=5) o[t]++; }
  cout<<"Odlicnih:    "<<o[5]<<endl;
  cout<<"Vrlo dobr.:  "<<o[4]<<endl;
  cout<<"Dobrih:      "<<o[3]<<endl;
  cout<<"Dovoljnih:   "<<o[2]<<endl;
  cout<<"Nedovoljnih: "<<o[1]<<endl;

  return 0;
}
