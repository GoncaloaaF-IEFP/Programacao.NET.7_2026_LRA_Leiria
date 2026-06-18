#include <stdio.h>
#include <string.h>



void addNomes(char nomes[][50]);

int main(void) {

    char nome[50];
    int telefone;
    char email[100];

    int idades[] = {1,2,3,4,5,6};

    char nomes[4][50] = {
        "nome1",
        "nome2",
        "nome3"};


    printf("Digite o seu nome: ");
    scanf("%s", nome);

    // printf("nome in: %s\n", nome);

    printf("nome: %s\n", nomes[2]);

    strcpy(nomes[3], nome);
    printf("nome: %s\n", nomes[3]);


 /*
  Crie uma func em C que permita adicionar 3 nomes a um array de nomes

  */


    char nomes2[3][50];

    addNomes(nomes2);

    for( int i = 0; i < 3; i++ ) {

        printf("nome %i: %s\n",i+1, nomes2[i]);
    }


    return 0;
}


void addNomes(char nomes[][50]) {

    for( int i = 0; i < 3; i++ ) {

        char nome[50];
        printf("Digite o seu nome: ");
        scanf("%s", nome);

        strcpy(nomes[i], nome);
    }


}