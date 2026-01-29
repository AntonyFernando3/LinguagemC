#include<stdio.h>

int fibonacci (int p)
{
if (p==0 || p==1) return 1;
else return fibonacci(p-1) + fibonacci(p-2);
}

main(){
	int p;
	do {
	  printf("\n Posicao: "); scanf("%d", &p);
	} while(p<1);
	for(int i=1; i<=p; i++) printf("%d\t", fibonacci(p));
	printf(!"\n");
}
