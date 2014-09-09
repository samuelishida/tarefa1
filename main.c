/*
	Tarefa 1 de MC202
	Aluno: Samuel Toyoshi Ishida
	RA: 160250
	Turma A
*/
#include "lista.h"

int main()
{
	int n, i, nReq, req, fc_count, tr_count, mtf_count;
	lista *arq1, *arq2, *arq3;
	
	fc_count = tr_count = mtf_count = 0;
	
	scanf("%d %d",&n, &nReq);
	
	arq1 = init_lista(n);
	arq2 = init_lista(n);
	arq3 = init_lista(n);

	for(i=0; i<nReq; i++)
	{
		scanf("%d",&req);
		
		mtf_count += mtf(req,n,&arq1);
		tr_count += tr(req,n,&arq2);
		fc_count += fc(req,n,&arq3);
	}
	
	printf("%d %d %d\n",mtf_count, tr_count, fc_count);
	
	desaloca_lista(arq1);
	desaloca_lista(arq2);
	desaloca_lista(arq3);
	
	return 0;
}