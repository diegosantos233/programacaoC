#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogado, computador;
    srand(time(0));

    printf("jogo de jokenpõ\n");
    printf("Escolha uma opção\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha\n");
    scanf("%d", &jogado);
    
    computador = rand() % 3 +1;

    switch (jogado)
    {
    case 1:
        printf("jogado: Pedra\n");
        break;
    case 2:
        printf("jogado: Papel\n");
        break;
    case 3:
        printf("jogado: Tesoura\n");
        break;
    
    default:
        printf("Opção invalida\n");
        break;
    }

    switch (computador)
    {
    case 1:
        printf("computador: Pedra\n");
        break;
    case 2:
        printf("computador: Papel\n");
        break;
    case 3:
        printf("computador: Tesoura\n");
        break;
     }

    if(jogado == computador){
        printf("O Jogo empatou!");
        }else if((jogado == 1) && (computador == 3)||
              (jogado == 2) && (computador == 1)||
               (jogado == 3) && (computador == 2)){
                printf("Parabéns, você ganhou!");
        }else{
            printf("Você perdeu");
        }

    return 0;
