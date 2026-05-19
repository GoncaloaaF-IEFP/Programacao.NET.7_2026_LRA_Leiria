#include <stdio.h>

int main(void) {

    /*
 *
 * Faça um Programa que leia um número e exiba o dia correspondente da semana.
 * (1-Domingo, 2- Segunda, etc.),
 *
 * se digitar outro valor deve aparecer valor inválido.
 *
 */


    int dia;
    printf("%d\n", dia);

    printf("Introduzca un dia: ");
    scanf("%d", &dia);
    printf("%d\n", dia);

    int r =  dia * 2;

    printf("%d\n", r);

    // switch - case
    switch (dia) {
        case 1:
            printf("Dom\n");
            break;
        case 2:
            printf("2f\n");
            break;
        case 3:
            printf("3f\n");
            break;
        case 4:
            printf("4f\n");
            break;
        case 5:
            printf("5f\n");
            break;
        case 6:
            printf("6f\n");
            break;
        case 7:
            printf("Sab\n");
            break;
        default:
            printf("Valor invalido\n");
            break;
    }
    printf("\nBye!\n");


    return 0;
}
