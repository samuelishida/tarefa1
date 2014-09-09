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
		
	mtf(4,5,arquivos);
	
	printf("\n");
	
	return 0;
}