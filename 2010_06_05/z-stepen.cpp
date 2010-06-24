#include <iostream>
using namespace std;

int o,s,m,oo;

long long int pot(int x, int n){
	switch(n){
		case 0: return 1; break;
		case 1: return x; break;
		default:
		if(n%2==0){
			long long int b=pot(x, n/2);
			return (b*b)%m;
		}
		else return (x*pot(x, n-1))%m;
	}
}

int main(){
	cin>>o>>s>>m;
	cout<< pot(o,s)%m <<endl;

	return 0;
}
