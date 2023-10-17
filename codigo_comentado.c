#include <stdio.h>
#include <locale.h>

int main() {
    // Imprime uma mensagem de boas-vindas
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    // Define o número secreto, variáveis para o chute, tentativas e pontos
    int numerosecreto = 42;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    // Entra em um loop enquanto a condição (1) for verdadeira (loop infinito)
    while (1) {
        // Imprime o número da tentativa
        printf("Tentativa %d\n", tentativas);
        // Solicita ao jogador que insira um chute
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        // Imprime o chute do jogador
        printf("Seu chute foi %d\n", chute);

        // Verifica se o chute do jogador está correto, maior ou menor que o número secreto
        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        // Verifica se o chute é negativo e continua o loop se for
        if (chute < 0) {
            printf("Você não pode digitar números negativos! \n");
            continue;
        } 
        // Informa o jogador que ele acertou e sai do loop
        else if (acertou) {
            printf("Você acertou! \n");
            break;
        } 
        // Informa o jogador que o chute foi maior que o número secreto
        else if (maior) {
            printf("Seu chute foi maior que o número secreto, tente novamente! \n");
        } 
        // Informa o jogador que o chute foi menor que o número secreto
        else {
            printf("Seu chute foi menor que o número secreto, tente novamente! \n");
        }
        tentativas = tentativas + 1;

        // Calcula os pontos perdidos com base na diferença entre o chute e o número secreto
        double pontosperdidodos = (double)(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidodos;
    }
    
    // Imprime uma mensagem de fim de jogo com o número de tentativas e pontos
    printf("Fim de Jogo!\n");
    printf("Você acertou em %d tentativas!\n", tentativas);
    printf("Total de pontos: %1f\n", pontos);
}

// Partes do código que foram retiradas:
// #define NUMERO_DE_TENTATIVAS 5 - Define uma constante para o número de tentativas
// for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) - Loop for usando a constante
// i-- Foi retirado do código por edição, é o contrário do i++
// break; retirado do meu código por conta de edição, comando para o for parar

