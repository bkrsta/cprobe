// Prosti brojevi (c/c++)

// #include <stdio.h>

#if __cplusplus
	#include <iostream>
#else
	#include <stdio.h>
#endif
#include <math.h>


// int main(int argc, char** argv)
// {
// 	int i,j, m;
// 	printf("Max: ");
// 	//scanf("%d", &m);
// 
// 	//printf("1 ");
// 	for(i = 1; i<10; i++){
// 		for(j = 2; j<sqrt(i); j++)
// 			if(i%j == 0) break;
// 		printf( (i==j)?"%d je!\n":"%d nije Prime\n" ,i);
// 	}
// 
// 	return 0;
// }


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
	#if __cplusplus
	printf("\n> C++\n\n");
	#else
	printf("\n> C\n\n");
	#endif
	sieve();
	int i;
	for(i = 0; i <= 100; i++){
		// printf("N=%d %d\n", i, isPrimeSieve(i));
		printf("N=%d %d\n", i, prime[i]);
	}
	return 0;
}


// int main()
// {
// 	int i, j;
// 
// 	for ( i = 2; i < 1000; i++ )
// 	{
// 		for ( j = 2; j <= i/2; j++ )
// 			if ( ! ( i % j ) ) break;
// 		if ( j > i / 2 ) cout << i << endl;
// 	}
// 
// 	return 0;
// }
