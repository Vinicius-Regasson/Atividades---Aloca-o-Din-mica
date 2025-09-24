#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int i;

    vetor = (int*) malloc(5 * sizeof(int)); // (a) aloca dinamicamente

    if (vetor == NULL) {
        printf("Erro de memória!\n");
        return 1;
    }

    // (b) ler os números
    for (i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // (c) mostrar
    printf("Numeros digitados: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor); // (d) liberar memória
    return 0;
}
