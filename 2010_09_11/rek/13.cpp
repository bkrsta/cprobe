// 13. Napisi rekurzivnu funkciju koja ce ucitani prorodni broj u dekadskom zapisu zapisati binarno.
#include <iostream>
using namespace std;

#define GROUP 4

void bits(int n){
	unsigned int i, s, c=1;
	if(n==0){ for(int i=0; i<GROUP; ++i) cout<<"0"; return; }
	i = 1<<(sizeof(n)*8-1);
	s = -1; s >>= GROUP;
	while(s >= n){ i >>= GROUP; s >>= GROUP; }
	while(i > 0) {
		if (n & i) printf("1");
		else       printf("0");
    if(c%GROUP==0) printf(" ");
		i >>= 1; c++;
	}
}

int main(){
  int n; cin>>n;
  bits(n); cout<<endl;

  return 0;
}
