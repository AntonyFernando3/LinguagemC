#include <stdio.h>

main() {
	int *a, *b, c=5, d=10;
	a=&c; b=&d;
	printf("\n%d\t%d\n", *a, *b);
	printf("\n%d\t%d\n", c,d);
}
