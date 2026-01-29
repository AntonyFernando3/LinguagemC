#include<stdio.h>

main(){
	int n = 5;
	double x = 123.25;
	int a[4] = {1, 2, 3, 4};
	
	printf("\n Valor de n = %d", n);
	printf("\n Tamanho de n = %d bytes", sizeof(n));
	printf("\n Valor de X = %f", x);
	printf("\n Tamanho de X = %d bytes \n", sizeof(x));
	printf("\n Valores de a = "); for(int i=0; i<4; i++) printf("%d", a[i]);
	printf("\n Tamanho de a = %d bytes\n", sizeof(a));
}
