//
// [DRAFT] primjer vadjenja znamenaka nakon dec. tocke u int.
// neprecizan je - ne radi za sve brojeve
// 123.456 --> 456
// 12.0056 --> 56
//
#include <stdio.h>

double roundN(double value, int to){
	double places=pow(10, to);
	return round(value*places)/places;
}

double decDioDbl( double *br ){
	double i=0, f=modf(*br, &i);
	return ((f-(int)f)==1)?0:f;
}

int main(){
	double br;
	// int c = 0;
	scanf("%lf", &br);

	// char chr[20];
	// sprintf(chr, "%lf", br);

	// printf("...: %s\n", f());
	printf("!: %lf\n", decDioDbl(&br));
	printf("---\n");
	// -------------------- !!
	int c = 0;
	// br = decDioDbl(&br);
	while(decDioDbl(&br) != 0 && c++ <=10){
		br*=10;
		printf("!: %lf\n", decDioDbl(&br));
	}
	printf("C:	%d\n", c);
	printf("!:	%lf\n", br);
	double k = br/pow(10,c);
	printf("!!: %lf\n", decDioDbl(&k)*pow(10,c));
	// --------------------
	
	printf("---\n");
	// printf("%lf	%lf \n", 123.45*100, f2(br, 0));

	// int i;
	// for(i = 1; i < 20; i++)
	// {
	//	printf(" .: %10.50lf \n", round(5.724*pow(10,i)));
	// }

	// f(br);

	// printf("\nRj.: %lf\n", f(br));

	// double integral, mf;
	// // mf = modf(br, &integral);
	// mf = br-(int)br;
	// printf("1. : %lf\n", integral);
	// printf("mf-(int)mf: %lf\n", mf-(int)mf);
	// 
	// while( mf-round((int)mf) != 0.0 && c<=50 ){
	//	printf("LOOP : %lf	 -- BR: %lf	  -- BR-INT(br+0.5): %lf \n", mf, br, br-(int)(br+0.5));
	//	mf=round(mf*10);
	//	c++;
	// }
	// printf("z. : %lf\n", mf);

	return 0;
}
