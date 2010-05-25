// Prosti brojevi (c/c++)

#include <stdio.h>
#include <math.h>


#define MAX 1000

int prime[MAX];

int isPrime1(int n){
	if(n <= 1) return 0;
	int i;
	for(i = 2; i < n; i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}

void sieve(){ // primjer s Web-a
	prime[0] = 0;
	prime[1] = 0;
	int i,j;
	for(i = 2; i < MAX; i++)
		prime[i] = 1;
	int limit = (int)sqrt((double)MAX);
	for(i = 2; i <= limit; i++){
		if(prime[i])
			for(j = i*i; j <= MAX; j+=i)
				prime[j] = 0;
	}
}

int isPrimeSieve(int n){ return(prime[n])?1:0; }

int main(){
	sieve();
	int i;
	for(i = 0; i <= 100; i++)
		printf("N=%d %d\n", i, isPrimeSieve(i));
	return 0;
}
