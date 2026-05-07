#include <stdio.h>

int main(void) {

/*


    Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].

    Faça um Programa que peça dois números e imprima a soma.

    Faça um Programa que peça as 4 notas bimestrais e mostre a média.

    Faça um Programa que converta metros para centímetros.

    Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

    Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o utilizador.

    Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
        Calcule e mostre o total do seu salário no referido mês.


    Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius.
        C = 5 * ((F-32) / 9).



 */


    /*
    Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o utilizador.

        calcule a área de um quadrado -> a = l * l

        mostre o dobro desta área para o utilizador
            Calcular o dobro da area -> d = a * 2
            mostrar d
    */

    int lado;
    printf("Digite o lado: ");
    scanf("%d", &lado);
    int area = lado * lado;
    int dobro = area * 2;

    printf("o dobro da area é %d\n", dobro);

 //  Faça um Programa que peça as 4 notas bimestrais e mostre a média.

    int nota1, nota2, nota3, nota4;

    printf("Digite a 1ª nota: ");
    scanf("%d", &nota1);

    printf("Digite a 2ª nota: ");
    scanf("%d", &nota2);

    printf("Digite a 3ª nota: ");
    scanf("%d", &nota3);

    printf("Digite a 4ª nota: ");
    scanf("%d", &nota4);

    int soma = nota1 + nota2 + nota3 + nota4;
    
    int media = soma / 4;

    return 0;
}
