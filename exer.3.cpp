#include"stdio.h" //exer.33 //Calcular média da classe com a entrada das notas P1 pelo usuário.*
int main()
{
	int qtd=0;
	float media, nota1, soma=0;
	char resp;
	printf("quantos alunos sao?");
	scanf("%i", &qtd);
	do
	{
		printf("\n digite o valor da nota 1:");
		scanf("%f", &nota1);
		soma = soma + (nota1);
		qtd++;
		printf("\n deseja fazer novamente??");
		scanf(" %c", &resp);
	}while(resp=='s');
	media = soma / qtd;
	printf("\n a media eh %.2f", media);
	return 0;
}
