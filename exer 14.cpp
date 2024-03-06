#include"stdio.h"  //14. Dado o vetor F={6,3,2,5,-7,1,9,-4}. Percorrer o vetor e apontar o menor valor e seu índice.
int main()
{
	int i;
	int vetor[]={6,3,2,5,-7,1,9,-4}; // int * 8 de 32 bytes
	int tamanho = sizeof(vetor)/4;
	printf("tamanho: %i", tamanho);
	int pequeno = vetor[0]; // define o primeiro valor pequeno
	for(i=0; i<tamanho; i++)
	{
		if(vetor[i] < pequeno)
		{
			pequeno = vetor[i];
		}
	}
	printf(" o menor valor eh %i", pequeno);
	return 0;
}
