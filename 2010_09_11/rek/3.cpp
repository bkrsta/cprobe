// 3. Napisi rekurzivnu funkciju koja ce za ucitani n izracunati n-ti clan Fibonaccijevog niza.
#include <iostream>
using namespace std;

typedef unsigned int uint;

uint fib(uint n){
	uint a[3];
	uint *p=a;
	uint i;

	for(i=0; i<=n; ++i) {
		if(i<2) *p=i;
		else {
			if(p==a) *p=*(a+1)+*(a+2);
			else if(p==a+1) *p=*a+*(a+2);
			else *p=*a+*(a+1);
		}
		if(++p>a+2) p=a;
	}

	return p==a?*(p+2):*(p-1);
}

int main(int argc, char const *argv[]){

  int n;
  cout<<"n: "; cin>>n;
  cout<<"Fib("<<n<<") = "<<fib(n)<<endl;

  return 0;
}
