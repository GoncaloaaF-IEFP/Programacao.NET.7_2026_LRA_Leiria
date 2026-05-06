#include <stdio.h>

int main() {
    //  comentario

    /*

      cmt
      multi
      linha

     */


    int idade = 10;
    float salario = 12.231f;
    double valor = 12.231;
    // char gen = 'M';

    long num  = 123;

    // float vs double

    // int ->  -2,147,483,648               e 2,147,483,647
    // long -> -9,223,372,036,854,775,808	e 9,223,372,036,854,775,807


    int ano = 2026;
    printf("Ola Mundo, %d\n", ano);
    printf("nova\tlinha\n");

    printf("-------\n");
    printf("%i\n", 0xff);
    printf("%d\n", 0xff);


/*
 * decimal
 *  0 1 2 3 4 5 6 7 8 9
 *
 *  bin
 *  0 1
 *
 *  octal
 *  0 1 2 3 4 5 6 7
 *
 *  hexa
 *
 *  0 1 2 3 4 5 6 7 8 9 a b c d e f
 *     r  g  b
 *  # ff 00 00
 *   255  0  0
 *
 */

    printf("%d\n", 0xca);
    printf("%d\n", 0x59);
    printf("%d\n", 0x59);

    float altura = 12.3f;
    printf("A altura é: %f\n", altura);


    double altura2 = 12.3;
    printf("A altura2 é: %lf\n", altura2);



    printf("----------------\n");
    float altura3 = 12.3f;
    printf("A altura é: %.2f\n", altura3);


    printf("--------------\n");

    char l = 'd'; //char  '' // String -> ""
    printf("a letra é: %c\n", l);

    printf("--------------\n");

    int novoNum;
    printf("Digite o numero: ");
    scanf("%d", &novoNum);
    printf("o valor inserido foi: %d\n", novoNum);

    int novoNum2;
    printf("Digite o numero: ");
    scanf("%d", &novoNum2);
    printf("o valor inserido foi: %d\n", novoNum);

    printf("--------------\n");

    int novoNum3;
    printf("novo num3 %d \n", novoNum3);

    float novoNum4;
    printf("novo num3 %f \n", novoNum4);

    float novoNum5f = 12.33123f;
    printf("f novo num3 %d \n", novoNum5f);
    printf("f novo num3 %i \n", novoNum5f);



    double novoNum5d = 12.33123;
    printf("d novo num3 %d \n", novoNum5d);
    printf("d novo num3 %i \n", novoNum5d);


    return 0;
}
