#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para alocar string dinamicamente
char* alocaString(int tamanho) {
    return (char*) malloc((tamanho + 1) * sizeof(char));
}

int main() {
    int n, i;
    char *str;

    printf("Digite o tamanho da string: ");
    scanf("%d", &n);

    str = alocaString(n);
    if (str == NULL) {
        printf("Erro de memória!\n");
        return 1;
    }

    printf("Digite a string: ");
    scanf(" %[^\n]", str); // lê até espaço

    printf("String sem vogais: ");
    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
              c=='A'||c=='E'||c=='I'||c=='O'||c=='U')) {
            printf("%c", c);
        }
    }
    printf("\n");

    free(str);
    return 0;
}
