// 6. Napisi rekurzivnu funkciju koja ce za zadani prirodni broj ispisati zbroj njegovih znamenki.
#include <iostream>
using namespace std;

int zn(int n){
  int i=1;
  while(n/=10){
    if(n<10){ i++; break; }
    i++;
  }
  return i;
}

int main(){
  int n;
  cout<<"n: "; cin>>n;
  cout<<"Broj znamenki: "<<zn(n)<<endl;

  return 0;
}
