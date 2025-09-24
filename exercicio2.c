#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *vetor;

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
    }

    printf("Vetor lido: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);
    return 0;
}
