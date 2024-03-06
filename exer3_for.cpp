#include"stdio.h" ////exer.3 //Calcular média da classe com a entrada das notas P1 pelo usuário.*
int main() // usando vetor
{
	int i, qtd;
	float soma, media;
	printf("quantos alunos sao? ");
	scanf("%i", &qtd);
	float vetor_prova_1[qtd];
	for(i=0; i<qtd; i++)
	{
		printf("digite a nota:");
		scanf("%f", &vetor_prova_1[i]);
		soma = soma + vetor_prova_1[i];
	}
	for(i=0; i<qtd; i++)
	{
		printf("%.2f \t", vetor_prova_1[i]);
	}
	media = soma / qtd;
	printf("a media dos %d alunos eh %.2f", qtd, media);
	return 0;
}
