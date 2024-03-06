#include"stdio.h" // exer1
#include"string.h"    
struct Doce // comecar struct com maiuscula
{
	int codigo;
	char nome[100];
	float peso;
	bool diet;
	float preco;
};//caracteristicas do doce
int main()
{
	Doce brigadeiro;
	brigadeiro.diet=true; // esse eh diet
	brigadeiro.peso=25.1;
	brigadeiro.preco=2.49;
	brigadeiro.codigo=1;
	strcpy(brigadeiro.nome, "brigadeiro diet 25g");
	printf("%s:\n", brigadeiro.nome);  //%s de string
	printf("> diet: %i\t> peso: %.1f\n", brigadeiro.diet, brigadeiro.peso);
	printf("> cod : %d\t> preco: %.1f\n", brigadeiro.codigo, brigadeiro.preco);
	Doce beijinho;
	beijinho.diet=true;
	beijinho.peso=28.1;
	beijinho.preco=2.20;
	beijinho.codigo=1;
	strcpy(beijinho.nome;
	printf("%s:\n", beijinho.nome);
	printf("> diet: %i\t> peso: %.1f\n", beijinho.diet, beijinho.peso);
	printf("> cod : %i\t> preco: %.1f\n", beijinho.codigo, beijinho.preco);

	return 0; 
}
