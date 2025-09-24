#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, pares = 0, impares = 0, *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = (int*) malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de memória!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    free(vetor);
    return 0;
}
