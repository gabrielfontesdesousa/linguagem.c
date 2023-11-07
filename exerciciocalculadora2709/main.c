#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");

  char operacao;
    float num1, num2, resultado;
    int continuar = 1;

    while (continuar) {
        printf("\nSelecione uma operacao:\n");
        printf("1 - Soma \n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("0 - Sair\n");
        scanf(" %c", &operacao);

        switch (operacao) {
            case '1':
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("Resultado: %f \n", resultado);
                break;
            case '2':
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 - num2;
                printf("Resultado: %f \n", resultado);
                break;
            case '3':
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 * num2;
                printf("Resultado: %f \n", resultado);
                break;
            case '4':
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %f \n", resultado);
                } else {
                    printf("Erro: Divisao por zero!\n");
                }
                break;
            case '0':
                continuar = 0;
                printf("Encerrando o programa.\n");
                break;

        }
    }
    return 0;
}
