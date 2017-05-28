#include<stdio.h>
#include<stdlib.h>

struct dma {
      int dia;
      int mes;
      int ano; 
}; 

int main() {
   struct dma x;

   x.dia = 10;
   x.mes = 4;
   x.ano = 1990;

   printf("Dia %d, mês %d, ano %d.\n", x.dia, x.mes, x.ano);
}