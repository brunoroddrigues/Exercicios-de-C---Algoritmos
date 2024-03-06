#include"stdio.h" //exer 6Dada a string “Admirável Mundo novo”, exiba-a de modo normal e inverso.
#include"string.h" // pra contar letras
int main()
{
	int i;
	char palavra[]="admiravel mundo novo\n"; // vetor de letras
	int tamanho = sizeof(palavra);
	printf("palavra ocupa %i \n\n", tamanho);
	for(i=0; i<tamanho; i++)
	{
		printf("%c ", palavra[i]);
	}
	printf("\n");
	for(i=tamanho; i>=0; i--)
	{
		printf("%c", palavra[i]);
	}
	return 0;
}
