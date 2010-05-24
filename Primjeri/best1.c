#include<stdio.h>

int main(){
  printf("Fender rulz!\n");
  char odgovor = getchar();
  if(odgovor=='x')
    printf("Presto Bred pit ...");
  else
    printf("Ah, krivi!");
  system("PAUSE");
}
