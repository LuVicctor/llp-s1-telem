#include <stdio.h>

int main() {
  int bmaior, bmenor;
  float altura, area;
  printf("!!Entre com os valores de um trapézio!!\n");
  printf("Base maior:");
  scanf(" %d", &bmaior);

  printf("Base menor:");
  scanf(" %d", &bmenor);
  if (bmenor > bmaior){
    printf("Valores inválidos");
    return 1;
  }
  printf("Altura:");
  scanf(" %f", &altura);

  area = ((bmaior + bmenor) * altura)/2;

  printf("A área desse trapézio é: %.2f", area);
  
return 0;
}   