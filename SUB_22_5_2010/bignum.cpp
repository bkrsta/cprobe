//
// bignum.cpp
// - unosi br. u matricu i mnozi ga
// [draft] [dbg]
//

#include <iostream>
#define MAXZ 64
using namespace std;

//char cc[MAXZ];
int  aa[MAXZ],
		 bb[MAXZ],
		 cc[MAXZ],
		 ccp, aap=0,
		 aai=0, d;
long long br;

int main(){
	cin>>br;
	for(;br!=0;){aa[aai]=br%10;cout<<(br%10)<<endl;br/=10;aai++;}
	for(int i=0;i<aai;i++){cout<<aa[i];}cout<<endl;
	for(int i=aai-1;i>=0;i--){bb[i]=aa[i]*5;cout<<bb[i]<<" ";}cout<<endl;
	for(int i=0;i<=aai;i++){
		cc[i]=aa[i]*5; cout <<aa[i]*5<<" "; } cout << endl;
	cout<<"cc[]: ";for(int i=0;i<=aai+1;i++)cout<<(cc[i])<<" ";cout<<endl;
	for(int i=0;i<=aai;i++){
		if(cc[i]>9){ cc[i+1]+=(cc[i]-cc[i]%10)/10; cc[i]%=10; }
	} cout << endl;
	cout<<"cc[]: ";for(int i=0;i<=aai+1;i++)cout<<(cc[i])<<" ";cout<<endl;

	return 0;
}
