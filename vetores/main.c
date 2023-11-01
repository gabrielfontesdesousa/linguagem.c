#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
    int num[10];
    int contador;

    for (contador = 0; contador < 10; contador++) {
        printf("Digite um número: ");
        scanf("%d", &num[contador]);
        num[contador] *= 2;
    }

    printf("dobros: \n");
    for (contador = 0; contador < 10; contador++) {
        printf("Posição %d: %d\n", contador, num[contador]);
    }

    return 0;
}


