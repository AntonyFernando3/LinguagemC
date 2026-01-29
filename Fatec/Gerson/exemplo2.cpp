#include<stdio.h>
// neste de progrmas os valores originais de X e Y são preservados na função main
// Ou seja não repercutem a modificAÇÃO feito a função teste_valor. Isso acontece
// porque os parâmetros da função teste_valor são passados e recebidos por valor

void teste_ref (int *a, int *b){ // Passagem por valor
    *a = (*a) * 2;
    *b = (*b) * 3;
    printf("\n Valor de X: %d", *a);
    printf("\n Valor de Y: %d", *b);
}

main(){
int x, y;
printf("\n Digite o valor de X: "); scanf("%d", &x);
printf("\n Digite o valor de Y: "); scanf("%d", &y);
teste_ref(&x,&y);
printf("\n Valor de X em main: %d",x); 
printf("\n Valor de Y em main: %d",y); 
}
