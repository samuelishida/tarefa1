/*
	Tarefa 1 de MC202
	Aluno: Samuel Toyoshi Ishida
	RA: 160250
	Turma A
*/
#include "lista.h"

int main()
{
	int n, i, nReq, req;
	int arquivo;
	lista *arquivos;
	lista *p;
	
	scanf("%d %d",&n, &nReq);
	
	arquivos = init_lista(n);

	for(i=0; i<nReq; i++)
	{
		scanf("%d",&req);
		
		printf("%d\n",tr(req,n,&arquivos));
		
		for(p=arquivos;p != NULL;p=p->prox)
			printf("%d ",p->arq);
			
		printf("\n");
	}
	
	desaloca_lista(arquivos);
	
	return 0;
}