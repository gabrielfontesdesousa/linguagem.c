#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main(void){

	float num1, num2, resultado;
	int continuar, operacao;

	continuar = 1;

	while (continuar == 1){
		printf("selecione a operacao desejada: \n");
		printf("1.soma \n");
		printf("2.subtracao \n");
		printf("3. multiplicacao \n");
		printf("4. divisao \n");
		printf("0. sair \n");

		switch (operacao) {
			case 1 :
				resultado = soma(num1, num2);
				printf("resultado: %.2f \n", resultado);
			break;

			case 2 :
				resultado = subtra(num1, num2);
				printf("resultado: %.2f");
			break;

			case 3 : 
				resultado = subtra(num1, num2);
				printf("resultado: %.2f");
			break;

			case 4 :
				resultado = divisao(num1, num2);
				printf("resultado: %.2f", resultado);
			break;

			case 0 :
				continuar = 0;
			break;
		}
	}

}
