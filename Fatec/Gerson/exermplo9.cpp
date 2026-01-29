#include <stdio.h>

main(){
	int v[5] = {1, 2, 3 ,4, 5};
	
	int *p = v;
	
	printf("\nValores do vetor usando ponteiro: ");
	for(int i = 0; i < 5; i++) printf("%d", *(p+1));
	
	printf("\nValores do vetor usando notacao de vetor: ");
	for(int i = 0; i < 5; i++) printf("%d", v[i]);
}
