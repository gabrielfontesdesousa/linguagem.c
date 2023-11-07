#include <stdio.h>
#include <stdlib.h>


int main() {	
    int vetor[7];
    int troca, ord, comp;

    printf("Digite 7 numeros: \n");
    for (ord = 0; ord < 7; ord++) {
        scanf("%d", &vetor[ord]);
    }

    //faz a ordenação
    for (ord = 0; ord < 7 - 1; ord++) {
        for (comp = 0; comp < 7 - ord - 1; comp++) {
            if (vetor[comp] > vetor[comp + 1]) {
                // Troca os valores se estiverem fora de ordem
                troca = vetor[comp];
                vetor[comp] = vetor[comp + 1];
                vetor[comp + 1] = troca;
            }
        }
    }

    // Apresenta o resultado
    printf("Em ordem crescente: \n");
    for (ord = 0; ord < 7; ord++) {
        printf("%d ", vetor[ord]);
    }

    return 0;
}