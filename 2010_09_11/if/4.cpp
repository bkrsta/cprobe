// 4. Napisi program koji ce za zadani broj ispisati njegovu apsolutnu vrijednost (bez upotrebe funkcije abs()).
#include <iostream>
using namespace std;

int apso(int x){ return (x<0)?-x:x; }

int main(){
  int n; cin>>n; cout<<apso(n)<<endl;
  return 0;
}
