#include <stdio.h>
#define MAXBRVICEVA 10

char vicevi[MAXBRVICEVA][100];
int  vicmax=0;

int main(void){

	int i;
	char odg;

	ispis:

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
	printf(" 4 - KRAJ\n");
	printf("====================\n");
	printf(" > Choose your destiny: ");
	scanf("%s", &odg);
	printf("\n\n");

	if(odg=='1'){
		printf( (vicmax!=0)?"Trenutni broj viceva jest %d\n":"Nisi stavio viceva.\n", vicmax);
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
	} else if(odg=='4'){
		printf(" ... Zbogom!\n");
		system("PAUSE");
		exit(0);
	} else printf("\nA daj, bas si mastovit ...\n");

	goto menu;

	kraj:
	system("PAUSE");
	return 0;

}