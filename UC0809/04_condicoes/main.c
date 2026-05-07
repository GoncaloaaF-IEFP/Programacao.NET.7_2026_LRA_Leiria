#include <stdio.h>

/*
 * T -> 1
 * F -> 0
 *
 */




/*
 *
 *  1 == 1 -> T
 *  3 == 1 -> F
 *
 *   4 > 5 -> F
 *   5 > 5 -> F
 *   7 > 2 -> T
 *
 *   4 >= 5 -> F
 *   5 >= 5 -> T
 *   7 >= 2 -> T
 *
 *  <
 *  <=
 *
 *  != -> dif / não eq
 *
 *  ! - not
 *
 *
 */


int main(void) {

   // bool x = !(1 == 8);
  //  printf("%d\n", x);



    // if( condição ) { bloco se T}

    int n = 10;
    int y = 20;

    if (n > y) {
        printf("It Works!!");
    }



    /*
     * Crie uma app que receba 2 num do utilizador.
     * indique se são diferentes
     *
     */

    /*
    int n1;
    int n2;

    printf("num 1: ");
    scanf("%d", &n1);

    printf("num 2: ");
    scanf("%d", &n2);

*/

    /*
     * ==
     * >
     * >=
     * <
     * <=
     * !=
     *
     */
    /*
    if (n1 != n2) {
        printf("sim são Diferentes");
    }
    */
/*
    int n1;
    int n2;

    printf("num 1: ");
    scanf("%d", &n1);

    printf("num 2: ");
    scanf("%d", &n2);

    if (n1 == n2) {
        printf("são Iguais");
    }else {
        printf("são Diferentes");
    }

*/



    /*
     *
  * Crie uma app que receba dois num do utilizador.
  * mostre o maior dos dois
  *
  */

    int n1;
    int n2;

    printf("num 1: ");
    scanf("%d", &n1);

    printf("num 2: ");
    scanf("%d", &n2);


    if (n1 > n2) { // se n1 > n2
        printf("o maior é: %d\n", n1);
    }else { // else
        printf("o maior é: %d\n", n2);
    }



    /*
    *
    * Crie uma app que receba dois num do utilizador.
    * mostre o maior dos dois, caso sejam iguais diga que são iguais
    *
    */


    if (n1 > n2) { // se n1 > n2
        printf("o maior é: %d\n", n1);
    } else if (n1 < n2) { // senão se
        printf("o maior é: %d\n", n2);
    }else if (n1 == n2) { // senão
        printf("são iguais");
    }else {
        printf("so para demo, que nc vai correr");
    }

    return 0;
}
