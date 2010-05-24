//
// z-policajac.cpp
// [Z-Trening] [rijesen]
//

#include <iostream>
using namespace std;

int main(){

	int x[1000001]={0}, 	n, ta,tb,
			mind=1000000, maxo=0,
			s=0, max=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin>>ta>>tb;
		x[ta]++; x[tb+1]--;
		if(ta<mind) mind=ta;
		if(tb+1>maxo) maxo=tb+1;
	}
	for(int i=mind; i<=maxo; i++){
		s=s+x[i]; if(s>max) max=s;
	}
	cout<<max<<endl;

	return 0;
}
