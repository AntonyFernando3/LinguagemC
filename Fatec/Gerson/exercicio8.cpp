#include <stdio.h>
#include <malloc.h>

main(){
	int *a, *b;
	a = (int *) malloc (sizeof(int));
	b = (int *) malloc (sizeof(int));
	*a=5; *b=10;
	printf("\n%d\t%d\n", *a,*b);
}
