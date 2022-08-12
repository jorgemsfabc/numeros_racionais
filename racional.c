#include "racional.h"
#include <stdio.h>
#include <stdlib.h>

 struct  racional{
    int num;
    int den;
 }; 

RACIONAL* criar(int num, int den) {
    
    struct racional *p;

    p = malloc(sizeof(struct racional));
    
    p->den = den;
    p->num = num;
    
    return p;  
}

void imprimir(RACIONAL *rac) {
   printf(" %i / %i \n", rac->num,rac->den );

}

RACIONAL *adicao(RACIONAL *v1, RACIONAL *v2) {

   int numerador,denominador;
   struct racional *p_add;

   p_add = malloc(sizeof(struct racional));

   numerador = (v1->num * v2->den) + (v2->num * v1->den);
   denominador = v1->den * v2->den;
   p_add->num =  numerador;
   p_add->den =  denominador;

   return p_add;

}

RACIONAL *multiplicacao(RACIONAL *v1, RACIONAL *v2) {
    
    int numerador, denominador;
    struct racional *p_mult;

    p_mult = malloc(sizeof(struct racional));

    numerador = v1->num * v2->num;
    denominador = v1->den * v2->den;

    p_mult->den = denominador;
    p_mult->num = numerador;

    return p_mult;

}

RACIONAL *divisao(RACIONAL *v1, RACIONAL *v2) {
    
    int numerador, denominador;
    struct racional *p_div;

    p_div = malloc(sizeof(struct racional));

    numerador = v1->num * v2->den;
    denominador = v1->den * v2->num;

    p_div->den = denominador;
    p_div->num = numerador;

    return p_div;

}

void limpar(RACIONAL *rac) {
    free(rac);
}



