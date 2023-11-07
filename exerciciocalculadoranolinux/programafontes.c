#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //adiciona as acentuações da língua portuguesa.

int main (void) {
	setlocale(LC_ALL, "Portuguese"); 
	int continuar, operacao;
	float num1, num2, resultado;
	continuar = 1;

	while (continuar == 1) { //escolha da operação.

		printf("selecione uma operacão: \n");
		printf("1. soma \n");
		printf("2. subtração \n");
		printf("3. multiplicação \n");
		printf("4. divisão \n");
		printf("0. sair \n");
		scanf ("%d", &operacao);

		switch (operacao) //codigo a ser rodado caso seja escolhido uma das operações.
		{
			case 1 :
				printf("digite o primeiro numero \n");
				scanf("%f", &num1);
				printf("digite o segundo numero: \n");
				scanf("%f", &num2);
				resultado = num1 + num2;
				printf("resultado: %.2f \n", resultado);
				break;

			case 2 :
				printf("digite o primeiro numero \n");
				scanf("%f", &num1);
				printf("digite o segundo numero \n");
				scanf("%f", &num2);
				resultado = num1 - num2;
				printf("resultado: %.2f \n", resultado);
				break;

			case 3 :
				printf("digite o primeiro numero \n");
				scanf("%f", &num1);
				printf("digite o segundo numero \n");
				scanf("%f", &num2);
				resultado = num1 * num2;
				printf("resultado: %.2f \n", resultado);
				break;

			case 4 :
				printf("digite o primeiro numero: \n");
				scanf("%f", &num1);
				printf("digite o segundo numero: \n");
				scanf("%f", &num2);

				if(num2 > 0) { //imprime um erro caso o usuario insira um divisor menor que 1.
					resultado = num1 / num2;
					printf("resultado: %.2f \n", resultado);
				} 
				else {
					printf("erro: divisão por zero \n");
				}
				break;
				
			case 0 : //para o codigo pois a variavel "continuar" não é mais igual a 1.
				continuar = 0;
				break; 
			
		}
	}
	return 0;
}
			
