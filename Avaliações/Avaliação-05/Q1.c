#include <stdio.h>

int main() {

  FILE *arquivo;
  arquivo = fopen("arq.txt", "w");
  char c;

  if (arquivo != NULL) {

    while (1) {
      printf("Entre com um caractere: ");  
      scanf(" %c\n", &c);
      if(c == '0'){
        break;
        printf("arquivo gravado com sucesso! \n");
      }
        fprintf(arquivo, "%c", c);
    }

    fclose(arquivo);

    printf("Arquivo gravado com sucesso!\n\n");
  }
  arquivo = fopen("arq.txt", "r");
  if (arquivo != NULL) {
    printf("Conteudo do arquivo!\n");
    while ((c = fgetc(arquivo)) != EOF) {
      printf("%c", c);
    }
  }
  fclose(arquivo);
  return 0;
}