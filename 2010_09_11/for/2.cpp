// 2. Zadaj n brojeva. Izracunaj njihovu aritmeticku sredinu.
#include <iostream>
using namespace std;

int main(){
  int n; double z=0; cin>>n;
  int b[n];
  for(int i=0; i<n; ++i) cin>>b[i];
  for(int i=0; i<n; ++i) z+=b[i]; z/=(double)n;
  printf("%.2f\n", z);

  return 0;
}
