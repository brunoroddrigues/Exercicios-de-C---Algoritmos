#include"stdio.h" //booleano 
#define echo printf 
int main()
{
	bool original  = 1; //definiu true 
	if(original==true) // posso omitir a comparação 
	{
		echo("originalidade mantida");
	}
	else
	{
		printf("saopaulo!");
	}
	printf("tamanho do booleano %i", sizeof(original));
	return 0;
}

