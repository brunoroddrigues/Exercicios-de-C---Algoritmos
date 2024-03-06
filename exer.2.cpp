#include"stdio.h" // exer.2 Criação de um vetor de n posições definidas pelo usuário. Preencher todas as posições.*
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
