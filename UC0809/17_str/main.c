#include <stdio.h>
#include <string.h>
/*
 * strlen -> devolve o tamanho do array de char
 * strcat -> junta dois arrays de str strcat(dest, Valor) -> destValor
 * strcpy -> copia uma str para outra
 *
 */
int main(void) {

    char nome[] = "Goncalo";
    int notas[] = { 1, 2, 3, 4, 5 };

    printf("ola %s, como estas?\n", nome);

    printf("%c\n", nome[0]);


    // qts letras tem o nome (não esquecer que nome é um array de char)?
    int numLetras = sizeof(nome) / sizeof(nome[0]);

    // mostre o número de letras que o nome tem
    printf("%d\n",numLetras);
    //0 ... 8
    // mostre todas as letras do nome

    for (int i = 0; i < numLetras-1; i++) {
        printf("%c\n", nome[i]);
    }

    char aluno[4] = "Ana"; // <-> {'A', 'n', 'a', '\0'}; -> fazem o mesmo

    printf("%s\n", aluno);

    printf("----------------------\n\n");

    char alunq2[4] = "Ana";
    int numLetras_o = sizeof(nome) / sizeof(nome[0]); // -> 4 num letras + /0
    int numLetras_v2 = strlen(alunq2); // -> 3 num letras

    printf("%d\n",numLetras_v2);

    printf("----------------------\n\n");

    char nome4[25];
    printf("Qual o seu nome: ");
    scanf("%s", nome4);

    printf("Ola %s\n", nome4);
    printf("Bem vindo ao sistema\n");

    /*
     * Crie uma app em c que pregunte o nome e o ano de nascimento e responda:
     *
     *  "ola [nome], tens [idade] anos
     *
     * pode assumir q este ano ja fez anos
     */
    char nome3[12];
    int ano;
    int idade;

    printf("Escreva o nome: \n");
    scanf ("%s", nome);

    printf( "Digite o ano de nascimento: \n");
    scanf ( "%d", &ano);

    idade = 2026 - ano;
    printf( "%s tem %d anos\n", nome, idade);
    printf("----------------------\n");
    printf("----------------------\n\n");


    char nomeProprio[15] = "Goncalo";
    char apelido[15] = "Feliciano";

    char fullName[30] = "";

    strcat(fullName, nomeProprio);
    strcat(fullName, " ");
    strcat(fullName, apelido);

    printf("%s\n", fullName);



    printf("--------------------\n\n");

    /*
     * crie uma app em C que pergunte ao utilizador:
     * o nome
     * o apelido
     *
     * mostre a msg
     *
     * "Bem vindo, [fullname]"
     *
     */

    printf("--------------------\n");
    printf("--------------------\n");
    printf("--------------------\n\n");


    char nomeP[15];
    char ap[15];
    char fullName2[30] = "";

    printf("Qual o seu nome: ");
    scanf("%s", nomeP);
    printf("Qual o seu apelido: ");
    scanf("%s", ap);

    strcat(fullName2, nomeP);
    strcat(fullName2, " ");
    strcat(fullName2, ap);

    printf("Bem Vindo %s\n", fullName2);


    printf("--------------------\n");
    printf("--------------------\n");
    printf("--------------------\n\n");



    char origim[5] = "abc";
    char destino[20] = "outra var1" ;

    printf("%s\n", destino);

    strcpy(destino, origim);
    printf("%s\n", destino);



    printf("--------------------\n");
    printf("--------------------\n");
    printf("--------------------\n\n");


    char txt1[10] = "abc";
    char txt2[10] = "abc";
    char txt3[10] = "123";

    int resp = strcmp(txt2, txt3);

    printf("São iguais? %d\n", resp);


    /*
     *
     * crie uma app que peça ao utilizador duas palavras e verifique se são iguais 
     *
     */

    return 0;
}
