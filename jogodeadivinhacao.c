#include <stdio.h>
#include <locale.h>

int main() {
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    while (1) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (chute < 0) {
            printf("Você não pode digitar números negativos! \n");
            continue;
        } else if (acertou) {
            printf("Você acertou! \n");
            break;
        } else if (maior) {
            printf("Seu chute foi maior que o número secreto, tente novamente! \n");
        } else {
            printf("Seu chute foi menor que o número secreto, tente novamente! \n");
        }
        tentativas = tentativas + 1;

        double pontosperdidodos = (chute - numerosecreto) /2.0;
        pontos = pontos - pontosperdidodos;
    }
    printf ("Fim de Jogo!\n");
    printf ("Você acertou em %d tentativas\n!", tentativas);
    printf ("Total de pontos: %f\n", pontos);
}