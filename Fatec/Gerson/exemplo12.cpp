#include<stdio.h>

int fatorial (int n)
{
	if (n<=1) return 1;
	else return n * fatorial(n-1);
}

main() {
	int n;
	do {
		printf("\n Numero natural = ");
		scanf("%d", &n);
	} while (n<0);
	prinf("\n Fatorial = %d", fatorial(n));
}
