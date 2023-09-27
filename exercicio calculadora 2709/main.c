#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int numero1;
	int numero2;
	int resultado;
	int operacao;
	int repeticao;
	
	printf("escreva o primeiro numero:\n");
	scanf("%d", &numero1);
	printf("escreva o segundo numero: \n");
	scanf("%d", &numero2);
	printf("digite 1 para somas, 2 para subtracoes, 3 para multiplicacoes, 4 para divisoes: \n");
	scanf("%d", &operacao);
	
	switch (operacao){
		case 1:
		    operacao=="1";
			resultado = numero1 + numero2;
		
			printf("O resultado é %d", resultado);
		break;
	
				case 2:
		    operacao=="2";
			resultado = numero1 - numero2;
		
			printf("O resultado é %d", resultado);
		break;
		
				case 3:
		    operacao=="3";
			resultado = numero1 * numero2;
		
			printf("O resultado é %d", resultado);
		break;
		
		case 4:
		    operacao=="4";
			resultado = numero1 / numero2;
		
			printf("O resultado é %d", resultado);
		break;		
		
		
		 
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
