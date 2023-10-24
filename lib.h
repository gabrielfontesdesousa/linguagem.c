#include <stdio.h>
#include <stdlib.h>

float soma (float num1, float num2){
	float resultado;
	printf("digite o primeiro numero: \n");
	scanf("%f",&num1);
	printf("digite o segundo numero: \n");
	scanf("%f",&num2);

	resultado = num1 + num2;
	return resultado;
}
float subtra (float num1, float num2){
	float resultado;
	printf("digite o primeiro numero \n");
	scanf("%f", &num1);
	printf("digite o segundo numero: \n");
	scanf("%f", &num2);

	resultado = num1 = num2;
	return resultado;
}
float multi (float num1, float num2){
	float resultado;
	printf("digite o primeiro numero: \n");
	scanf("%f", &num1);
	printf("digite o segundo numero: \n");
	scanf("%f", &num2);

	resultado = num1 * num2;
}
float divisao (float num1, float num2){
	float resultado;
	printf("digite o primeiro numero: \n");
	scanf("%f", &num1);
	printf("digite o segundo numero: \n");
	scanf("%f", &num2);


	if (num2 > 0){
		resultado = num1 / num2;
	}
	else {
		printf("erro, o divisor não pode ser menor ou igual a zero \n");
	}

	return resultado;
}
