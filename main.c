/*
	Tarefa 1 de MC202
	Aluno: Samuel Toyoshi Ishida
	RA: 160250
	Turma A
*/
#include "lista.h"

int main()
{
	int n, i;
	int arquivo;
	lista *arquivos;
	lista *p;
	
	scanf("%d",&n);	
	
	arquivos = init_lista(n);
		
	for(p = arquivos; p != NULL; p = p->prox)
		printf("%d ",p->arq);
	
	printf("\n");
	
	return 0;
}