/*
	Tarefa 1 de MC202
	Aluno: Samuel Toyoshi Ishida
	RA: 160250
	Turma A
*/

#include "lista.h"

/*Implementacao das funcoes mtf, tr e fc*/
int mtf(int n, lista *init)
{
	
}

int tr(int n, lista *init)
{
	
}

int fc(int n, lista *init)
{
	
}

/*Implementacao das funcoes para manipular a lista*/
void push_back(int n, lista *p)
{
	for(;p->prox != NULL; p = p->prox);
	p->prox = malloc(sizeof(lista));
	p = p->prox;
	p->arq = n;
	p->cont = 0;
	p->prox = NULL;
}

lista *init_lista(int n)
{
	lista *first = malloc(sizeof(lista));
	lista *p;
	int i;
	
	for(i=1, p = first; i<n; i++)
	{
		p->arq = i;
		p->cont = 0;
		p->prox = malloc(sizeof(lista));
		p = p->prox;
	}
	
	p->arq = n;
	p->cont = 0;
	/* Fim da lista */
	p->prox = NULL;
	
	return first;
}