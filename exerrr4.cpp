#include"stdio.h" //exer.4 Somar os valores do vetores A e B (posição a posição) e armazenar no vetor C.*
#include"stdlib.h"
#include"time.h"
int main()
{
	int i;
	int tamanho;
	printf("defina o tamanho dos vetores:");
	scanf("%i", &tamanho);
	srand(time(NULL));
	int vetora[tamanho], vetorb[tamanho], vetorc[tamanho];
	for(i=0; i<tamanho; i++)
	{
		vetora[i] = rand()%100; vetorb[i] = rand()%100; vetorc[i] = vetora[i] + vetorb[i]; 
	}
	for(i=0; i<tamanho; i++)
	{
		printf("%i + %i = % i\n", vetora[i], vetorb[i], vetorc[i]);
	}
	return 0;
}
