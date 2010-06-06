//kombinacije
//#include <iostream>
#include <stdio.h>


void k(int dub, int br, int N){
	if(dub == 0){
		printf("%d\n", br);
		return;
	}
	int i;
	for(i=1; i<=N; i++){
		k(dub-1, br*10+i, N);
	}
}

int main(int argc, char** argv)
{
	int znam;
	scanf("%d", &znam);
	k(3,0, znam);
	return 0;
}
