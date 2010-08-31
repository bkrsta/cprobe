#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i; char *buffer;

  printf("Duljina stringa? "); scanf("%d", &n);

  buffer=(char*)malloc(n+1); //'+1' zbog \0 na kraju stringa
  if (buffer==NULL) exit(1); //ako nije uspio alocirati

  for (i=0; i<n; i++)
    buffer[i]=(rand()%2==0)?
      (rand()%26+'A'):(rand()%26+'a'); //velika i mala slova
  buffer[n]='\0'; //kraj stringa

  printf("String: %s\n", buffer);
  free(buffer); //oslobodi memoriju

  return 0;
}
