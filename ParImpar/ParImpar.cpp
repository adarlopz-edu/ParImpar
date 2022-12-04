#include <conio.h>
#include <stdio.h>
int main()
{
	int viNumero = 0;
	int viNumero2 = 0;
	printf("==========================\n");
	printf("Positivo-Negativo \t hecho por BALL\n");
	printf("==========================\n");
	printf("\n\n\n");
	printf("escribe una valor numerico entero:\n");
	scanf("%i", &viNumero);
	if (viNumero == 0)
	{
		printf("neutro");
	}
	else
	{
		if (viNumero % 2 == 0)

		{
			printf("valor es par");
		}
		else
		{
			printf("valor es impar");
		}
	}
}

