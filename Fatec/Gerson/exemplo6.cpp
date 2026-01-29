#include <stdio.h>

void teste (int *a, int *b){
	(*a)++; (*b)++;
}
main() {
	int x=5, y=10;
	teste(&x, &y);
	printf("\n x= %d, y=%d", x, y);
}
