#include <stdio.h>
#define MAXBRVICEVA 10

char vicevi[MAXBRVICEVA][100];
int  vicmax=0; // slobodnoMjestoZaVic - kod dodavanja novoga

int brojviceva(){
	int i, c=0;
	for(i=0; i<MAXBRVICEVA; i++) if(vicevi[i]!="\0") c++;
	return c;
}

int main(void){

	int i; // potrebna za 'for'
	char odg;

	ispis:

	//for(i=0; i<MAXBRVICEVA; i++){
	if(vicmax==0)
		printf("Nema viceva u bazi. Dodaj novi!\n");
	else
		for(i=0; i<vicmax; i++)
			if( vicevi[i]!="" )
				printf("Vic br. %d : %s \n", i+1, vicevi[i]);

	menu:
	printf("\n");
	printf("======= MENU =======\n");
	printf(" 1 - broj viceva\n");
	printf(" 2 - ispis finti\n");
	printf(" 3 - dodavanje fore\n");
	printf("====================\n");
	printf(" > Choose your destiny: ");
	scanf("%s", &odg);
	printf("\n\n", odg);

	if(odg=='1'){
		printf("Trenutni broj viceva jest %d\n", vicmax);
	} else if(odg=='2'){
		if(vicmax==0) printf("Pa konju! Nisi stavio ni jedan vic.");
		printf("\nVicevi:\n");
		for(i=0; i<vicmax; i++)
			if( vicevi[i]!="" )
				printf("Vic br. %d : %s \n", i+1, vicevi[i]);
	} else if(odg=='3'){
		printf("Vic: ");
		scanf("%s", &vicevi[vicmax++]);
		printf("stavio sam novi vic na mjesto %d\n", vicmax-1);
		printf("... i nadam se da ima stila.");
	} else printf("\nA daj, bas si mastovit ...\n");

	goto menu;

	kraj:

	// system("PAUSE");
	return 0;

}