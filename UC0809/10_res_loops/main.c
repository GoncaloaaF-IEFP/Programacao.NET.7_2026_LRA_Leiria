#include <stdio.h>


/*
 *
Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3%
e que a população de B seja 200000 habitantes com uma taxa de crescimento de 1.5%.


País A:
população 80 000 habitantes
crescimento 3%

ano 0 - 80 000
ano 1 - 80 000 * 1.03 = 82 400
ano 2 - 82 400 * 1.03 = 84 872
ano 5 -               = 92 741
ano 10 -              = 107 513



País A:
população 200 000 habitantes
crescimento 1,5%


ano 0 - 200 000
ano 1 - 200 000 * 1.015 = 203 000
ano 2 -                  = 206 054
ano 5 -                  = 215456
ano 10 -                 = 231 108


Faça um programa que calcule e escreva o número de anos necessários para que a população do país
A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento.




Altere o programa anterior permitindo ao usuário informar as populações e as taxas de crescimento iniciais.

Valide a entrada e permita repetir a operação.

*/

int main(void) {


    int popA = 80000;
    double tcA = 0.03;

    int popB = 200000;
    double tcB = 0.015;

    int anos = 0;


    printf("popA: ");
    scanf("%d", &popA);
    printf("Taxa crecimento A: ");
    scanf("%lf", &tcA);

    printf("popB: ");
    scanf("%d", &popB);
    printf("Taxa crecimento B: ");
    scanf("%lf", &tcB);


    // validar dadoss


    while (popA < popB) {
        popA = popA * (1 + tcA);
        popB = popB * (1 + tcB);
        anos++;
    }

    printf("o pais A ultrapassa o B em %d anos", anos);



    return 0;
}
