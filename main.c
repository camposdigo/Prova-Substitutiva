#include <stdio.h>

float calcularMedia(float notas[], int quantidade) {
    float soma = 0.0;
    for (int i = 0; i < quantidade; i++) {
        soma += notas[i];
    }
    return soma / quantidade;
}

float encontrarMaior(float notas[], int quantidade) {
    float maior = notas[0];
    for (int i = 1; i < quantidade; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

int main() {
    float notas[10];
    int quantidade;

    do {
        printf("Digite a quantidade de notas a serem inseridas (1 a 10): ");
        scanf("%d", &quantidade);

        if (quantidade < 1 || quantidade > 10) {
            printf("Quantidade inválida! Por favor, insira um número entre 1 e 10.\n");
        }
    } while (quantidade < 1 || quantidade > 10);

    printf("\n--- Entradas das Notas ---\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float media = calcularMedia(notas, quantidade);
    float maiorNota = encontrarMaior(notas, quantidade);

    printf("\n--- Resultados ---\n");
    printf("Média das notas: %.2f\n", media);
    printf("Maior nota inserida: %.2f\n", maiorNota);

    return 0;
}
