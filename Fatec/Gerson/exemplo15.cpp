// o código se encontra com erro na linha 13 

#include<stdio.h>
#include<malloc.h>

typedef struct dados
{
	int chave;
struct dados *esq;
struct dados *dir;
} ABB;

void inserir_ABB (ABB *raiz, int num) {
	ABB *novo, *aux;
	novo = (ABB*) malloc (sizeof(ABB));
	novo -> chave = num;
	novo -> esq = novo -> dir = NULL;
	
	if(raiz == NULL) {
		raiz = novo;
		return;
	}
	aux = raiz;
	while(true){
		if(num > aux -> chave){
			if(aux -> dir!= NULL) aux=aux->dir;
			else break;
		}
		else{
			if (aux -> esq != NULL) aux=aux -> esq;
			else break;
		}
	}
	if(num > aux->chave) aux -> dir=novo;
	else aux->esq=novo;
}

