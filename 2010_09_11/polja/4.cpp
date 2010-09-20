// 4. Zadan je niz brojeva. Ispisi sve one koji su djeljivi s 5 i koliko ih ima.
#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> l; int n, t, c=0; cout<<"n: "; cin>>n;
  for(int i=0; i<n; ++i){ cin>>t; if(t%5==0){ l.push_back(t); c++; } }
  cout<<"Brojevi dj. s 5:"<<endl;
  for(int i=0; i<l.size(); ++i){ cout<<l[i]<<" "; }
  cout<<endl<<"Koliko?: "<<c<<endl;

  return 0;
}
