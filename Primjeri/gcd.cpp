// GCD()
// ... zajednicki dj., skracivanje razlomka
// #include <stdio.h>
#include <iostream>

int GCD(int a, int b){
	while(1){
		a=a%b;
		if(a==0) return b;
		b=b%a;
		if(b==0) return a;
	}
}

int main(int argc, char** argv){
	int a, b;
	scanf("%d%d", &a, &b);

	while(GCD(a,b)!=1){
		int x = GCD(a,b);
		a/=x; b/=x;
	}

	printf("A: %d \nB: %d\n ", a, b);

	return 0;
}
