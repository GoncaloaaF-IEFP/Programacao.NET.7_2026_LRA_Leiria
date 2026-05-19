#include <stdio.h>
/*
 * 0 -> False
 * não 0 - True
 */



int main(void) {

    int x = 1;

    if (x > 0) {
        if (x % 2 == 0) {
            printf("Positivo e par");
        }
    }





    /*
     * ! - Not
     *      !T -> F
     *      !F -> T
     * && - And
     *      T && T -> T
     *      T && F -> F
     *      F && T -> F
     *      F && F -> F
     * || - or
     *      T || T -> T
     *      T || F -> T
     *      F || T -> T
     *      F || F -> F
     */



    x = -2;
    if (x > 0) {
        if (x % 2 == 0) {
            printf("Positivo e par\n");
        }
    }

    if ((x > 0) && (x % 2 == 0) ) {
        printf("Positivo e par\n");

    }

    if ( x > 0 || x % 2 == 0 ) {
        printf("Positivo ou par\n");
    }


 // positivo e par
 // ou
 // negativo e impar ?

    x = 3;

    if ( (x > 0 && x % 2 == 0 ) || (x < 0 && x % 2 != 0)) {
        printf("Positivo ou par ou negativo e impar\n");
    }

    return 0;
}
