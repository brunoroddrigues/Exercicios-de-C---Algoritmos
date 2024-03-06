#include"stdio.h" // exer 11. Dado o vetor A={6,4,7,8,0}, crie o vetor B com os valores de A em ordem inversa. Exibir os dois vetores lado a lado.
int main()
{
	int i;
	int  tamanho=5, ult=tamanho-1;
	int vetor_a[]={6,4,7,8,0}, vetor_b[tamanho];
	for(i=0; i<tamanho; i++)
	{
		vetor_b[i] = vetor_a[ult-i]; //subtrai 1 no vetor b
	}
	for(i=0; i<tamanho; i++)
	{
		printf("%i \t %i \n", vetor_a[i], vetor_b[i]);
	}
	return 0;
}
