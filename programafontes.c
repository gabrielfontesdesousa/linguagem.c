
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){setlocale(LC_ALL, "Portuguese");
char operacao;
	float num1, num2, resultado;
	int continuar = 1;

	while (continuar) {
	
		printf("\n selecione uma operacao:\n");
		printf("1. soma");
		printf("2. subtração");
		printf("3. multiplicacao ");
		printf("4. divisao ");
		printf("0. sair");
		scanf ("%c", &operacao);

		switch(operacao){
			case '1':
			printf("digite o primeiro numero");
			scanf("%f", &num1);
			printf("digite o segundo numero:");
			scanf("%f", &num2);
			resultado = num1 + num2;
			printf("%f", resultado);
			break;

			case '2': 
			printf("digite o primeiro numero");
			scanf("%f", &num1);
			printf("digite o segundo numero");
			scanf("%f", &num2);
			resultado = num1 - num2;
			printf("o resultado é: %f \n", resultado);
			break;

			case '3':
			printf("digite o primeiro numero");
			scanf("%f", &num1);
			printf("digite o segundo numero");
			scanf("%f", &num2);
			resultado = num1 * num2;
			printf("o resultado é: %f \n", resultado);
			break;

			case'4':
			printf("digite o primeiro numero");
			scanf("%f", &num1);
			printf("digite o segundo numero: ");
			scanf("%f", &num2);
			
			if(num2 != 0) {
			resultado = num1 / num2;
			printf("resultado: %f", resultado);
			}
		       	else {
		       	printf("erro: divisao por zero \n");
			}
			break;
			case '0':
			continuar = 0;
			printf("encerrando programa. \n");
			break;

				


		}
	}
	return 0;

}
			
