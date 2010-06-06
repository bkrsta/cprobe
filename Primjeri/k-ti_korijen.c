// k-ti korijen
#include <stdio.h>


double pot(double b, int e){
	double r=1; while(e--) r*=b; return r;
}


int main(int argc, char** argv)
{

	int k,n;
	scanf("%d%d", &k, &n);
	printf("%d", pot(k,n));
	double poc=0., kraj=1000., sr, rez;
	int i;
	for(i=0;i<40;i++){
		sr = (poc+kraj)/2;
		rez = pot(sr, k);
		//printf("%lf\n", sr);
		if( n<rez ) kraj=sr;
		if( n>rez ) poc=sr;
		if( n==rez ) break;
	}
	printf("SR: %lf\n", sr);

	return 0;
}
