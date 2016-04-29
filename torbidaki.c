#include <stdlib.h>
#include <stdio.h>

int main(){
  
  int eta;
  char nome;
  printf("Inserisci il tuo nome: ");
  scanf("%c",&nome);
  printf("Ora inserisci la tua eta': ");
  scanf("%d",&eta);
  
  if (eta >= 18)
	printf("Sei maggiorenne.\n");
  else
    printf("Sei minorenne.\n");
     
  system("PAUSE");
  return 0;
}
