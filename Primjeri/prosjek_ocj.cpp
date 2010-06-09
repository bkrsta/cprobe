#include <iostream>
#define MAXP 15
using namespace std;

struct predmeti {
	int id;
	char ime[16];
};

int o[MAXP], upisanih;
double pr;

predmeti p[MAXP]={
	1, "Hj",
	2, "Eng",
	3, "Lat",
	4, "Gk",
	5, "Lik",
	6, "Pov",
	7, "Geo",
	8, "Mat",
	9, "Fiz",
	10, "Kem",
	11, "Bio",
	12, "Inf",
	13, "Tzk",
	14, "Etk",
	15, "Inf2",
};

int main(){

	cout<<" --- Ocjene: ---"<<endl;
	cout<<" # ako ocjena nije upisana ili je 0, nece se racunati "<<endl;
	for(int i=0; i<MAXP; ++i){
		// cout<<p[i].id<<". "<<p[i].ime<<": ";
		printf("%2d. %5s: ", p[i].id, p[i].ime);
		cin>>o[i];
	}
	for(int i=0; i<MAXP; ++i){
		if(o[i]>0){
			pr+=o[i]; upisanih++;
		}
	}
	pr/=upisanih;

	cout<<" >>> Prosjek: ";
	printf("%.2lf", pr);
	cout<<endl;

	return 0;
}
