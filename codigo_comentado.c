#include <stdio.h>          // Inclui a biblioteca stdio.h (entrada/saída padrão)
#include <stdlib.h>         // Inclui a biblioteca stdlib.h (funções padrão)
#include <locale.h>         // Inclui a biblioteca locale.h (configurações de localização)
#include <time.h>           // Inclui a biblioteca time.h (trabalhando com tempo)

int main() {
    printf ("\n\n"); // Imprime espaços em branco para melhor formatação
    printf("          P  /_\\  P                               \n"); // Imprime uma arte ASCII
    printf("         /_\\_|_|_/_\\                             \n"); // Imprime outra parte da arte ASCII
    printf("     n_n | ||. .|| | n_n         Bem vindo ao      \n"); // Imprime uma mensagem
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!  \n"); // Imprime outra mensagem
    printf("    |" "  |  |_|  |"  " |                          \n"); // Imprime parte da arte ASCII
    printf("    |_____| ' _ ' |_____|                          \n"); // Imprime o restante da arte ASCII
    printf("          \\__|_|__/                               \n"); // Imprime a parte inferior da arte ASCII
    printf ("\n\n"); // Imprime espaços em branco para melhor formatação

    int segundos = time(0); // Obtém o número de segundos desde a época (tempo atual)
    srand(segundos);        // Inicializa o gerador de números pseudoaleatórios com a semente (seed) igual ao tempo atual

    int numerogrande = rand (); // Gera um número pseudoaleatório e armazena em "numerogrande"
    
    int numerosecreto = numerogrande % 100; // Calcula o número secreto como o resto da divisão por 100, limitando-o a um valor entre 0 e 99
    int chute;              // Variável para armazenar o chute do jogador
    int tentativas = 1;     // Contador de tentativas
    double pontos = 1000;   // Variável que armazena a pontuação do jogador

    int acertou = 0; // Variável para verificar se o jogador acertou

    int nivel; // Variável para armazenar o nível de dificuldade escolhido pelo jogador
    printf("Qual o nível de dificuldade?\n");  // Pede ao jogador para escolher o nível
    printf("(1) Fácil (2) Médio (3) Difícil\n\n"); // Opções de nível
    printf("Escolha: ");
    scanf("%d", &nivel); // Lê a escolha do jogador

    int numerodetentativas; // Variável para armazenar o número de tentativas com base no nível escolhido
    
    switch (nivel) { // Verifica o nível escolhido pelo jogador
    case 1:
        numerodetentativas = 20; // Define o número de tentativas para o nível fácil
        break;
    
    case 2: 
        numerodetentativas = 15; // Define o número de tentativas para o nível médio
        break;
    
    default:
        numerodetentativas = 6; // Define o número de tentativas para o nível difícil
        break;
    }

    for (int i = 1; i <= numerodetentativas; i++) { // Loop que representa as tentativas
        
        printf("Tentativa %d\n", tentativas); // Imprime o número da tentativa
        printf("Qual é o seu chute? "); // Pede ao jogador para inserir um chute
        scanf("%d", &chute); // Lê o chute do jogador
        printf("Seu chute foi %d\n", chute); // Imprime o chute do jogador

        if (chute < 0) { // Verifica se o chute do jogador é negativo e continua o loop se for
            printf("Você não pode digitar números negativos! \n");
            continue;
        } 
        
        acertou = (chute == numerosecreto); // Verifica se o chute está correto
        int maior = chute > numerosecreto; // Verifica se o chute é maior que o número secreto

        if (acertou) { // Se o jogador acertou, sai do loop
            break;
        } 
        
        else if (maior) { // Se o chute foi maior que o número secreto, informa ao jogador
            printf("Seu chute foi maior que o número secreto, tente novamente! \n");
        } 
        
        else { // Se o chute foi menor que o número secreto, informa ao jogador
            printf("Seu chute foi menor que o número secreto, tente novamente! \n");
        }

        tentativas++; // Incrementa o número de tentativas

        double pontosperdidodos = abs(chute - numerosecreto) / (double)2; // Calcula os pontos perdidos com base na diferença entre o chute e o número secreto
        pontos = pontos - pontosperdidodos; // Atualiza a pontuação do jogador
    }
    printf ("Fim de Jogo!\n"); // Imprime uma mensagem de fim de jogo
    
    if(acertou) { // Se o jogador acertou, informa que ele ganhou e exibe o número de tentativas e a pontuação
        printf("\n\n"); // Imprime espaços em branco para separar o "sorrisão" do restante da saída
        printf("             OOOOOOOOOOO               \n"); // Imprime a parte superior do "sorrisão"
        printf("         OOOOOOOOOOOOOOOOOOO           \n"); // Imprime os olhos do "sorrisão"
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n"); // Imprime a boca sorridente do "sorrisão"
        printf("    OOOOOO      OOOOO      OOOOOO      \n"); // Imprime a parte inferior do "sorrisão"
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n"); // Imprime a parte inferior do "sorrisão"
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n"); // Imprime a parte inferior do "sorrisão"
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n"); // Imprime a parte inferior do "sorrisão"
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n"); // Imprime a parte inferior do "sorrisão"
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n"); // Imprime a parte inferior do "sorrisão"
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n"); // Imprime a parte inferior do "sorrisão"
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n"); // Imprime a parte inferior do "sorrisão"
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n"); // Imprime a parte inferior do "sorrisão"
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n"); // Imprime a parte inferior do "sorrisão"
        printf("         OOOOOO         OOOOOO         \n"); // Imprime a parte inferior do "sorrisão"
        printf("             OOOOOOOOOOOO              \n"); // Imprime a parte inferior do "sorrisão"
        printf("\n\n"); // Imprime espaços em branco para separar o "sorrisão" do restante da saída
        printf("Parabéns! Você ganhou!\n"); // Informa ao jogador que ele ganhou
        printf("Você acertou em %d tentativas!\n", tentativas); // Informa o número de tentativas bem-sucedidas
        printf("Total de pontos: %.1f\n", pontos); // Informa a pontuação final do jogador
    } else { // Se o jogador não acertou, informa que ele perdeu
        printf("Você perdeu! Tente de novo!\n"); // Informa ao jogador que ele perdeu

        printf("\n\n"); // Imprime espaços em branco para melhor formatação
        printf("       \\|/ ____ \\|/    \n"); // Imprime parte de outra arte ASCII
        printf("        @~/ ,. \\~@      \n"); // Imprime parte da mesma arte ASCII
        printf("       /_( \\__/ )_\\    \n"); // Imprime parte da mesma arte ASCII
        printf("          \\__U_/        \n"); // Imprime parte da mesma arte ASCII
        printf("\n\n"); // Imprime espaços em branco para melhor formatação
    }
}
