#include"stdio.h" // exer.2 Cria��o de um vetor de n posi��es definidas pelo usu�rio. Preencher todas as posi��es.*
#include"stdlib.h"
int main()
{
	int n, i;
	printf("\n digite o tamanho do vetor:");
	scanf("%i", &n);
	int vetor[n];
	for(i=0; i<n; i++)
	{
		vetor[i] = rand()%100; // colocar valor aleatorio..
		printf("%d\t", vetor[i]); // indice 
	}
	printf("\n");
	return 0;
}
