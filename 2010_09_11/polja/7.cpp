// 7. Naisi program koji zbraja dva jednodim. poja.
#include <iostream>
using namespace std;

int main(){
  int n, c=0; cout<<"n: "; cin>>n; int a[n][3];
  for(int i=0; i<n; ++i){ cout<<"a["<<i<<"]="; cin>>a[i][0]; }
  for(int i=0; i<n; ++i){ cout<<"b["<<i<<"]="; cin>>a[i][1]; }
  for(int i=0; i<n; ++i){ a[i][2] = a[i][0] + a[i][1]; }
  cout<<"Zbr. polje:"<<endl;
  for(int i=0; i<n; ++i){ cout<<a[i][2]<<" "; } cout<<endl;

  return 0;
}
