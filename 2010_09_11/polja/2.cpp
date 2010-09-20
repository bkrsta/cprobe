// 2. Napisi program koji ce ucitati niz brojeva, sortirati ga i ispisati sortiranog.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, t; cout<<"n: "; cin>>n;
  int l[n];
  for(int i=0; i<n; ++i){ cout<<i+1<<".: "; cin>>l[i]; }
  vector<int> v (l, l+n);
  sort(v.begin(), v.end());
  cout<<"Sortirani niz:"<<endl;
  for(vector<int>::iterator i=v.begin(); i!=v.end(); ++i){ cout<<*i<<" "; } cout<<endl;

  return 0;
}
