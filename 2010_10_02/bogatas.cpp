#include <iostream>
using namespace std;

#define D 0
#define Dbg \
  if(D){ \
    cout<<endl; \
    for(int i=0; i<d; i++){ \
      for(int j=0; j<d; j++) \
        cout<<m[i][j]<<" "; \
      cout<<endl; \
    } \
  }

int main(){
  int d,n,a,b,mx; cin>>d>>n;
  unsigned short int m[d][d];

  for(int i=0; i<d; i++)
    for(int j=0; j<d; j++)
      m[i][j]=0;

  for(int i=0; i<n; i++){ cin>>a>>b; m[a-1][b-1]=1; }

  Dbg;

  for(int i=0; i<d; i++)
    for(int j=0; j<d; j++)
      m[i][j]=(m[i][j]==0)?1:0;

  Dbg;

  for(int i=d-2; i>=0; i--){
    for(int j=d-2; j>=0; j--){
      //m[i][j] = (min(min(m[i+1][j+1], m[i+1][j]), m[i][j+1]) == 0) ? 0 : 1;
      if(m[i][j]==0) m[i][j]=0;
      else m[i][j] = min(min(m[i+1][j+1], m[i+1][j]), m[i][j+1]) + 1;
      //cout<<i<<","<<j<<" -> "<<m[i][j]<<endl;
    }
  }

  Dbg;

  for(int i=0; i<d; i++)
    for(int j=0; j<d; j++)
      if(mx<m[i][j]) mx=m[i][j];

  cout<<mx<<endl;

  return 0;
}

