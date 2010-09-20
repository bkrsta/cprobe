// 8. Napisi program koji izracunava kolicinu zauzete memorije bilo kojeg jednomimenzionalnogpolja.
#include <iostream>
using namespace std;

#define veln(x) (sizeof(x))
#define vele(x) (sizeof(x[0]))

int main(){
  int    a[3];
  char   b[3];
  double c[3];

  cout<<"Vel. polja a: "<<veln(a)<<"B s elem. vel. "<<vele(a)<<"B"<<endl;
  cout<<"Vel. polja b: "<<veln(b)<<"B s elem. vel. "<<vele(b)<<"B"<<endl;
  cout<<"Vel. polja c: "<<veln(c)<<"B s elem. vel. "<<vele(c)<<"B"<<endl;

  return 0;
}
