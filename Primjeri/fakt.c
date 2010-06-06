#include <stdio.h>

/*
3
2
1
t 3 6

*/

int fakt(int n){
	int t=n;
	for(; t>1; t--){
		n*=t;
	}
}

int main(void){

	int broj, fakt;
	scanf("%d%d", broj, fakt);
	printf("");

	return 0;
}