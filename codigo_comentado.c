#include <stdio.h>
#include <locale.h>

int main() {
    // Impressão do cabeçalho do jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42; // Número secreto que o jogador deve adivinhar
    int chute; // Armazena a tentativa do jogador
    int tentativas = 1; // Inicializa o contador de tentativas

    while (1) { // Loop principal do jogo (executa indefinidamente)

        printf("Tentativa %d\n", tentativas); // Imprime o número da tentativa
        printf("Qual é o seu chute? "); // Pergunta ao jogador qual é o chute
        scanf("%d", &chute); // Lê o chute do jogador
        printf("Seu chute foi %d\n", chute); // Imprime o chute do jogador

        int acertou = (chute == numerosecreto); // Verifica se o jogador acertou o número secreto
        int maior = chute > numerosecreto; // Verifica se o chute do jogador foi maior que o número secreto

        if (chute < 0) { // Verifica se o chute é negativo
            printf("Você não pode digitar números negativos! \n"); // Mensagem de erro
            continue; // Ignora o restante do loop e pede outra tentativa
        } else if (acertou) { // Verifica se o jogador acertou o número secreto
            printf("Você acertou! \n"); // Mensagem de acerto
            break; // Sai do loop, o jogo acabou
        } else if (maior) { // Verifica se o chute foi maior que o número secreto
            printf("Seu chute foi maior que o número secreto, tente novamente! \n"); // Mensagem de chute alto
        } else { // Caso contrário (chute menor que o número secreto)
            printf("Seu chute foi menor que o número secreto, tente novamente! \n"); // Mensagem de chute baixo
        }
        tentativas = tentativas + 1; // Incrementa o contador de tentativas
    }
    printf("Fim de Jogo!\n"); // Mensagem de fim de jogo
    printf("Você acertou em %d tentativas!\n", tentativas); // Informa o número de tentativas

    // Partes do código que foram retiradas:
    // #define NUMERO_DE_TENTATIVAS 5 - Define uma constante para o número de tentativas
    // for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) - Loop for usando a constante
    // i-- Foi retirado do código por edição, é o contrário do i++
    // break; retirado do meu código por conta de edição, comando para o for parar
}
