#include "racional.c"

int main() {

   RACIONAL *r1=criar(1,2);
   RACIONAL *r2=criar(1,2);

   imprimir(r1);
   imprimir(r2);

   RACIONAL *r3 = adicao(r1,r2);
   imprimir(r3);

   RACIONAL *r4 = multiplicacao(r1,r2);
   imprimir(r4);

   RACIONAL *r5 = divisao(r1,r2);
   imprimir(r5);
   
   limpar(r1);
   limpar(r2);
   limpar(r3);
   limpar(r4);
   limpar(r5);

   return 0;
}

