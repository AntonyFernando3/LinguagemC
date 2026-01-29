#include<stdio.h>
#include<malloc.h>

typedef struct dados {
	int chave;
	struct dados *prox;
} pilha;
 
 pilha *topo, *novo, *aux;
 
 void empilha(int num){
 	novo = (pilha *) malloc(sizeof(pilha));
 	novo -> chave = num;
 	if(topo == NULL) novo -> prox = NULL;
 	else novo -> prox = topo;
 	topo = novo;
 }
 
 void mostra(){
 	if(topo == NULL) {
 		printf("\n\n PILHA VAZIA! \n\n");
 		return;
	 }
	 aux = topo;
 
  while(aux != NULL){
  	printf("\n\t%d", aux -> chave);
  	printf("\n\t |");
  	printf("\n\t v");
  	aux = aux -> prox;
  }
  printf("\n\t NULL");
 
}
void desempilha(){
	if(topo == NULL) return;
	aux = topo;
	topo = topo -> prox;
	free(aux);
}

 main(){
 	topo = NULL;
 	empilha(10); empilha(15); empilha(3); empilha(2);
 	mostra();
 	desempilha();
 	mostra();
 }
 
