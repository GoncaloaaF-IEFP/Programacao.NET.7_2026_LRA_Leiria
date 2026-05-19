#include <stdio.h>


// loops

// while
// do- while


/*
 *  x = 1
 *
 *  x++ -> x = x + 1
 *      -> x += 1
 *
 *
 *
 *
 *
 *
 */

int main(void) {

    int x = 120;
    int j = 102;
    int k;
    // printf("Digita um numero: ");
    // scanf("%d", &k);

    // int soma = x + j + k ;

    // printf("%d\n", soma);


    while (x <= 10) {
        printf("x is %d\n", x);
        x += 1; // <=> x++ <=> x = x + 1
    }
    printf("final x is %d\n", x);

    /*
    int y = 7;

    printf("y is %d\n", y);
    printf("y++ is %d\n", y++);
    printf("y is %d\n", y);

    printf("++y is %d\n", ++y);

    printf("y += 1 is %d\n", y += 1);

*/

    int i2 = 40;
    do {
        printf("i2 is %d\n", i2);
        i2 += 1;
    }while (i2 <= 10);


    // mostre os num par entre 0 e 100 (while ou do-while)

    int ex1 = 0;

    while (ex1 <= 100 ) {

        if (ex1 % 2 == 0) {
            printf("%d ", ex1);
            ex1 += 2;
            continue;
        }
        ex1 += 1;
    }
    printf("\n");

    printf("------------------\n");
    printf("------------------\n");
    printf("------------------\n");

    // mostre os num par entre min e max (while ou do-while)
    // min e max devem ser pedidos ao utilizador
    // deve garantir que  min < max


    int min = 10;
    int max = 10;

    printf("min: ");
// scanf("%d", &min);

    printf("max: ");
//    scanf("%d", &max);

    if (min > max) {
        int aux = min;
        min = max;
        max = aux;
    }

    while (min <= max ) {

        if (min % 2 == 0) {
            printf("%d ", min);
            min += 2;
            continue;
        }
        min += 1;
    }
    printf("\n");





    printf("------------------\n");
    printf("------------------\n");
    printf("------------------\n");
/*
    int it = 21474834231;
    float l = it / 1.23;

    printf("it is %f\n", l);

    scanf("%d", &min);
    printf("%d\n", min);

*/
    // int - 32b
    // min <- -2 147 483 648
    // max <-  2 147 483 647


    // long (int com 64b)

    // 9 223 372 036 854 775 807
    // -9 223 372 036 854 775 808


    /*

    10 % 2

    0 1 0 1 0 1 0 1
    0 1 2 3 4 5 6 7 8 9 10


    */
    //se  10 maior que 0 fazer
      if (10 > 0) {
        printf("ok \n");
    }


    int it = 10;
    while (it < 100000) {

        printf("it is %d\n", it);
        it += 1000;
        if (it > 10000) {
            break; // termina o loop
        }
    }


    /*
     * Faça um programa que peça ao utilizador numeros até ser introduzido um valor negativo
     */



    return 0;
}
