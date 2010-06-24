/*
 * karika.cpp
 * - sa z-treninga
 *
 */

// for
	// O
		// p++
	// X
		// p=0, zbr
	// B
		// p=0, ne zbr (-1)

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){

	string in; int p=0,suma=0;

	cin>>in;
	for(int i=0; i<in.size(); i++){
		switch(in[i]){
			case 'O':
				if(p==15){ cout<<"1000000000"<<endl; return 0; }
				else p++; break;
			case 'X': p=0; break;
			case 'B': suma+=((int)pow(2,p)-1); p=0; break;
		}
	}
	cout<<suma<<endl;

	return 0;
}
