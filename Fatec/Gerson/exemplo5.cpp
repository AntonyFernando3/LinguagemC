#include<stdio.h>
#include<malloc.h>

main(){
	int *a, t, i;
	do{
		printf("\n Digite um tamanho valido para a = ");
		scanf("%d", &t);
	} while(t<=0);
	a= (int *) malloc (t*sizeof(int));
	for(i=0; i<t; i++){
		printf("\n Valor %d = ", i); scanf("%d", & a[i]);
	}
	printf("\n exibindo o vetor: ");
	for(i=0; i<t; i++) printf("%d\t", a[i]);
}
