#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n1 = 10, n2 = 20;

    int soma = n1 + n2;
    printf("soma = %d\n", soma);

    int subtracao = soma - n1;
    printf("subtracao = %d\n", subtracao);

    int multiplicacao = soma * n1;
    printf("multiplicacao = %d\n", multiplicacao);

    int n3 = 10;
    int n4 = 5;
    int divisao = n3 / n4;
    printf("divisao = %d\n", divisao);

    /*
        int x;  <- criar a var
        x = 10;  <- atrib val a var
        -----
        int j = 10; <- criar a var e a atrib valor
        j = 41;     <-se a var ja existe -> alterar o valor

    */

    n3 = 10;
    n4 = 3;
    divisao = n3 / n4;
    printf("divisao = %d\n", divisao);


    double div2 = n3 / n4;
    printf("divisao = %f\n", div2);



    double n5 = 10.0;
    double n6 = 3.0;

    divisao = n5 / n6;
    printf("divisao = %d\n", divisao);

    div2 = n5 / n6;
    printf("divisao = %f", div2);

    printf("------------------------\n");



    n1 = 10;
    n2 = 20;

    double res = (double) n1 / n2;
    printf("res = %f\n", res);

    return 0;
}
