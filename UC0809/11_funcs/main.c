#include <stdio.h>


/*

int a = 10 -> criar var a
a -> 10

{
    a -> 10
    {
        a -> 10
    }

    int a = a
    {
        a -> 10
        int a = 40

        a -> 40
    }

    a -> 30
}

a -> 10

*/


void olaMundo();
void soma(int a, int b);
int somaR(int valorA, int valorB);
int somaEx(int valorA, int valorB, int valorC);
int LerNum(int i);

int a = 20;
int main() {

    olaMundo();
    soma(a,2);

    int resultado = somaR(5,953);
    printf("resultado = %d\n", resultado);

    // int n1 = LerNum(1);
    // int n2 = LerNum(2);
    // int n3 = LerNum(3);


    int n1; //= LerNum(1);
    printf("Digite um número 1: " );
    scanf("%d", &n1);

    int n2;  //= LerNum(2);
    printf("Digite um número 2: ");
    scanf("%d", &n2);

    int n3;//  = LerNum(3);
    printf("Digite um número 2: ");
    scanf("%d", &n3);


    int resultadoEx = somaEx(n1,n2,n3);
    printf("resultadoEx = %d\n", resultadoEx);
    return 0;
}


void olaMundo() {
    printf("Ola Mundo\n");
}


void soma(int valor1, int valor2) {

    int soma2 = valor1 + valor2;
    printf("a soma é: %d\n", soma2);
}

int somaR(int valorA, int valorB) {

    int soma2 = valorA + valorB;
    return soma2;
}



/*
Faça um programa, com uma função que necessite de três argumentos,
e que forneça a soma desses três argumentos.
*/

int somaEx(int valorA, int valorB, int valorC) {
    // int soma2 = valorA + valorB + valorC;
    return valorA + valorB + valorC;;
}


int LerNum(int i) {
    int numLido;
    printf("Digite um número %d: ", i);
    scanf("%d", &numLido);
    return numLido;
}


/*
 * com funcs
 * crie um programa que peça utilizador numeros inteiros.
 * quando foi introduzido um valor negativo termine o programa
 *
 *
 */