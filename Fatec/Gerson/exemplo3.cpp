#include<stdio.h>
// neste de progrmas os valores originais de X e Y são preservados na função main
// Ou seja não repercutem a modificAÇÃO feito a função teste_valor. Isso acontece
// porque os parâmetros da função teste_valor são passados e recebidos por valor

void teste_ref (int a[2]) { // Passagem por valor
    a[0] = a[0] * 2;
    a[1] = a[1] * 3;
    printf("\n Valor de X: %d", a[0]);
    printf("\n Valor de Y: %d", a[1]);
}

main(){
int x[2];
printf("\n Digite o valor de X: "); scanf("%d", &x[0]);
printf("\n Digite o valor de Y: "); scanf("%d", &x[1]);
teste_ref(x);
printf("\n Valor de X em main: %d",x[0]); 
printf("\n Valor de Y em main: %d",x[1]); 
}
