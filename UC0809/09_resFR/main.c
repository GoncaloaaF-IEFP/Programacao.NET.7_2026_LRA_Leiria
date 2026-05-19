#include <stdio.h>
#include <math.h>

// retrun 0 -> ok
// return 1 -> Erro

int main(void) {

    double a,b,c;
    double delta;

   /*
    * Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c.
    * O programa deverá pedir os valores de
    *   a
    *   b
    *   c
    * fazer as consistências, informando ao usuário nas seguintes situações: - Done

            Se o usuário informar o valor de A igual a zero,
            a equação não é do segundo grau e o programa não deve fazer pedir os demais valores, sendo encerrado; -> done

            Se o delta calculado for negativo, a equação não possui raizes reais.
            Informe ao usuário e encerre o programa; -Done

            Se o delta calculado for igual a zero a equação possui apenas uma raiz real;
            informe-a ao usuário;

            se delta == 0 enta
                escreve a eq so tem uma riaz -Done

            Se o delta for positivo, a equação possui duas raiz reais; informe-as ao usuário;
    *
    *
    */

    printf("-- Eq 2 grau --\n");


    printf("a: ");
    scanf("%lf",&a);

    if (a==0) {
        printf("-- Erro - eq impssivel --\n");
        return 1;
    }


    printf("b: ");
    scanf("%lf",&b);


    printf("c: ");
    scanf("%lf",&c);


    delta = b*b-4*a*c;

    if (delta<0) {
        printf("-- Erro - impssivel --\n");
        return 1;
    }

    if (delta == 0) {
        printf("-- so tem uma raiz --\n");
        double x1 = (-b)/(2*a);
        printf("raiz: %lf\n",x1);
        return 0;
    }

    printf("-- tem Duas raizes --\n");

    double raiz = sqrt(delta);

    double x1 = (-b+raiz)/(2*a);
    double x2 = (-b-raiz)/(2*a);

    printf("x1: %lf\n",x1);
    printf("x2: %lf\n",x2);


    return 0;
}
