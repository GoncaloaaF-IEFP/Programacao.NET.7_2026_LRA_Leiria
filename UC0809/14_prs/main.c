#include <stdio.h>

int main(void) {




    //  Pedra   -> 1
    //  Papel   -> 2
    //  Tesoura -> 3

    /*
     * Pedra ganha Tesoura
     * Tesoura ganha Papel
     * Papel ganha Pedra
     *
     */

    int jogador1;
    int jogador2;

    while (true) {
        printf("--- Pedra Papel Tesoura ---\n");

        printf("- Pedra   -> 1 -\n");
        printf("- Papel   -> 2 -\n");
        printf("- Tesoura -> 3 -\n");

        printf("Jogada Jogador 1: ");
        scanf("%d", &jogador1);
        // validar resposta

        printf("Jogada Jogador 2: ");
        scanf("%d", &jogador2);
        // validar resposta


        if (jogador1 == 1 && jogador2 == 3) {
            printf("Jogador 1 ganha\n");
            continue;
        }

        if (jogador1 == 3 && jogador2 == 1) {
            printf("Jogador 2 ganha");
            continue;
        }
    }




    return 0;
}

/*
 abcdef

 abc def

 ab c d ef

 a b c d e f
 
 a bc d e f

 */