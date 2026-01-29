#include<stdio.h>

struct cad
{
    char nome[30];
    char ende[40];
    float sal;
    int qtde[5];
};

main(){
    int n, i, j, tot;
    do {
        printf("\n Quantas pessoas? = ");
        scanf("%d", & n);
    } while (n <= 0);
    struct cad p[n];
    for(i=0; i<n; i++){
        printf("\n Pessoa %d: ", i+1);
        printf("\n\t Nome ="); fflush(stdin);
        gets(p[i].nome);
        printf("\n\t Endereco = "); fflush(stdin);
        gets(p[i].ende);
        printf("\n\t Salario = ");
        scanf("%f", & p[i].sal);
        for(j=0; j<5; j++){
            printf("\n\t Quantidade %d", j+1);
            scanf("%d", & p[i].qtde[j]);
            tot+=p[i].qtde[j];
        }
        printf("\n\t Quantidade Total = %d", tot);
    }
}
