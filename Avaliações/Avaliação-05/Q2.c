#include <stdio.h>

int main(){
  FILE *arquivo;
  char nomeARQ[30];
  char c;
  int numeroLinhas = 0;

  printf("Nome do arquivo: ");
  scanf("%s", &nomeARQ);

  arquivo = fopen(nomeARQ, "r");
  if (arquivo != NULL){
    while ((c = fgetc(arquivo)) != EOF){
      if (c == '\n'){
        numeroLinhas++;
      }
    }
  }
  fclose(arquivo);

  printf("O arquivo possui %d linhas.\n", numeroLinhas);
  return 0;
}